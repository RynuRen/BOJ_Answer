def solution(k, m, score):
    answer = 0
    score.sort(reverse=True)
    
    for i in range(m-1, len(score)-len(score)%m, m):
        answer += m * score[i]
    
    return answer