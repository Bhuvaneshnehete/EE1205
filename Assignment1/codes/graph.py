import numpy as np
import matplotlib.pyplot as plt

# Load data from the generated .txt file
data = np.loadtxt("data.txt")
n_values_discrete = data[:, 0]
y_values_discrete = data[:, 1]

# Plot the data
plt.stem(n_values_discrete, y_values_discrete, label="x(n) = 2 - 6n")
plt.xlabel("n")
plt.ylabel("x(n)")
plt.title("x(n) = 2 - 6n")
plt.legend()
plt.grid(True)
plt.savefig('plot.png')
plt.show()
