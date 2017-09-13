/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: S-KAY
 *
 * Created on September 12, 2017, 5:11 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
class Tool {
protected:
    int strength;
    char type;
    //bool fight;
public:

    Tool(int str, char thistype) {
        strength = str;
        type = thistype;
    }

    void setStrength(int str) {
        strength = str;
    }
    /*void fight(bool f){
       
        if(fight == true){
            return "Choose Tool";
        }
        &&
         if(fight == false){
         return "Choose Exit";
         break;
        }
         
    }*/
};

class Rock : public Tool {
public:

    Rock(int str, char r) : Tool(str, r) {
        //strength = str;
        type = r;
    }

    void Display() {
        cout << "Type:      " << type << endl;
        cout << "Strength   " << strength << endl;
    }

};

class Paper : public Tool {
public:

    Paper(int str, char p) : Tool(str, p) {
        //strength = str;
        type = p;

    }

    void Display() {
        cout << "Type:      " << type << endl;
        cout << "Strength   " << strength << endl;
    }
};

class Scissors : public Tool {
public:

    Scissors(int str, char s) : Tool(str, s) {
        //strength = str;
        type = s;
    }

    void Display() {
        cout << "Type:      " << type << endl;
        cout << "Strength   " << strength << endl;
    }
};

int main(int argc, char** argv) {
  
    Scissors S(12,'s');
    Paper P(16,'p');
    Rock R(12,'r');
    S.Display();
    P.Display();
    R.Display();
    return 0;
}

