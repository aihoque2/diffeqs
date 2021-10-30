#include <vector>
#include <fstream>
#include <iostream>
#include <iterator>

using namespace std;


/*
let's spin a simple pendulum around 
this is taking 3Blue1Brown's implementation, but in C++!
mu for dampening constant
*/

class Pendulum{
    //solve a classical mechanics pendulum problem with euler integration
    public:
        Pendulum(); //constructor for our solver
        Pendulum(double gravity, double length, double air_resistance)
        static const double g; //gravity. are we on Earth, Mars, Venus, Or Pluto?
        static const double L; //length of pendulum
        static const double mu; //dampening constant
        double get_theta_double_dot(double theta, double theta_dot);
        void run(double dt, double t0, double end_time);
        
};

Pendulum::Pendulum(){
    // some default constructor
    static const double g = 9.8;
    static const double L = 12.0;
    static const double mu = 0.1;
}

Pendulum::Pendulum(double gravity, double length, double air_resistance){
    static const double g = gravity;
    static const double 
}

const double g = 9.8;
const double L = 12.0; //length of the pendulum 