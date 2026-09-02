// Min-Heap Persistente (weight biased leftist heap)
//
// mantem invariante: sz(a->l) >= sz(a->r)
//
// merge: O(log n + log m)
// top: O(1)
// push/pop: O(log N)

template<typename T> struct heap {
    T v;
    heap *l, *r; 
    int s;
    static int sz(heap* a) { return a ? a->s : 0; }

    heap(T _v, heap *_l=nullptr, heap *_r=nullptr) 
        : v(_v), l(_l), r(_r), s(sz(_l) + sz(_r) + 1) {}

    static heap* merge(heap* a, heap* b) {
        if(!a or !b) return a ? a : b;
        if(a->v > b->v) swap(a, b); // min-heap

        heap *l = merge(a->r, b);
        heap *r = a->l;
        if(sz(l) < sz(r)) swap(l, r);

        return new heap(a->v, l, r);
    }

    T top() { return this->v; }
    heap* pop() { return merge(this->l, this->r); }
    heap* push(T u) { return merge(this, new heap(u)); }
};
