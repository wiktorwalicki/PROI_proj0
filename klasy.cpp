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

string change (string str)
{
    for(int i = 0; i < str.length(); i++)
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'y' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'Y')
            {
                str[i] = 'z';
            }
    return str;

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
    name=change(name);
    lastName=change(lastName);
    nick=change(nick);
}

void human::read()
{
    cout << endl << "Nice to meet You, " << name << " " << lastName << " \"" << nick << "\"" << endl;
}
