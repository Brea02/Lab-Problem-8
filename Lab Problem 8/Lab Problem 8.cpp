//Lab Problem 8
#include<iostream>
#include<string>

using namespace std;

//function prototypes
int countCharacter(string str);

int main() {
	cout << "Enter a word to be checked: ";
	string str;
	cin >> str;

	cout << "The word has " << countCharacter(str) << " characters." << endl;

}

//countCharacter: counts the number of characters in a string
//@param: string value to be checked
//@return: int value of the number of characters in a string
int countCharacter(string str) {
	int count = str.length();
	return count;
}