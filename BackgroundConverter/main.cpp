#include <iostream>
#include "fstream"

using namespace std;


int main()
{
    setlocale(LC_ALL, "ru");

    string path = "C:\\Users\\BYDEIKA\\Desktop\\site123\\input.txt";
    string path1 = "C:\\Users\\BYDEIKA\\Desktop\\site123\\index.html";
    string c;

    cout << "input color: ";
    cin >> c;
    const char* color = c.c_str();

    fstream file;
    fstream file1;
    file.open(path);
    file1.open(path1);

    char ch;
    if (!file.is_open())
    {
        cout << "sadly" << endl;
        file.close();
        file1.close();

        return 0;
    }

    if (!file1.is_open())
    {
        cout << "sadly" << endl;
        file.close();
        file1.close();

        return 0;
    }

    cout << "happy" << endl;

    while (file.get(ch)){
        cout << ch;
        if(ch == '(') {
            while (file.get(ch)){
                if(ch == ')') {
                    break;
                }
            }
            file1 << color;
            file.get(ch);
        }

        file1 << ch;

    }


    file.close();
    file1.close();

    return 0;
}
