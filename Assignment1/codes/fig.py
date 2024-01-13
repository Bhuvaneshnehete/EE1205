mport numpy as np
import matplotlib.pyplot as plt

def graph(n):
        return np.piecewise(n, [n < 0, n >= 0], [0, lambda n: 8 - 6 * n])

    n_values_discrete = np.arange(-10, 10, 1)

    y_values_discrete = graph(n_values_discrete)

    plt.stem(n_values_discrete, y_values_discrete, label="x(n) = 8 - 6n")
    plt.xlabel("n")
    plt.ylabel("x(n)")
    plt.title("x(n) = 8 - 6n")
    plt.legend()
    plt.grid(True)
    plt.show()
