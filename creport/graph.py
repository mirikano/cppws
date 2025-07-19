import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns

# --- デザインと日本語フォントの設定 ---
# グラフ全体のデザインを、白背景にグリッド線の入った見やすいスタイルに設定
# ご自身の環境で見つかった、文字化けしないフォント名を指定してください
sns.set_theme(style="whitegrid", font_scale=1.1, rc={"font.sans-serif": ['Hiragino Sans']})
plt.rcParams['axes.unicode_minus'] = False # マイナス記号の文字化け防止

# 1. CSVファイルを読み込む
try:
    df = pd.read_csv('result1-3.csv')
except FileNotFoundError:
    print("エラー: 'result1-3.csv' が見つかりません。")
    exit()

# 処理IDに分かりやすい名前を付ける
id_map = {
    9: '整数定数', 10: '小数点定数', 11: 'float定数'
}
df['処理種別'] = df['id'].map(id_map)

# --- グラフ作成部分を修正 ---
# グラフのサイズを縦向きに適したサイズに調整
plt.figure(figsize=(6, 7)) # <--- 変更点

# 縦向きの棒グラフを作成
sns.barplot(
    x='処理種別',        # <--- 変更点
    y='clock',          # <--- 変更点
    data=df, 
    color='royalblue'
    # orient='h' は削除
)

# グラフのタイトルと軸ラベルを設定
plt.title('処理種別ごとの平均実行時間', fontsize=16)
plt.xlabel('処理種別', fontsize=12)             # <--- 変更点
plt.ylabel('実行時間 (マイクロ秒)', fontsize=12) # <--- 変更点

# X軸のラベルが重ならないように45度回転させる
plt.xticks(rotation=45, ha='right') # <--- ★最重要の変更点

# レイアウトを自動調整して、ラベルが見切れないようにする
plt.tight_layout()

# ファイルに保存して画面に表示
plt.savefig('result1-3.png')
plt.show()