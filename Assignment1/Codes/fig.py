import numpy as np
import matplotlib.pyplot as plt

# Define the step function as a discrete signal
def step_function(n):
    return np.piecewise(n, [n < 0, n >= 0], [0, lambda n: 8 - 6 * abs(n)])

# Generate discrete values for n
n_values_discrete = np.arange(-10, 10, 1)

# Calculate corresponding y values
y_values_discrete = step_function(n_values_discrete)

# Plot the stem graph
plt.stem(n_values_discrete, y_values_discrete, label='8 - 6n (discrete signal)')

# Add labels and title
plt.xlabel('n')
plt.ylabel('y')
plt.title('Discrete Signal of 8 - 6n using a step function')

# Add a legend
plt.legend()

# Show the plot
plt.grid(True)
plt.savefig('../Figs/fig1.png')

