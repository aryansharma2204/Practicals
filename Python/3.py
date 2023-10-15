# wap to print the sum of all prime numbers between two range.

def is_prime(num):
    if num <= 1:
        return False
    if num <= 3:
        return True

    if num % 2 == 0 or num % 3 == 0:
        return False

    i = 5
    while i * i <= num:
        if num % i == 0 or num % (i + 2) == 0:
            return False
        i += 6

    return True

def sum_of_primes_in_range(start, end):
    prime_sum = 0
    for number in range(start, end + 1):
        if is_prime(number):
            prime_sum += number
    return prime_sum

# Input from the user
start = int(input("Enter the starting number: "))
end = int(input("Enter the ending number: "))

if start <= end:
    result = sum_of_primes_in_range(start, end)
    print(f"Sum of prime numbers between {start} and {end} is: {result}")
else:
    print("Invalid input. The starting number should be less than or equal to the ending number.")
