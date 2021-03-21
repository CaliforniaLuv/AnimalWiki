#include<iostream>
#include<string>

using namespace std;

class wikipedia
{
private:
	char A[100];
	char B[100];

public:

	void setsearch(char* pA) { strcpy_s(A, pA); }
	void setmake(char* pB) { strcpy_s(B, pB); }

};

int main(void)
{
	wikipedia R[2]{};  /// 등록과 검색
	char A1[100];
	char B1[100];
	const char* Asearch[2] = { "검색","등록" };
	const char* Bsearch[5] = { "돼지","고양이","호랑이","뱀","강아지" };
	char escape;
	char p[100];
	char c[100];
	char t[100];
	char s[100];
	char d[100];
	string* pig = new string[100];
	string* cat = new string[100];
	string* tiger = new string[100];
	string* snake = new string[100];
	string* dog = new string[100];
	int b = 1;

	pig[0] = "돼지 부위 중 삼겹살이 최고다.\n";
	cat[0] = "호랑이, 사자와 먼 친척 관계이다.\n";
	tiger[0] = "육식동물계 최강이다.\n";
	snake[0] = "뱀은 연체동물이다.\n";
	dog[0] = "인간과 가장 친한 동물이며 공생관계이다.\n";

	cout << "안녕하십니까! 신비한 동물 백과사전에 접속하신 것을 환영합니다!" << endl;
	cout << "\t ┌────────────────────────────┐\n";
	cout << "\t ㅣ                           ㅣ\n";
	cout << "\t ㅣ <동물 목차>               ㅣ\n";
	cout << "\t ㅣ                           ㅣ\n";
	cout << "\t ㅣ 1. 돼지                   ㅣ\n";
	cout << "\t ㅣ 2. 고양이                 ㅣ\n";
	cout << "\t ㅣ 3. 호랑이                 ㅣ\n";
	cout << "\t ㅣ 4. 뱀                     ㅣ\n";
	cout << "\t ㅣ 5. 강아지                 ㅣ\n";
	cout << "\t └────────────────────────────┘\n";

	cout << endl;
	cout << endl;
	cout << endl;
	while (1)
	{
		cout << "┌─────────────────────────────────────────────────────┐\n";
		cout << "ㅣ 검색하시겠습니까? 혹은 정보를 등록하시겠습니까?ㅣ" << endl;
		cout << "ㅣ ★ 검색 ,  ☆ 등록                             ㅣ\n";
		cout << "└─────────────────────────────────────────────────────┘\n";
		cin >> A1;
		R[1].setsearch(A1);
		cout << endl;

		if (strcmp(A1, Asearch[1]) == 0)
			while (1)
			{
				cout << "어느 동물을 정보 등록할까요?" << endl;
				cin >> B1;
				R[2].setmake(B1);

				if (strcmp(B1, Bsearch[0]) == 0)
				{
					cout << "돼지의 정보를 무엇으로 등록하실 건가요?" << endl;
					cin.getline(p, 100, 'x');          // 등록 내용 작성 후 'x' 필히 누를것!!!!!
					pig[b] = p;
					b++;
					break;
				}

				if (strcmp(B1, Bsearch[1]) == 0)
				{
					cout << "고양이의 정보를 무엇으로 등록하실 건가요?" << endl;
					cin.getline(c, 100, 'x');
					cat[b] = c;
					b++;
					break;
				}

				if (strcmp(B1, Bsearch[2]) == 0)
				{
					cout << "호랑이의 정보를 무엇으로 등록하실 건가요?" << endl;
					cin.getline(t, 100, 'x');
					tiger[b] = t;
					b++;
					break;
				}

				if (strcmp(B1, Bsearch[3]) == 0)
				{
					cout << "뱀의 정보를 무엇으로 등록하실 건가요?" << endl;
					cin.getline(s, 100, 'x');
					snake[b] = s;
					b++;
					break;
				}

				if (strcmp(B1, Bsearch[4]) == 0)
				{
					cout << "강아지의 정보를 무엇으로 등록하실 건가요?" << endl;
					cin.getline(d, 100, 'x');
					dog[b] = d;
					b++;
					break;
				}

				while (strcmp(B1, Bsearch[0]) != 0 && strcmp(B1, Bsearch[1]) != 0 && strcmp(B1, Bsearch[2]) != 0 && strcmp(B1, Bsearch[3]) != 0 && strcmp(B1, Bsearch[4]) != 0)
				{
					cout << "잘못 입력하셨습니다. 다시 입력하세요." << endl;
					cin >> B1;
					break;
				}

			}


		if (strcmp(A1, Asearch[0]) == 0)
			while (1)
			{
				{
					cout << "┌───────────────────────────────┐\n";
					cout << "ㅣ 어느 동물을 검색하시겠습니까?ㅣ\n";
					cout << "ㅣ                              ㅣ\n";
					cout << "└───────────────────────────────┘\n";
					cin >> B1;

					if (strcmp(B1, Bsearch[0]) == 0)
					{

						for (int i = 0; i <= b - 1; i++)
							cout << pig[i] << endl;

					}

					if (strcmp(B1, Bsearch[1]) == 0)
					{
						for (int i = 0; i <= b - 1; i++)
							cout << cat[i] << endl;
					}

					if (strcmp(B1, Bsearch[2]) == 0)
					{
						for (int i = 0; i <= b - 1; i++)
							cout << tiger[i] << endl;
					}

					if (strcmp(B1, Bsearch[3]) == 0)
					{
						for (int i = 0; i <= b - 1; i++)
							cout << snake[i] << endl;
					}

					if (strcmp(B1, Bsearch[4]) == 0)
					{
						for (int i = 0; i <= b - 1; i++)
							cout << dog[i] << endl;
					}

					else if (strcmp(B1, Bsearch[0]) != 0 && strcmp(B1, Bsearch[1]) != 0 && strcmp(B1, Bsearch[2]) != 0 && strcmp(B1, Bsearch[3]) != 0 && strcmp(B1, Bsearch[4]) != 0)
					{

						cout << "잘못 입력하셨습니다. 다시 입력하세요." << endl;
					}
				}
				cout << "\t ┌───────────────────────────────┐\n";
				cout << "\t ㅣ              처음화면을 원하시면 [Y]                         ㅣ\n";
				cout << "\t ㅣ              다른 정보 검색을 원하지면 [N]을 입력하시오      ㅣ\n";
				cout << "\t └───────────────────────────────┘\n";
				cin >> escape;
				while (escape != 'Y' && escape != 'N')
				{
					cout << "다시 입력하시오 Y or N : ";
					cin >> escape;
					cout << endl;
				}
				if (escape == 'Y')
					break;
			}




	}


	system("Pause");
}




