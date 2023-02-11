com = int(input())
net = int(input())

graph = [[] for _ in range(com+1)]
visited = [0]*(com+1)

# 그래프 입력
for _ in range(net):
    a, b = map(int, input().split())
    graph[a].append(b) # graph[a] += [b]
    graph[b].append(a)

# DFS
def dfs(com):
    visited[com] = 1
    for i in graph[com]:
        if not visited[i]:
            dfs(i)
dfs(1)
print(sum(visited) - 1)