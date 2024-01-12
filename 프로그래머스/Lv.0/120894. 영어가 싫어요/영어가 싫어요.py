def solution(numbers):
    dic = {"zero":"0", "one":"1", "two":"2", "three":"3", "four":"4", "five":"5", "six":"6", "seven":"7", "eight":"8", "nine":"9"}
    answer = ""
    ch = ""
    for i in numbers:
        ch += i
        if dic.get(ch):
            answer += dic[ch]
            ch = ""
    return int(answer)