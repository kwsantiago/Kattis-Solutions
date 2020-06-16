numCases = int(input())

for i in range(numCases):
    numGuests = int(input())
    guests = list(map(int, input().split()))
    d = set()
    poss = set(guests)
    for j in guests.copy():
        if j in d:
            poss.remove(j)
            d.remove(j)
        d.add(j)
    print('Case #{}: {}'.format(i+1, poss.pop()))
