#include <iostream>
#include <cstring>
#include "klasy.h"

using namespace std;

string order (string str)
{
    int k=0;
    string strReturn;
    for (int i = str.length()-1; i>-1; i--)
    {
        strReturn+=str[i];
        k++;
    }
    return strReturn;
}

void human::add()
{
    cout << "Write name:" << endl;
    cin >> name;
    name=order(name);
    cout << "Write last name: " << endl;
    cin >> lastName;
    lastName=order(lastName);
    cout << "Write nickname: " << endl;
    cin >> nick;
    nick=order(nick);
}

void human::read()
{
    cout << endl << "Nice to meet You, " << name << " " << lastName << " \"" << nick << "\"" << endl;
}



