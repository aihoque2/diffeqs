#include <iostream>
#include <boost/array.hpp>

#include <boost/numeric/odeint.hpp>

using namespace std;
using namespace boost::numeric::odeint;

//our state vector declared here
typedef vector<double> state_type;

const double gam = 0.15;

/*rhs for x'=f(x) */
void harmonic_oscillator( const state_type &x, state_type &dxdt, const double t)
{
    dxdt[0] = x[1];
    dxdt[1] = -x[0] - gam * x[1];
}

void write_harmonic_oscillator (const state_type &x, state_type &dxdt, double t){
    cout << t << '\t' << x[0] << '\t' << x[1] << '\t' << endl;
}

int main(){
    state_type x = {10.0, 1.0};
    integrate(harmonic_oscillator, x, 0.0, 25.0, 0.1, write_harmonic_oscillator); 
    return 0;
}