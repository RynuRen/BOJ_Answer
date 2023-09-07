import re
def solution(new_id):
    answer = ''
    fst = new_id.lower()
    snd = re.sub('[^a-z0-9-_.]', '', fst)
    trd = re.sub('\.+', '.', snd)
    four = trd.strip('.')
    five = four if four else 'a'
    six = five if len(five) < 16 else five[:15].strip('.')
    seven = six if len(six) > 2 else six + ''.join([six[-1] for _ in range(3 - len(six))])
    return seven