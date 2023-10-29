#include <iostream>

#include <string>

using namespace std;
//---------------------Функции и Прототипы---------------------------------------

char vowel() {
	//char vowels[12] = {'A','E','I','O','U','Y','a','e','i','o','u','y'};
	string vowels = "AEIOUYaeiouy";
		return vowels[(rand() % 12)];
}



//------------------------MAIN----------------------------------------------------
int main() {
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	//-------------------------------САМА ПРОГА-------------------------------------

	string str;
	string result;
	int x;
	cout << "Enter text:  ";
	cin >> str;

	for (int i = 0; i < str.size(); i++)
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{

			if (str[i] == 'a' || str[i] == 'A' ||
				str[i] == 'e' || str[i] == 'E' ||
				str[i] == 'u' || str[i] == 'U' ||
				str[i] == 'O' || str[i] == 'o' ||
				str[i] == 'Y' || str[i] == 'y' ||
				str[i] == 'I' || str[i] == 'i')
			{
				x = str[i];
				result = result + to_string(x);
			}
			else
			{
			result = result + vowel();
			}
		}
	}

	cout << endl << result << endl << endl;




	system("pause");
	return 0;
}
