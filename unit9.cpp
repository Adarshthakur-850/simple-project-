#include <iostream>
#include <cstring>
using namespace std;

int countVowels(char *sentence) {
    char *vowels = "AEIOUaeiou";
    int vowelCount = 0;

    for (int i = 0; sentence[i]; i++) {
        if (strchr(vowels, sentence[i]) != NULL) {
            vowelCount++;
        }
    }

    return vowelCount;
}

int main() {
    int numLines;
    cin >> numLines;
    cin.ignore();

    for (int i = 0; i < numLines; i++) {
        char sentence[1000];
        cin.getline(sentence, sizeof(sentence));

        int vowelCount = countVowels(sentence);

        cout << vowelCount << endl;
    }

    return 0;
}
