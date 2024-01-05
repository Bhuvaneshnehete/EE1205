import matplotlib.pyplot as plt
import numpy as np

# Define the function
def signal_function(n):
    return 8 - 6 * n

# Generate values for n
n_values = np.arange(-10, 10)  # Adjust the range as needed

# Calculate corresponding values of the signal
signal_values = signal_function(n_values)

# Plot the discrete signal
plt.stem(n_values, signal_values, linefmt='-', markerfmt='o', basefmt=' ')

# Add labels and a title
plt.xlabel('n')
plt.ylabel('x(n)')
plt.title('x(n) = 8 - 6n')

# Adjust the axis limits for proper scaling
plt.xlim(min(n_values) - 1, max(n_values) + 1)
plt.ylim(min(signal_values) - 10, max(signal_values) + 10)

# Show the plot
plt.grid(True)
plt.show()
