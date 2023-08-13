#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
main()
{
    srand(time(0));
    int random_number = ((rand()) % 10) +1;
    int user_gusess;
    int count;
    cout<< "\t\tWelcome to Number guessing game"<<endl;
    while (true)
    {
        cout << "\tEnter a Number between 1 amd 10: ";
        cin >> user_gusess;
        count++; 
        if (user_gusess == random_number)
        {
            cout<< "\t\tCongratulations! Your guess is correct"<<endl;
            break;
        }
        else if (user_gusess > random_number)
        {
            cout<< "\tIncorrect! Your guess is greator"<<endl;
        }
        else if (user_gusess < random_number)
        {
            cout<< "\tIncorrect! Your guess is less than number"<<endl;
        }
        else
        {
            cout<< "\t\tInvalid Input!"<<endl;
        }
    }
    cout<< "\n\tYou guess the number in " << count <<" attempts";
}