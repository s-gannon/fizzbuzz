# FizzBuzz
The classic children's game (and interview question) FizzBuzz

# How it works

There is a hard coded dictionary containing the multiples (the keys) and the respective word to print if a number is divisible by the multiple (the value). A for loop goes through a hardcoded number of iterations, checking each number to see if it divides evenly into any of the multiples. If it is divisible by one or more of the multiples, it prints the value associated with it. If not, it prints the number that was being checked.

There are multiple ways to solve this problem, however a dictionary seems like one of the better ways to store the pairs of multiples and words since the keys won't repeat (we don't need to check 3 twice and print two different values)
