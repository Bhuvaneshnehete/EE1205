import numpy as np
import matplotlib.pyplot as plt

def u(n):
    return np.heaviside(n, 1)

def x(n):
    return u(n) - u(n - 6)

def convolution_sum(n):
    result = 0
    for k in range(n + 1):
        result += x(k) * x(n - k)
    return result

# Define the range of n
n_values = np.arange(0, 7)

# Calculate y(n) for each n in the specified range
y_values = [convolution_sum(n) for n in n_values]

# Plot the graph    
plt.stem(n_values, y_values, linefmt='b-', markerfmt='bo', basefmt='r-')
plt.xlabel('n')
plt.ylabel('y(n)')
plt.title('Discrete Graph of y(n) = x(n) * h(n)')
plt.sahon as plot
def u(n):
    return np.piecewise(n,[n<0,n>=0],[0,1])
def x(n):
    return u(n)-u(n-6)
def h(n):
    return u(n)-u(n-6)
def convolve(x,n):
    return np.convolve(x,h,mode='full')
    n_values = np.arange(0,1000)
    y_values = convolve(x,h,n_values)
    print("convolution result",y_values)

