//
//  main.cpp
//  SATB
//
//  Created by Katie Sanders on 3/13/19.
//  Copyright © 2019 Katie Sanders. All rights reserved.
//

//Doesnt work--check

#include <iostream>
using namespace std;


int noteToNumber(string B1);
bool Parallel5Check(int lowerNote1, int lowerNote2, int higherNote1, int higherNote2);
bool Parallel8Check(int lowerNote1, int lowerNote2, int higherNote1, int higherNote2);
void Parallel5Response(bool r1, bool r2, bool r3, bool r4, bool r5, bool r6);
void Parallel8Response(bool r1, bool r2, bool r3, bool r4, bool r5, bool r6);

 

int main()
{
    
    string b1, b2, t1, t2, a1, a2, s1, s2;
    
    //takes user note input and passes it to noteToNumber function
    cout << "Enter bass notes: ";
    cin >> b1 >> b2;
    int B1 = noteToNumber(b1);
    int B2 = noteToNumber(b2);
    cout << "\n";
    
    cout << "Enter tenor notes: ";
    cin >> t1 >> t2;
    int T1 = noteToNumber(t1);
    int T2 = noteToNumber(t2);
    cout << "\n";
    
    cout << "Enter alto notes: ";
    cin >> a1 >> a2;
    int A1 = noteToNumber(a1);
    int A2 = noteToNumber(a2);
    cout << "\n";
    
    cout << "Enter soprano notes: ";
    cin >> s1 >> s2;
    int S1 = noteToNumber(s1);
    int S2 = noteToNumber(s2);
    cout << "\n";
    
    
    bool bassAndTenor5th = Parallel5Check(B1, B2, T1, T2);
    bool bassAndAlto5th = Parallel5Check(B1, B2, A1, A2);
    bool bassAndSoprano5th = Parallel5Check(B1, B2, S1, S2);
    bool tenorAndAlto5th = Parallel5Check(T1, T2, A1, A2);
    bool tenorAndSoprano5th = Parallel5Check(T1, T2, S1, S2);
    bool altoAndSoprano5th = Parallel5Check(A1, A2, S1, S2);
    
    
    bool bassAndTenor8th = Parallel8Check(B1, B2, T1, T2);
    bool bassAndAlto8th = Parallel8Check(B1, B2, A1, A2);
    bool bassAndSoprano8th = Parallel8Check(B1, B2, S1, S2);
    bool tenorAndAlto8th = Parallel8Check(T1, T2, A1, A2);
    bool tenorAndSoprano8th = Parallel8Check(T1, T2, S1, S2);
    bool altoAndSoprano8th = Parallel8Check(A1, A2, S1, S2);
    
   
    
    Parallel5Response(bassAndTenor5th, bassAndAlto5th, bassAndSoprano5th, tenorAndAlto5th, tenorAndSoprano5th, altoAndSoprano5th);
    
    Parallel8Response(bassAndTenor8th, bassAndAlto8th, bassAndSoprano8th, tenorAndAlto8th, tenorAndSoprano8th, altoAndSoprano8th);
    
    
    return 0;
}


//assigns each note an integer value from 1-12, corresponding to each semi-tone
int noteToNumber(string note)
{
    int x;
    
    
    if (note == "a")
    {
        x=1;
        return x;
    }
    
    if (note == "a#" || note == "bb")
    {
        x=2;
        return x;
    }
  
    if (note == "b")
    {
        x=3;
        return x;
    }
    
    if (note == "c")
    {
        x=4;
        return x;
    }

    if (note == "c#" || note == "db")
    {
        x=5;
        return x;
    }
  
    if (note == "d")
    {
        x=6;
        return x;
    }
   
    if (note == "d#" || note == "eb")
    {
        x=7;
        return x;
    }
    
    if (note == "e")
    {
        x=8;
        return x;
    }
    
    if (note == "f")
    {
        x=9;
        return x;
    }

    if (note == "f#" || note == "gb")
    {
        x=10;
        return x;
    }

    if (note == "g")
    {
        x=11;
        return x;
    }
 
    if (note == "g#" || note == "ab")
    {
        x=12;
        return x;
    }
    
    else
    {
        return 0;
    }
}



//function checks for parallel 5ths in between intervals based on semi-tones
bool Parallel5Check(int lowerNote1, int lowerNote2, int higherNote1, int higherNote2)
{
    if(lowerNote1 > higherNote1)
    {
        higherNote1 = higherNote1 + 12;
    }
    
    if(lowerNote2 > higherNote2)
    {
        higherNote2 = higherNote2 + 12;
    }
    
    int x = higherNote1-lowerNote1;
    cout << x;
    int y = higherNote2-lowerNote2;
    cout << y;
    
    if (x==7 && y==7)
    {
        return true;
    }
     
    else
    {
        return false;
    }
    
}

//checks for parallel 8vas
bool Parallel8Check(int lowerNote1, int lowerNote2, int higherNote1, int higherNote2)
{
    if(lowerNote1 == higherNote1)
    {
        higherNote1 = higherNote1 + 12;
    }
    
    if(lowerNote2 == higherNote2)
    {
        higherNote2 = higherNote2 + 12;
    }
    
    int x = higherNote1-lowerNote1;
    cout << x;
    int y = higherNote2-lowerNote2;
    cout << y;
    
    if (x==12 && y==12)
    {
        return true;
    }
    
    else
    {
        return false;
    }
}


//lets the user know where the parallel 5ths are
void Parallel5Response(bool r1, bool r2, bool r3, bool r4, bool r5, bool r6)
{
    
    if(r1 == true)
    {
        cout << "Parallel 5th between the bass and tenor.\n";
        return;
    }
    
    if(r2 == true)
    {
        cout << "Parallel 5th between the bass and alto.\n";
        return;
    }
    
    if(r3 == true)
    {
        cout << "Parallel 5th between the bass and soprano.\n";
        return;
    }
    
    if(r4 == true)
    {
        cout << "Parallel 5th between the tenor and alto.\n";
        return;
    }
    
    if(r5 == true)
    {
        cout << "Parallel 5th between the tenor and soprano.\n";
        return;
    }
    
    if(r6 == true)
    {
        cout << "Parallel 5th between the alto and soprano.\n";
        return;
    }
    else
    {
        cout << "No parallel 5ths.\n";
    }
}

//lets the user know where parallel 8vas are
void Parallel8Response(bool r1, bool r2, bool r3, bool r4, bool r5, bool r6)
{
    
    if(r1 == true)
    {
        cout << "Parallel 8va between the bass and tenor.\n";
        return;
    }
    
    if(r2 == true)
    {
        cout << "Parallel 8va between the bass and alto.\n";
        return;
    }
    
    if(r3 == true)
    {
        cout << "Parallel 8va between the bass and soprano.\n";
        return;
    }
    
    if(r4 == true)
    {
        cout << "Parallel 8va between the tenor and alto.\n";
        return;
    }
    
    if(r5 == true)
    {
        cout << "Parallel 8va between the tenor and soprano.\n";
        return;
    }
    
    if(r6 == true)
    {
        cout << "Parallel 8va between the alto and soprano.\n";
        return;
    }
    else
    {
        cout << "No parallel 8va.\n";
    }
}


//check spacings between voices--S-T can be more than octave but not b/w any other voice
//no voice crossing S lower than T, T lower than A, etc.
//A cannot jump higher than the S voice that preceds it

//vocal satb ranges: E2 to C5
