def solution(id_pw, db):
    ndb = {}
    for id, pw in db:
        ndb[id] = pw
    i, p = id_pw
    if ndb.get(i):
        if ndb[i] == p:
            return "login"
        else:
            return "wrong pw"
    else:
        return "fail"