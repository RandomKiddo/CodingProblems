commands = open('dayeightdata.txt').read().split('\n')
accumulator = 0
commands_ran = []
repeat_found = False
current_index = 0

while not repeat_found:
    command = commands[current_index]
    if current_index in commands_ran:
        repeat_found = True
    else:
        commands_ran.append(current_index)
        if 'acc' in command:
            accumulator += int(command[4:])
            current_index += 1
        elif 'jmp' in command:
            current_index += int(command[4:])
        else:
            current_index += 1
    print(command, current_index)
print(accumulator)