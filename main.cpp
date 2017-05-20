
// First game attempt, 1d humans vs Skelletons

#include <iostream>
#include <string>
#include <util/random.h>
#include <ctime>


using namespace std;

int main() 
{
    //variables and other things needed

    int skelletons;
    int humans;

    //random number things


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
    int humanArmor = 20;
    float humanMissRate = 0.1f;

    int skelletonHealth = 150;
    float skelletonDmg = 2.4f;
    int skelletonArmor = 2;
    float skelletonMissRate = 0.4f ;

    int initiative = 1;
    int attackRoll = 1;

    while (humans != 0 || skelletons != 0) {    //loop till one team has 0 left


        //turn based fight

        while (humanHealth > 0 || skelletonHealth > 0) {    //loop till winner

        //iniciative roll
        initiative = randomInteger(1, 6);

        //attack roll vs health roll //all attack rolls check if you hit or miss the target

            if (initiative <= 3) {                //human attack if he won iniciative 
                attackRoll = randomInteger(1, 6); 
                if (attackRoll > humanMissRate)   {
                    skelletonHealth = skelletonHealth - humanDmg;
                }

                if (skelletonHealth > 0) {      //if alive, skelleton attack if he lost iniciative
                    attackRoll = randomInteger(1, 6); 
                    if (attackRoll > skelletonMissRate)  {
                        humanHealth = humanHealth - skelletonDmg;
                    }

                }

            } else {                            //skelleton attack if he won iniciative
                attackRoll = randomInteger(1, 6);
                if (attackRoll > skelletonMissRate)  {
                        humanHealth = humanHealth - skelletonDmg;
                    }
                if (humanHealth > 0) {          //if alive, human attack if he lost iniciative
                    attackRoll = randomInteger(1, 6);
                    if (attackRoll > humanMissRate)   {
                    skelletonHealth = skelletonHealth - humanDmg;

                }           
                
                    }
            
            }

        //check for casualty and substract from total

            if (humanHealth <= 0) {
            humanHealth = 500;
            humans --;
            } else {
            skelletonHealth = 150;
            skelletons --;
            }
    
        }
    }

    //game over

    cout << "Battle is over!\n";

    //outro
    //print results

    cout << "there are " << humans << "humans and " << skelletons << "remaining.\n";

    if (humans > 0) { 
        cout << "Humans have won!\n";
    } else {
        cout << "Skelletons have won!\n";

    }

}

//end













