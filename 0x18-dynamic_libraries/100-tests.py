import random
import ctypes

cops = ctypes.CDLL('./100-operations.so')
a = random.randint(-111, 111)
b = random.randint(-111, 111)
print(f"{a} + {b} = {cops.add(a, b)}")
print(f"{a} - {b} = {cops.sub(a, b)}")
print(f"{a} x {b} = {cops.mul(a, b)}")
print(f"{a} / {b} = {cops.div(a, b)}")
print(f"{a} % {b} = {cops.mod(a, b)}")
