#include <iostream>

using namespace std;

template <class Type> class Twin {
    private:
        Type v1;
        Type v2;
    public:
    // 引数ありorなしでもOKのコンストラクタ
        Twin(const Type& f = Type(), const Type& s = Type())
            :v1(f), v2(s) {}
    // コピーコンストラクタ
        Twin(const Twin<Type>& t)
            :v1(t.first()), v2(t.second()) {}
    // 参照なので第一成分のgetterかつsetter → 定置オブジェクトは不可
        Type& first() {return v1;}
    // 第一成分のgetter: このクラスでは定置オブジェクトに対してのみ適用
        Type first() const {return v1;}
    // 参照なので第二部分のgetterかつsetter → 定置オブジェクトは不可
        Type& second() {return v2;}
    // 第二成分のgetter: このクラスでは定置オブジェクトに対してのみ適用
        Type second() const {return v2;}

        void set(const Type& f, const Type& s) {
            v1 = f; v2 = s;
        }
        Type min() const {return v1 < v2 ? v1 : v2;}
        bool ascending() const {return v1 < v2;}
        void swap() {
            Type temp = v1;
            v1 = v2;
            v2 = temp;
        }
};

// stream operator
template <class Type> inline std::ostream&
    operator<<(std::ostream& os, const Twin<Type>& t)
{
    return os << "[" << t.first() << ","
      << t.second() << "]";
};

int main()
{
    const Twin<int> t1(15,37);
    cout << "t1 = " << t1 << endl;

    Twin<string> t2("ABC", "XYZ");
    cout << "t2 = " << t2 << endl;

    cout << "t2 の値を変更します\n";
    cout << "新しい第一値：";
    cin >> t2.first(); // 参照型のfirst() をsetterとして呼び出し
    cout << "新しい第二値：";
    cin >> t2.second(); // 参照型のsecond() をsetterとして呼び出し
    if(!t2.ascending()) {
        cout << "第一値<第二値が成立しないので入れ替え\n";
        t2.swap();
    }
    cout << "t2 = " << t2 << endl;
}