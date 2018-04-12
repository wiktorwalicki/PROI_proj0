#include <iostream>
#include <cstring>
#include "klasy.h"

using namespace std;

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
    name=change(name);
    cout << "Write last name: " << endl;
    cin >> lastName;
    lastName=change(lastName);
    cout << "Write nickname: " << endl;
    cin >> nick;
    nick=change(nick);
}

void human::read()
{
    cout << endl << "Nice to meet You, " << name << " \"" << nick << "\" " << lastName << endl;
}
