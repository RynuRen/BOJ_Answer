def solution(myString, pat):
    return 1 if pat in myString.translate(str.maketrans("AB", "BA")) else 0