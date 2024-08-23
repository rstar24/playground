def frequency(n):
    a = sorted(n)
    
    ss_1 = set(a)
    ss_2 = list(ss_1)
    
    dict1 = {}
    dict1 = dict1.fromkeys(ss_1, 0)

    for i in range(len(n)):
        if n[i] in ss_2:
            dict1[n[i]] += 1
    
    fqs = list(dict1.values())
    max_fq = max(fqs)
    min_fq = min(fqs)
    max_fq_keys = [x for x in dict1 if dict1[x] == max_fq]
    min_f1_keys = [x for x in dict1 if dict1[x] == min_fq]
    
    result = [min_f1_keys, max_fq_keys]
    return result

print(frequency([13,12,11,13,14,13,7,11,13,14,12]))
print(frequency([13,12,11,13,14,13,7,11,13,14,12,14,14]))
print(frequency([13,12,11,13,14,13,7,11,13,14,12,14,14,7]))

def onehop(flights):
    one_hop_flights = set()  # To store the results, ensuring unique pairs
    direct_flights = set(flights)  # Convert the list to a set for faster lookup

    # Iterate through all possible pairs of flights
    for (i, k1) in flights:
        for (k2, j) in flights:
            # Ensure that there's an intermediate city k (i -> k -> j)
            # and that we avoid pairs of the form (i, i)
            if k1 == k2 and i != j:
                one_hop_flights.add((i, j))  # Add the result as a tuple

    # Convert the set to a sorted list
    return sorted(one_hop_flights)

# Example usage:
print(onehop([(2,3),(1,2)]))  # Output: [(1, 3)]
print(onehop([(2,3),(1,2),(3,1),(1,3),(3,2),(2,4),(4,1)]))  
# Output: [(1, 2), (1, 3), (1, 4), (2, 1), (3, 2), (3, 4), (4, 2), (4, 3)]
print(onehop([(1,2),(3,4),(5,6)]))  # Output: []

    
