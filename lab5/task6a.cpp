#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

int countVowels(const string& str) {
    int count = 0;
    for (char c : str) {
        if (tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u')
            count++;
    }
    return count;
}

int countWords(const string& str) {
    int count = 0;
    bool inWord = false;
    for (char c : str) {
        if (isalpha(c) && !inWord) {
            count++;
            inWord = true;
        } else if (!isalpha(c)) {
            inWord = false;
        }
    }
    return count;
}

string reverse(const string& str) {
    string reversedStr = str;
    int n = reversedStr.length();
    for (int i = 0; i < n / 2; i++) {
        char temp = reversedStr[i];
        reversedStr[i] = reversedStr[n - i - 1];
        reversedStr[n - i - 1] = temp;
    }
    return reversedStr;
}

string capitalizeSecondLetter(const string& str) {
    string result = str;
    bool capitalize = false;
    for (char& c : result) {
        if (isalpha(c)) {
            if (capitalize) {
                c = toupper(c);
                capitalize = false;
            } else {
                capitalize = true;
            }
        } else {
            capitalize = false;
        }
    }
    return result;
}


int main() {
    string fileName = "textfile.txt";
    string fileData;


    ifstream inputFile(fileName);
    if (inputFile.is_open()) {
        getline(inputFile, fileData);
        inputFile.close();
    } else {
        cerr << "Unable to open file " << fileName << endl;
        return 1;
    }

    
    cout << "Number of vowels: " << countVowels(fileData) << endl;

    cout << "Number of words: " << countWords(fileData) << endl;

    cout << "Reversed string: " << reverse(fileData) << endl;

    cout << "Capitalized second letter: " << capitalizeSecondLetter(fileData) << endl;

    return 0;
}