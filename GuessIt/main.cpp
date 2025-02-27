#include <iostream>
#include <ctime>

using namespace std;

int generateRandomNumber(int min, int max)
{
    //srand((int)time(0)); // It is a bug if putting this line here.
    return rand() % (max - min + 1) + min;
}

void guess(int randomNumber)
{
    while (true) {
        int number;
        cout << endl << "Enter your number between 1 and 100: ";
        cin >> number;
        if (number > randomNumber) {
            cout << "Your number is higher." << endl;
        }
        else if (number < randomNumber) {
            cout << "Your number is lower." << endl;
        }
        else {
            cout << "Congratulation. You win." << endl;
            break;
        }
    }
}

int main()
{
    srand((int)time(0));
    char isContinued;
    do {
        int randomNumber = generateRandomNumber(1, 100);
        //cout << randomNumber << endl;
        guess(randomNumber);
        cout << endl << "Do you want to play again (y/n) ?  ";
        cin >> isContinued;
    } while (isContinued == 'y' || isContinued == 'Y');
    return 0;
}