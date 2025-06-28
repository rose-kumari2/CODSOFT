#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    cout << "Welcome to Number Guessing Game."<< endl;
    string name;
    char input;
    cout << "Enter your name : ";
    cin >> name;
    do {
        srand(time(0));
        int random_number = rand()%50 + 1;
        int input_user;
    
        while(input_user != random_number){
            cout << "Enter a guess number between 1 to 50 : ";
            cin >> input_user;
    
            if(input_user < random_number){
                cout << "Your guessed number is less than my number. "  << endl; 
            }
            else if(input_user > random_number){
                cout << "Your guessed number is greater than my number. "  << endl; 
            }
            else{
                cout << "Congratulations ! You guessed the correct number. " << endl;
            }
        }
        cout << "Would you like to try again Y/N : ";
        cin >> input;
    
    }while(input!='N');
    cout << "Game over !" << endl;
    return 0;
}