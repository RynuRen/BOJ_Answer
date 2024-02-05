from collections import deque
import sys
input = sys.stdin.readline

def push(x):
    queue.append(x)

def pop():
    return -1 if empty() else queue.popleft()

def size():
    return len(queue)

def empty():
    return 0 if bool(queue) else 1

def front():
    return -1 if empty() else queue[0]

def back():
    return -1 if empty() else queue[-1]

n = int(input().rstrip())
queue = deque()
func = {"pop": pop, "size": size, "empty": empty, "front": front, "back": back}
for _ in range(n):
    s = input().rstrip()
    if s.split()[0] == "push":
        push(s.split()[1])
    else:
        print(func[s]())