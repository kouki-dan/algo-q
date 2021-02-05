l,t,p=10000,list(range(3, l, 2)),[2]
while t:
  p += [t[0]]
  t = [x for x in t if x % t[0]]
