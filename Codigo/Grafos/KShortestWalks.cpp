// Computa o tamanho dos k menores passeios de s ateh t em grafo direcionado
//
// coloca -1 no fim do vetor se nao existem k passeios
// precisa de HeapPersistente (em Codigo/Estruturas)
//
// O(n + m log m + k log k)

int n, k, s, t;
vector<vector<pair<int,ll>>> g;

vector<ll> k_shortest_walks() {
    vector<ll> dt(n, LINF); 
    vector<int> next(n, -1);
    {
        // Se tiver aresta negativa, substituir aqui por Bellman Ford para computar:
        //   - dt[a] = dist(a, t)
        //   - next[a] = proximo vertice no caminho ateh t
        // nao suporta ciclo negativo, e complexidade piora para O(nm + k log k)
        vector<vector<pair<int,ll>>> gt(n);
        for(int a=0; a<n; a++) for(auto [b, c] : g[a]) gt[b].emplace_back(a, c);

        priority_queue<pair<ll,int>> pq;
        dt[t] = 0;
        pq.emplace(0, t);

        while(pq.size()) {
            auto [d, a] = pq.top(); pq.pop();
            if(dt[a] < -d) continue;
            for(auto [b, c] : gt[a]) if(dt[b] > dt[a] + c) {
                dt[b] = dt[a] + c;
                next[b] = a;
                pq.emplace(-dt[b], b);
            }
        }
    }

    vector<heap<pair<ll,int>>*> adj(n, nullptr);
    {
        for(int a=0; a<n; a++) {
            bool used = false;
            for(auto [b, c] : g[a]) if(dt[b] != LINF) {
                if(!used and b == next[a] and dt[a] == dt[b] + c) used = true;
                else {
                    pair<ll,int> v = { c + dt[b] - dt[a], b };
                    if(adj[a] == nullptr) adj[a] = new heap<pair<ll,int>>(v);
                    else adj[a] = adj[a]->push(v);
                }
            }
        }
        vector<int> vis(n);
        auto dfs = [&](auto &&self, int a) -> void {
            if(vis[a]) return;
            vis[a] = true;
            if(next[a] != -1) {
                self(self, next[a]);
                adj[a] = heap<pair<ll,int>>::merge(adj[a], adj[next[a]]);
            }
        };
        for(int i=0; i<n; i++) dfs(dfs, i);
    }
    
    vector<ll> ans(k, -1);
    if(dt[s] == LINF) return ans;
    ans[0] = dt[s];

    priority_queue<pair<ll, heap<pair<ll,int>>*>> pq;
    if(adj[s]) pq.push({ -adj[s]->top().first, adj[s] });

    for(int i=1; i<k and pq.size(); i++) {
        auto [d, h] = pq.top(); pq.pop();
        d = -d;
        ans[i] = dt[s] + d;

        int a = h->top().second;
        if(adj[a]) pq.emplace(-(d + adj[a]->top().first), adj[a]);
        if(h->l) pq.emplace(-(d - h->top().first + h->l->top().first), h->l);
        if(h->r) pq.emplace(-(d - h->top().first + h->r->top().first), h->r);
    }

    return ans;
}
