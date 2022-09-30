// ECHO
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    while (true)
    {
        cin >> s;
        if(s == "exit")
            return 0;
        else
            cout << s;
    }
    

    return 0;
}