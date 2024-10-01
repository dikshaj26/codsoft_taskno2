#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
srand(time(0));
 int randomNumber = rand() % 100 + 1;
int userGuess = 0;

cout<<"I have selected a random number btw 1 to 100 try to guess!"<<endl;

while (userGuess != randomNumber){
  cout << "Enter your guess: ";
        cin >> userGuess;
        
        if (userGuess > randomNumber) {
            cout << "Too high! Try again" << endl;
        } else if (userGuess < randomNumber) {
            cout << "Too low! Try again" << endl;
        } 

        else {
            cout << "Congratulations! You guessed the number!" << endl;
        }
}
        return 0;

}