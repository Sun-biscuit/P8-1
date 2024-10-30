#include <iostream>
#include <string>

using namespace std;

int countvowel(string);

int main() {
	string strng;
	while (true) {
		cout << "Enter a string or Q to quit: ";
		getline(cin, strng);
		if (strng == "Q")break;
		cout << "Vowel count: " << countvowel(strng) << endl;
	}


}

int countvowel(string str) {
	int vowelcount = 0;
	char letter;
	for (int i = 0; i <= str.length(); i++) {
		letter = str[i];
		if (letter == 'A' || letter == 'a' || letter == 'e' || letter == 'E' || letter == 'I' || letter == 'i' || letter == 'o' || letter == 'O' || letter == 'U' || letter == 'u') vowelcount++;
	}
	return vowelcount;
}