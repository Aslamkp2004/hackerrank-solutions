def serviceLane(n, cases, width):
    min_widths = []
    for case in cases:
        entry, exit = case
        min_width = min(width[entry:exit+1])
        min_widths.append(min_width)
    return min_widths

# Input
n = int(input("Enter the length of the service lane: "))
width = list(map(int, input("Enter the width values separated by spaces: ").split()))
t = int(input("Enter the number of test cases: "))
test_cases = [tuple(map(int, input("Enter the test case (entry and exit points) separated by a space: ").split())) for _ in range(t)]

# Calculate and print results
results = serviceLane(n, test_cases, width)
for result in results:
    print(result)
