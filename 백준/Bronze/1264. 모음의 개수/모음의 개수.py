while (s:=input()) != '#':
    print(sum(map(s.lower().count, 'aeiou')))