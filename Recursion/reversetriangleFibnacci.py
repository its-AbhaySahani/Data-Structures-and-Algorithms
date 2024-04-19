import sys
def generate_reverse_fibonacci(n):
    fib = [0] * (n+2)
    fib[1] = 1
    
    
    for i in range(2, n+2):
        fib[i] = fib[i-1] + fib[i-2]
    
    return fib[::-1]

def reverse_fibonacci_triangle(rows):
    fib_sequence = generate_reverse_fibonacci(rows)
    
    for i in range(rows):
        for j in range(i+1):
            print(fib_sequence[j], end=" ")
        print()

# Example usage:
rows = 5
reverse_fibonacci_triangle(rows)
