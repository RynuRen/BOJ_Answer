from collections import deque
import sys
input = sys.stdin.readline

def bfs(start):
    q = deque([start])
    visited[start] = 0
    while q:
        v = q.popleft()
        for i in sorted(graph[v]):
            if visited[i] == -1:
                q.append(i)
                visited[i] = visited[v]+1

n, m, k, x = map(int, input().split())
graph = [[] for _ in range(n+1)]
visited = [-1]*(n+1)

for _ in range(m):
    a, b = map(int, input().split())
    graph[a] += [b]

bfs(x)

if k not in visited:
    print(-1)
else:
    for i in range(1, n+1):
        if visited[i] == k:
            print(i)