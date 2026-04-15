#include <iostream>
#include <string>
using namespace std;


int main() {
    string paragraph;
    cout << "Enter a paragraph:\n";
    getline(cin, paragraph);


    string words[100];
    int freq[100] = {0};
    int count = 0;
    string word = "";


    for (int i = 0; i <= paragraph.length(); i++) {
        if (paragraph[i] != ' ' && paragraph[i] != '\0') {
            char ch = paragraph[i];


            if (ch >= 'A' && ch <= 'Z')
                ch = ch + 32;


            word += ch;
        } else {
            if (word != "") {
                int found = -1;


                for (int j = 0; j < count; j++) {
                    if (words[j] == word) {
                        found = j;
                        break;
                    }
                }


                if (found != -1) {
                    freq[found]++;
                } else {
                    words[count] = word;
                    freq[count] = 1;
                    count++;
                }


                word = "";
            }
        }
    }


    cout << "\nWord Frequencies:\n";
    for (int i = 0; i < count; i++) {
        cout << words[i] << " : " << freq[i] << endl;
    }


    return 0;
}
