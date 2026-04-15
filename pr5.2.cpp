#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
    string filename;
    cout << "Enter file name: ";
    cin >> filename;


    ifstream file(filename);
    if (!file)
    {
        cout << "Error: Could not open file!" << endl;
        return 1;
    }


    int lines = 0, words = 0, character = 0;
    string line;


    while (getline(file, line))
    {
        lines++;
        character += line.length();


        bool inWord = false;
        for (char c : line)
        {
            if (c != ' ' && c != '\t')
            {
                if (!inWord)
                {
                     words++; inWord = true;
                }
            }
            else
            {
                inWord = false;
            }
        }
    }


    file.close();


    cout << "Lines : " << lines << endl;
    cout << "Words : " << words << endl;
    cout << "Characters: " << character << endl;


    return 0;
}
