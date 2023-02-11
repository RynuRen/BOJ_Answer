def dfs(v):
    dfs_visited[v] = 1
    print(v, end=' ')
    for i in sorted(graph[v]):
        if not dfs_visited[i]:
            dfs(i)

def bfs(start):
    from collections import deque
    q = deque([start])
    bfs_visited[start] = 1
    while q:
        v = q.popleft()
        print(v, end=' ')
        for i in sorted(graph[v]):
            if not bfs_visited[i]:
                q.append(i)
                bfs_visited[i] = 1

n, m, v = map(int, input().split())
graph = [[] for _ in range(n+1)]
dfs_visited = [0]*(n+1)
bfs_visited = [0]*(n+1)

for _ in range(m):
    a, b = map(int, input().split())
    graph[a] += [b]
    graph[b] += [a]

dfs(v)
print()
bfs(v)