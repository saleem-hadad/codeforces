n = int(raw_input())
s = raw_input()
s = set(s.lower())
if len(s) == 26:
    print "YES"
else:
    print "NO"