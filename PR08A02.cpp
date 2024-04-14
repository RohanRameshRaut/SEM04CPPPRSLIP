#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int wcount = 1, lcount = 0, ccount = 0, ocount = 0, blankCount = 0, i = 0;
    char ch;
    char str[50], c[10];
    ifstream fout("PR08A02.txt");
    cout << "Enter word: ";
    gets(c);
    while (fout.get(ch))
    {
        if (ch != ' ' && ch != '\n')
        {
            ccount++;
        }
        if (ch == '\n')
        {
            lcount++;
        }

        if (ch == ' ' || ch == '\n')
        {
            wcount++;
        }

        if (ch == '\n')
        {
            wcount++;
        }
    }
    fout.close();
    ifstream fin("PR08A02.txt");
    while (!fin.eof())
    {
        fin >> str;
        if (strcmp(str, c) == 0)
        {
            ocount++;
        }
    }
    cout << "Character count: " << ccount << endl;
    cout << "Line count: " << lcount << endl;
    cout << "Word count: " << wcount << endl;
    cout << "blankSpaces count: " << wcount - 1 << endl;
    cout << "occurence count: " << ocount << endl;

    return 0;
}