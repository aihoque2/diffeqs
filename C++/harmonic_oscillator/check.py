import pandas as pd
import matplotlib.pyplot as plt


df = pd.read_csv("output.csv")


df.plot(x=0, y=1, style="o")
plt.show()