def solution(users, emoticons):
    dis = [40, 30, 20, 10]
    answer = []
    check = [0] * len(emoticons)
    def backt(depth):
        if depth == len(emoticons):
            plus = 0
            sales = 0
            for dis_thres, price_thres in users:
                total = 0
                for i in range(len(check)):
                    cost = emoticons[i] * (1 - check[i]/100)
                    if dis_thres <= check[i]:
                        total += cost
                if total >= price_thres:
                    plus += 1
                else:
                    sales += total
            answer.append([plus, sales])
            return
        for k in dis:
            check[depth] = k
            backt(depth+1)
            check[depth] = 0
    backt(0)
    answer.sort(key=lambda x:(x[0], x[1]))
    return answer[-1]