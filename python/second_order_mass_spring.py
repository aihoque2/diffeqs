import numpy as np
from scipy.integrate import odeint
from matplotlib import pyplot as plt

def MassSpring(state, t):
    #initial state vector
    y = state[0]
    yd = state[1]

    #our constants
    k= 2.5
    m = 1.5
    g = -9.8

    ydd = (-k*y)/m + g

    return [yd, ydd]

state0 = [0.0, 0.0]
t = np.arange(0.0, 10.0, 0.1)
state = odeint(MassSpring, state0, t)

plt.plot(t, state)
plt.xlabel('TIME (sec)')
plt.ylabel('STATES')
plt.title('Mass-Spring System')
plt.legend(('$y$ (m)', '$\dot{y}$ (m/sec)'))
plt.show()
