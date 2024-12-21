class Graph:
    def __init__(self,v):
        self.v = v
        self.graph = []
        self.visited = [False]*v

    def addEdge(self,v1,v2,w):
        self.graph.append([v1,v2,w])

    def find_mst(self):
        self.graph.sort(key = lambda edge: edge[2])
        tot = 0
        for edge in self.graph:
            if self.visited[edge[0]]==False or self.visited[edge[1]]==False:
                if visi

g = Graph(4)
g.addEdge(0, 1, 10)
g.addEdge(0, 2, 6)
g.addEdge(0, 3, 5)
g.addEdge(1, 3, 15)
g.addEdge(2, 3, 4)

g.find_mst()