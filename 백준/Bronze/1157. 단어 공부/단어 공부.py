str = input().upper() # 대문자로 변환
alp_set = list(set(str)) # 중복 제거 세트
cnt_list =[]
for i in alp_set:
    cnt = str.count(i) # str 에서 i의 갯수를 카운트
    cnt_list.append(cnt)
if cnt_list.count(max(cnt_list)) > 1: # 갯수의 최대값이 중복되면
    print("?")
else:
    max_idx = cnt_list.index(max(cnt_list)) # 최대값의 인덱스
    print(alp_set[max_idx])