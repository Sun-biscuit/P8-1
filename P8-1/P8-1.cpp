#include <iostream>
#include <string>

using namespace std;

int countCharacter(string);

int main() {

	string goblygook = "Zoinks Scoob";
	cout << countCharacter(goblygook);


}

int countCharacter(string str) {
	return str.length();
}