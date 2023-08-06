def solution(number, limit, power):
    divisor = []
    for n in range(1, number+1):
        cnt = 0
        for i in range(1, int(n**0.5)+1):
            if n % i == 0:
                cnt += 1
                if i**2 != n:
                    cnt += 1
        divisor.append(cnt if cnt <= limit else power)
    
    return sum(divisor)