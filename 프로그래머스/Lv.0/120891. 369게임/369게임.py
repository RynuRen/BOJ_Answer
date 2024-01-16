def solution(order):
    order = str(order)
    tl = str.maketrans('369', '***')
    return order.translate(tl).count('*')