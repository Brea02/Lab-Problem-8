//Lab Problem 8
#include<iostream>
#include<string>

using namespace std;

//function prototypes
int countVowel(string str);

int main() {
	cout << "Enter a word to be checked: ";
	string str;
	cin >> str;

	cout << "The word has " << countVowel(str) << " vowels." << endl;

}

//countCharacter: counts the number of characters in a string
//@param: string value to be checked
//@return: int value of the number of characters in a string
int countVowel(string str) {
	int num_char = str.length();
	string last_character = str.substr(str.length() - 1, 1);
	int num_last = str.length() - 1;

	int vowels = 0;
	int x = 0;
	
	for (x = 0; x <= num_last; x++) {
		string cut = str.substr(x, 1);
		if (cut == "a" || cut == "A" || cut == "e" || cut == "E" || cut == "i" || cut == "I" || cut == "o" || cut == "O" ||cut == "u" || cut == "U") {
			vowels++;
	
		}
		
	}

	return vowels;
}