from itertools import combinations

n, m = map(int, input().split())
card = list(map(int, input().split()))

maxi = 0
for card3 in combinations(card, 3):
    sum_card3 = sum(card3)
    if maxi < sum_card3 <= m:
        maxi = sum_card3
print(maxi)