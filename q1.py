t, p = list(range(3, 10000, 2)), [2]
while t:
    p += [t[0]]
    t = [x for x in t if x % t[0]]
