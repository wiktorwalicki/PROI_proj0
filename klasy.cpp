#include <iostream>
#include "klasy.h"

using namespace std;

void human::add()
{
    cout << "Write name:" << endl;
    cin >> name;
    cout << "Write last name: " << endl;
    cin >> lastName;
    cout << "Write nickname: " << endl;
    cin >> nick;
}

void human::read()
{
    cout << endl << "Nice to meet You, " << name << " " << lastName << " \"" << nick << "\"" << endl;
}



