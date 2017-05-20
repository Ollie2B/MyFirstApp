
// First game attempt, 1d humans vs Skelletons

#include <iostream>
#include <string>
#include <random.h>
#include <ctime>


using namespace std;

int main() 
{
    //variables and other things needed

    int skelletons;
    int humans;

    //random number things

    mt19937 randomGenerator (time(0));
    uniform_real_distribution<float> attackRoll (0.0f, 1.0f);


    //interface
    //intro
    //define number of skelly and humans

    cout << "Hello, welcome to humans vs skelletons.\n";
    cout << "Please select the number of humans.\n";
    cin >> humans;
    cout << "Now, select the number of skelletons they will fight against.\n";
    cin >> skelletons;

    cout << humans <<" hummans will fight against" << skelletons << "skelletons.\n";
    cout << "Let the battle start!!!\n";


    //battle program
    //human fights skelleton

    //stats

    int humanHealth = 500;
    float humanDmg = 13.5f;
    int humanArmor 20;

    int skelletonHealth 150;
    float skelletonDmg 2.4f;
    int skelletonArmor 2;

    //iniciative roll

    uniform_int_distribution<int> diceRoll (1, 6);

   // if function to see who goes First


    //attack roll vs health roll


    //zombie attack if he won iniciative

    //human attack if he won iniciative

    //then if alive, zombie attack if he lost iniciative

    //then if alive, human attack if he lost iniciative

    //loop till winner



    //if winner, next combat, if no more combat, end game



    //Outro
    //print results



}
















