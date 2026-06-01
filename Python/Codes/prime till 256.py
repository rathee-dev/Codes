# Function to check if a number is prime
def prime(n):
    if n < 2:
        return False
    for i in range(2, n): 
        if n % i == 0:
            return False
    return True

# Print all prime numbers less than 256
print("Prime numbers less than 256:")
for num in range(2, 256):
    if prime(num):
        print(num, end=" ")
