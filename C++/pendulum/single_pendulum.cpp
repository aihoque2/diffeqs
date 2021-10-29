#include <vector>
#include <fstream>
#include <iostream>
#include <iterator>

using namespace std;


/*
let's spin a simple pendulum around 
this is taking 3Blue1Brown's implementation, but in C++!
*/

class Pendulum{
    public:
        Pendulum(); //constructor for our solver
        double g; //gravity. are we on Earth, Mars, Venus, Or Pluto?
        double L; //length of pendulum
        void run(double dt, double t0, double end_time);
        
};

Pendulum::Pendulum(){
    g = 9.8;
    L = 12.0;
        
}
const double g = 9.8;
const double L = 12.0; //length of the pendulum 