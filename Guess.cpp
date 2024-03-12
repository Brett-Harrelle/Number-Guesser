#include <iostream>
#include <random>

using namespace std;

static mt19937_64 gen((unsigned int)time(NULL));

int main() {

    uniform_int_distribution<> distrib(1, 100);
  
    int Random;
    int Guess;

    Random = distrib(gen);

    
    for (int i = 0; i < 5; i++) {
        cout << "Guesses Remaining: " << 5 - i << endl;
        cout << "Guess a number 1 to 100: ";
        cin >> Guess;
        if (Guess == Random) {
            cout << "Correct Answer!" << endl;
            break;
        }
        else if (Guess < Random){
            cout << "Wrong Guess" << endl;
            cout << "Higher" << endl;
        }
        else {
            cout << "Wrong Guess" << endl;
            cout << "Lower" << endl;
        }
    }
    cout << endl << "Correct Answer: " << Random;
    


    return 0;
}