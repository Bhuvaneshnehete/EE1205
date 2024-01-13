sequence = list(range(34,9,-2))
def Z_transform(sequence):
    return "+".join([f"{value}*z^(-{i})"for i, value in enomerate(squence)])
    z_transform_result = z_transform(sequence)
    print(f"transform:{z_transform_result}")
result = sum(range(34,9,-2))
print(result)
