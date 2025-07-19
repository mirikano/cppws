// 試作版・優待会員クラス（ヘッダ部）

#ifndef ___VipMember0
#define ___VipMember0

#include <string>

//===== 試作版・優待会員クラス =====//
class VipMember0 {
	std::string full_name;	// 氏名
	int    number;			// 会員番号
	double weight;			// 体重
	std::string privilege;	// 特典

public:
	//--- コンストラクタ ---//
	VipMember0(const std::string& name, int no, double w, const std::string& prv);

	//--- 氏名取得（full_nameのゲッタ）---//
	std::string name() const { return full_name; }

	//--- 会員番号取得（numberのゲッタ）---//
	int no() const { return number; }

	//--- 体重取得（weightのゲッタ）---//
	double get_weight() const { return weight; }

	//--- 体重設定（weightのセッタ）---//
	void set_weight(double w) { weight = (w > 0) ? w : 0; }

	//--- 会員情報表示---//
	void print() const;

	//--- 特典取得（privilegeのゲッタ）---//
	std::string get_privilege() const { return privilege; }

	//--- 特典設定（privilegeのセッタ）---//
	void set_privilege(const std::string& prv) {
		privilege = (prv != "") ? prv : "未登録";
	}
};

#endif
