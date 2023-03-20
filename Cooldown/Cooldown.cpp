// Cooldown.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <Windows.h>

using namespace std;

string skillname[99];
string sname;
int cooltime[99];
int stime;
int increase = 0;
string choose;
string ok;

struct skill_t {
	int cooldown;
	string name;
};

vector<skill_t> skill;


void introduce() {
	cout << "$$$  TRPG 쿨타임 계산기 입니다.  $$$" << endl;

	cout << endl;
}//arihe

void choossing() {
	cout << "========================================" << endl;
//
	cout << "무엇을 도와드릴까요?" << endl;

	cout << "========================================" << endl;

	cout << "1 - 쿨다운 1 감소" << endl;
	cout << "2 - 스킬 등록" << endl;
	cout << "3 - 현재 스킬 현황" << endl;
	
	cout << "========================================" << endl;

	cin >> choose;

	if (choose == "1") {
		cout << "========================================" << endl;
		cout << "모든 스킬의 쿨다운을 1 낮췄습니다." << endl;
		cout << "========================================" << endl;
		for (int l = 0; l < skill.size(); l++) {

			skill[l].cooldown--;

			if (skill[l].cooldown <= 0) {
				cout << skill[l].name << " 스킬을 사용할 수 있게 되었습니다!" << endl;
				skill.erase(skill.begin() + l);
			}
		}
		cout << "========================================" << endl;
		cout << "스킬 목록" << endl;
		cout << endl;
		for (int o = 0; o < skill.size(); o++) {
			cout << skill[o].name << " -- " << skill[o].cooldown << endl;
		}
		cout << "========================================" << endl;

		//skill.erase(skill.begin()+2);
	
		cin >> ok;

		system("cls");
	}

	else if (choose == "2") {
		cout << "========================================" << endl;
		cout << "스킬 이름을 말해주세요" << endl;
		cout << "========================================" << endl;

		cin >> sname;
		skill.resize(skill.size() + 1);
		skill[skill.size() - 1].name = sname;

		cout << "========================================" << endl;
		cout << "이제 쿨타임을 말해주세요" << endl;
		cout << "========================================" << endl;

		cin >> stime;
		skill[skill.size() - 1].cooldown = (stime + 1);

		system("cls");
	}

	else if (choose == "3") {
		cout << "========================================" << endl;
		cout << "스킬 목록" << endl;
		cout << endl;
		for (int i = 0; i < skill.size(); i++) {
			cout << skill[i].name << " -- " << skill[i].cooldown << endl;
		}
		cout << "========================================" << endl;

		cin >> ok;
		system("cls");
	}
}

int main()
{
	introduce();
	while (true) {
		choossing();
		//mamuri
	}
}

