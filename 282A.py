n = int(raw_input())
s = ''
for i in range(n):
    s += raw_input()
print s.count('++') - s.count('--')