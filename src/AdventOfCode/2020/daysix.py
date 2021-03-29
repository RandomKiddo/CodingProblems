data = open('daysixdata.txt').read().split('\n\n')
total = 0
for sheet in data:
    answers = sheet.split('\n')
    people = []
    for answer in answers:
        person = []
        for _ in answer:
            person.append(_)
        people.append(person)
    similarity = people[0]
    for _ in range(1, len(people)):
        similarity = list(set(similarity) & set(people[_]))
    total += len(similarity)
    print(total, len(similarity))
print(total)
    