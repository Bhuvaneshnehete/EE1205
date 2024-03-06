import matplotlib.pyplot as plt

with open("output.txt", "r") as file:
    output_signal = [int(line.strip()) for line in file]

plt.stem(output_signal)
plt.xlabel('n')
plt.ylabel('y[n]')
plt.grid(True)
plt.show()

