t = int(raw_input())

count=0
for i in range(t):
	nums = [int(i) for i in raw_input().split(' ')]
	if nums.count(1) >= 2:
		count += 1
print count