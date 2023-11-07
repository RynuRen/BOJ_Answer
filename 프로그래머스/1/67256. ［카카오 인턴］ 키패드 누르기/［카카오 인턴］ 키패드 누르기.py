def solution(numbers, hand):
    answer = ''
    left = (3, 0)
    right = (3, 2)

    for i in numbers:
        if i == 0:
            i = 11
        coo = ((i - 1) // 3, (i - 1) % 3)
        if i in [1, 4, 7]:
            left = coo
            answer += 'L'
        elif i in [3, 6, 9]:
            right = coo
            answer += 'R'
        else:
            len_l = abs(left[0] - coo[0]) + abs(left[1] - coo[1])
            len_r = abs(right[0] - coo[0]) + abs(right[1] - coo[1])
            if len_l == len_r:
                if hand == 'left':
                    left = coo
                    answer += 'L'
                else:
                    right = coo
                    answer += 'R'
            elif len_l < len_r:
                left = coo
                answer += 'L'
            else:
                right = coo
                answer += 'R'
    return answer