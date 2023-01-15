n = int(input())

lens = []
maxx, maxy = 0, 0
for _ in range(6):
    card_len = list(map(int, input().split()))
    if card_len[0] == 1 or card_len[0] == 2:
        maxx = max(maxx, card_len[1])
    else:
        maxy = max(maxy, card_len[1])
    lens.append(card_len)

for i in range(6):
    if lens[0][0] == lens[2][0] and lens[1][0] == lens[3][0]:
        print(n * (maxx * maxy - lens[1][1] * lens[2][1]))
        break
    lens = lens[1:] + lens[:1]