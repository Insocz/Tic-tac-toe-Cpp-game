#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

string list[10] = {"0","1","2","3","4","5","6","7","8","9"};
string r1c1 = " ", r1c2 = " ", r1c3 = " ", r2c1 = " ", r2c2 = " ", r2c3 = " ", r3c1 = " ", r3c2 = " ", r3c3 = " ";
bool loop = true;

void grid(int place = 0, int round = 0){

    if (round == 0 && list[place] == "7"){r1c1 = "O"; list[place] = "0";}
    if (round == 0 && list[place] == "8"){r1c2 = "O"; list[place] = "0";}
    if (round == 0 && list[place] == "9"){r1c3 = "O"; list[place] = "0";}
    if (round == 0 && list[place] == "4"){r2c1 = "O"; list[place] = "0";}
    if (round == 0 && list[place] == "5"){r2c2 = "O"; list[place] = "0";}
    if (round == 0 && list[place] == "6"){r2c3 = "O"; list[place] = "0";}
    if (round == 0 && list[place] == "1"){r3c1 = "O"; list[place] = "0";}
    if (round == 0 && list[place] == "2"){r3c2 = "O"; list[place] = "0";}
    if (round == 0 && list[place] == "3"){r3c3 = "O"; list[place] = "0";}

    if (round == 1 && list[place] == "7"){r1c1 = "X"; list[place] = "0";}
    if (round == 1 && list[place] == "8"){r1c2 = "X"; list[place] = "0";}
    if (round == 1 && list[place] == "9"){r1c3 = "X"; list[place] = "0";}
    if (round == 1 && list[place] == "4"){r2c1 = "X"; list[place] = "0";}
    if (round == 1 && list[place] == "5"){r2c2 = "X"; list[place] = "0";}
    if (round == 1 && list[place] == "6"){r2c3 = "X"; list[place] = "0";}
    if (round == 1 && list[place] == "1"){r3c1 = "X"; list[place] = "0";}
    if (round == 1 && list[place] == "2"){r3c2 = "X"; list[place] = "0";}
    if (round == 1 && list[place] == "3"){r3c3 = "X"; list[place] = "0";}

    cout << endl << flush;
    cout << " " << " " << r1c1 << " | " << r1c2 << " | " << r1c3 << " " << endl << flush;
    cout << " " << "-----------" << endl << flush;
    cout << " " << " " << r2c1 << " | " << r2c2 << " | " << r2c3 << " " << endl << flush;
    cout << " " << "-----------" << endl << flush;
    cout << " " << " " << r3c1 << " | " << r3c2 << " | " << r3c3 << " " << endl << flush;
    cout << endl << " 7 8 9" << endl << " 4 5 6" << endl << " 1 2 3" << endl << flush;

    if (round == 0){cout << endl << " 'X' turn" << endl << endl;}
    else {cout << endl << " 'O' turn" << endl << endl;}

    string newlist[] = {r1c1 + r1c2 + r1c3, r1c1 + r2c1 + r3c1, r1c1 + r2c2 + r3c3, r1c2 + r2c2 + r3c2, r1c3 + r2c3 + r3c3, r1c3 + r2c2 + r3c1, r2c1 + r2c2 + r2c3, r3c1 + r3c2 + r3c3};

    for (int line = 0; line < 9; line++) {
        if (newlist[line] == "XXX") {
        
            cout << " 'X' won" << endl << endl;
            loop = false;

        }
        if (newlist[line] == "OOO") {

            cout << " 'O' won" << endl << endl;
            loop = false;

        }
    }

}

int main(){

    grid();

    int turn = 0;
    int input;


    while(loop == true){
        
        cout << " " << flush;
        cin >> input;

        system("CLS");

        if (input < 10 && input != 0){

        if (turn == 0) {turn = 1;}
        else {turn = 0;}        

        grid(input, turn);
        
        }

        else if (input > 9 || input == 0) {cout << endl << " choose 1-9" << endl << flush;}

    }

    return 0;
}