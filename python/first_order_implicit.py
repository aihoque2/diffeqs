import numpy as np
from scipy.integrate import odeint
import matplotlib.pyplot as plt

def model(y, t):
    k = 0.3
    dydt = -k*y
    return dydt


y0 = 5

t = np.linspace(0, 20)
y = odeint(model, y0, t)

plt.plot(t,y)
plt.xlabel('time')
plt.ylabel('displacement')

plt.plot(t,y)
plt.show()
