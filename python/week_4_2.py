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

def onehop(n):
    
