/*euler method for solving a diffeq*/
#include <vector>
#include <fstream>
#include <iostream>
#include <iterator>

using namespace std;

const double g = 9.81;
const double m = 2.0;
const double k = 3.0;

const double F = 1.0;

double get_xdd(double x, double t){
    double ret = 0.0;
    if (t <= 1.0){
        ret = (-k/m) * x + F/m;
    } 

    else{
        ret = (-k/m) * x;
    }
    
    return ret;
}

vector<double> integrate(double x0, double xd0, double t_final){
    /*
    perform out integration at each
    time step. at the end return the array with x vals
    */

    vector<double> ret;
    double t = 0;
    double x = x0;
    double xd = xd0;
    double dt = 0.1;

    ret.push_back(x);

    while (t < t_final){
        double xdd = get_xdd(x, t);
        x += xd*dt;
        xd = xd+xdd*dt;
        t += dt;
        ret.push_back(x);
    }

    return ret;
} 


int main(){
    vector<double> results = integrate(0, 0, 10); //simulate for 10 seconds
    double t = 0;
    vector<double> timeVec;
    for (int i = 0; i < results.size(); i++){
        cout << "time: " << t << " here's a point: " << results[i] << endl;
        timeVec.push_back(t);
        t+=0.1;
    }
    ofstream myfile("output.csv");
    for (int i = 0; i < results.size(); i++){
        myfile << timeVec[i] << "," << results[i] << endl;
    }
    return 0;
}