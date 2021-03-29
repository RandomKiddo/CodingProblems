xmas = open('dayninedata.txt').read().split('\n')
preamble = xmas[0:25]
remaining_nums = xmas[25:]
preamble_start = 0
preamble_stop = 25

invalid_number = 0

for num in remaining_nums:
    found = False
    for i in range(len(preamble)):
        for j in range(len(preamble)):
            if i != j and int(preamble[i]) + int(preamble[j]) == int(num):
                found = True
    if not found:
        invalid_number = int(num)
        break
    preamble_start += 1
    preamble_stop += 1
    preamble = xmas[preamble_start:preamble_stop]
    remaining_nums = xmas[preamble_stop:]

print('Part 1: {}'.format(invalid_number))

total = 0
contiguous_range = []
start_i = 0
for i in range(len(xmas)):
    value = int(xmas[i])
    if value == invalid_number:
        continue
    total += value
    contiguous_range.append(value)
    if total == invalid_number:
        break
    elif total > invalid_number:
        total = 0
        contiguous_range = []
        start_i += 1
        i = start_i
    print(total)

print(contiguous_range)