lines = open('dayfivedata.txt').read().split('\n')
ids = []
for line in lines:
    top = 0; bottom = 127
    for _ in range(7):
        if 'F' in line[_]:
            bottom = (top+bottom)//2
        else:
            top = (top+bottom)//2 + 1
    left = 0; right = 7
    for _ in range(7, 10):
        if 'L' in line[_]:
            right = (right+left)//2
        else:
            left = (right+left)//2 + 1
    ids.append(top*8 + left)
ids.sort()
for _ in range(len(ids) - 1):
    if ids[_] + 2 == ids[_+1]:
        your_id = ids[_] + 1
        break
print(your_id)