#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <numeric>
#include <cmath>
#include <map>
#include <iomanip>

// IDごとにデータを格納するためのデータ構造
// キーがID(int)、値がそのIDに属するデータのリスト(vector<double>)
using DataMap = std::map<int, std::vector<double>>;

int main(int argc, char* argv[]) {
    // コマンドライン引数でファイル名が与えられているかチェック
    if (argc < 2) {
        std::cerr << "使い方: " << argv[0] << " <csv_filename>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::ifstream file(filename);

    // ファイルが開けるかチェック
    if (!file.is_open()) {
        std::cerr << "エラー: ファイルを開けませんでした: " << filename << std::endl;
        return 1;
    }

    DataMap dataById;
    std::string line;

    // ヘッダー行を読み飛ばす
    if (!std::getline(file, line)) {
        std::cerr << "エラー: ファイルが空か、読み込みに失敗しました。" << std::endl;
        return 1;
    }

    // ファイルを1行ずつ読み込む
    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string id_str, trial_str, clock_str;

        // カンマで区切って各列を読み込む
        if (std::getline(ss, id_str, ',') &&
            std::getline(ss, trial_str, ',') &&
            std::getline(ss, clock_str, ','))
        {
            try {
                int id = std::stoi(id_str);
                double clock_val = std::stod(clock_str);
                // mapにIDをキーとしてclockの値を追加していく
                dataById[id].push_back(clock_val);
            } catch (const std::invalid_argument& e) {
                // 数値に変換できない行はスキップ
                // std::cerr << "警告: 数値に変換できない行をスキップしました: " << line << std::endl;
            }
        }
    }

    file.close();

    // 結果を出力
    std::cout << "ID\t" << "データ数\t" << "平均値\t\t" << "標準偏差" << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl;

    // mapに格納されたデータをIDごとに処理
    for (const auto& pair : dataById) {
        int id = pair.first;
        const std::vector<double>& values = pair.second;
        
        if (values.empty()) {
            continue;
        }

        // --- 平均値の計算 ---
        double sum = std::accumulate(values.begin(), values.end(), 0.0);
        double mean = sum / values.size();

        // --- 標準偏差の計算 ---
        double sq_sum = 0.0;
        for (double val : values) {
            sq_sum += (val - mean) * (val - mean);
        }
        // n-1で割る「不偏標準偏差」を計算 (サンプルから母集団を推定する際に使う)
        // データ数が1以下の場合は計算できない
        double std_dev = (values.size() > 1) ? std::sqrt(sq_sum / (values.size() - 1)) : 0.0;

        // 結果を整形して出力
        std::cout << std::fixed << std::setprecision(2); // 小数点以下2桁まで表示
        std::cout << id << "\t"
                  << values.size() << "\t\t"
                  << mean << "\t\t"
                  << std_dev << std::endl;
    }

    return 0;
}