#include <bits/stdc++.h>

using namespace std;

// Hacker Rank Question Link : https://www.hackerrank.com/challenges/box-it/problem?isFullScreen=true

// Implement the class Box
// l,b,h are integers representing the dimensions of the box

// The class should have the following functions :

// Constructors:
// Box();
// Box(int,int,int);
// Box(Box);

// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

// Overload operator < as specified
// bool operator<(Box& b)

// Overload operator << as specified
// ostream& operator<<(ostream& out, Box& B)

// ------------------- Implement -----------------------------
class Box
{
    int l, b, h;

public:
    Box() // default constructor..
    {
        l = b = h = 0;
    };
    Box(int a, int x, int c) // parametarized constructor..
    {
        l = a;
        b = x;
        h = c;
    };
    Box(Box *B) // copy constructor..
    {
        l = B->l;
        b = B->b;
        h = B->h;
    }
    // ................. Getter ....................
    int getLength()
    {
        return l;
    }
    int getBreadth()
    {
        return b;
    }
    int getHeight()
    {
        return h;
    }
    long long CalculateVolume()
    {
        return l * b * h;
    }
    //................. overload operator .............. // can't ..copy this tropic..
    bool operator<(Box &b)
    {
        if (this->l < b.l)
            return true;
        else if (this->b < b.b && this->l == b.l)
            return true;
        else if (this->h < b.h && this->b == b.b && this->l == b.l)
            return true;
        else
            return false;
    }
    friend ostream &operator<<(ostream &out, Box &B)
    {
        out << B.l << " " << B.b << " " << B.h;

        return out;
    }
};
