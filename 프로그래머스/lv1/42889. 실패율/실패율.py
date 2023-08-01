from collections import Counter

def solution(N, stages):
    fr = []
    ch = Counter(stages)
    usr = len(stages)
    
    for s in range(1, N+1):
        fr.append((s, ch[s] / usr if usr else 0))
        usr -= ch[s]
    
    fr.sort(key=lambda x:x[1], reverse=True)
    
    return [i[0] for i in fr]