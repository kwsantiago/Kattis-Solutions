import sys

vowels = {'a','e','i','o','u','y'}

def pigLatin(string):
    if string[0] in vowels:
        return string + 'yay'
    else:
        for i, c in enumerate(string):
            if c in vowels:
                return string[i:] + string[:i] + 'ay'

for line in sys.stdin:
    print(" ".join(map(pigLatin, line.split())))
