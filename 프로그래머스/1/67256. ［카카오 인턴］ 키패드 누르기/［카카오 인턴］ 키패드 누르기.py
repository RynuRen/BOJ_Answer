class Pad():
    def __init__(self):
        self.answer = ''
        self.left = (3, 0)
        self.right = (3, 2)
    
    def mv_left(self, coo):
        self.left = coo
        self.answer += 'L'
    
    def mv_right(self, coo):
        self.right = coo
        self.answer += 'R'

def solution(numbers, hand):
    pad = Pad()

    for i in numbers:
        if i == 0:
            i = 11
        coo = ((i - 1) // 3, (i - 1) % 3)
        if i in [1, 4, 7]:
            pad.mv_left(coo)
        elif i in [3, 6, 9]:
            pad.mv_right(coo)
        else:
            len_l = abs(pad.left[0] - coo[0]) + abs(pad.left[1] - coo[1])
            len_r = abs(pad.right[0] - coo[0]) + abs(pad.right[1] - coo[1])
            if len_l == len_r:
                if hand == 'left':
                    pad.mv_left(coo)
                else:
                    pad.mv_right(coo)
            elif len_l < len_r:
                pad.mv_left(coo)
            else:
                pad.mv_right(coo)
    return pad.answer