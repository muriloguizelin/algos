dna_sequence = input().strip()

max_length = current_length = 1

for i in range(1, len(dna_sequence)):
    if dna_sequence[i] == dna_sequence[i - 1]:
        current_length += 1
    else:
        max_length = max(max_length, current_length)
        current_length = 1

max_length = max(max_length, current_length)
print(max_length)
