#include <iostream>
#include <string>

using namespace std;

bool is_vowel(char c) {
    char vowels_2311102024[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    for (char vowel_2311102024 : vowels_2311102024) {
        if (c == vowel_2311102024) return true;
    }
    return false;
}

int count_vowels(const string &sentence_2311102024) {
    int count = 0;
    for (char c : sentence_2311102024) {
        if (is_vowel(c)) {
            count++;
        }
    }
    return count;
}

int main() {
    string sentence_2311102024;

    cout << "Masukkan kalimat: ";
    getline(cin, sentence_2311102024);

    int vowel_count = count_vowels(sentence_2311102024);

    cout << "Jumlah huruf vokal dalam kalimat: " << vowel_count << endl;

    return 0;
}