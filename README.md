<p align="center">
  <picture>
    <source media="(prefers-color-scheme: dark)" width="200" srcset="docs/logo_white.png">
    <source media="(prefers-color-scheme: light)" width="200" srcset="docs/logo_black.png">
    <img alt="ufmg" width="200" src="docs/logo_white.png">
  </picture>
</p>


<h1 align="center">
    Biblioteca UFMG
    <br>
    <a href="https://opensource.org/license/mit" target="_blank" rel="noopener noreferrer nofollow" style="display:inline-block"><img src="https://img.shields.io/badge/License-MIT-yellow.svg" alt="MIT License" style="max-width: 100%;"></a>
    <a href="https://github.com/brunomaletta/biblioteca/tree/master/Codigo" target="_blank" rel="noopener noreferrer nofollow" style="display:inline-block"><img src="https://img.shields.io/badge/C%2B%2B-17-blue" alt="C++17" style="max-width: 100%;"></a>
    <a href="https://github.com/brunomaletta/biblioteca/stargazers"><img src="https://img.shields.io/github/stars/brunomaletta/biblioteca?style=social" alt="GitHub stars"></a>
</h1>

<p align="center">
    <a href="https://brunomaletta.github.io/biblioteca/docs/" target="_blank"><img src="https://img.shields.io/badge/🌐_Biblioteca_Online-Abrir-2ea44f?style=for-the-badge"></a>
    <a href="https://github.com/brunomaletta/biblioteca/blob/master/pdf/biblioteca.pdf" target="_blank"><img src="https://img.shields.io/badge/📄_Biblioteca_PDF-Abrir-blue?style=for-the-badge"></a>
    <a href="https://github.com/brunomaletta/biblioteca/blob/master/pdf/theoretical.pdf" target="_blank"><img src="https://img.shields.io/badge/📚_Theoretical_Guide-Abrir-purple?style=for-the-badge"></a>
</p>

Biblioteca de algoritmos, estruturas de dados e primitivas para Maratona de Programação (ICPC) da UFMG.

Códigos em C++, em maior parte implementados pelos alunos da universidade. Mantida desde 2018.

<details>
<summary>Hash</summary>

No PDF, a coluna de hash é o hash de cada linha, exceto se a linha contem um caractere `}`. Nesse caso, o hash da linha é o hash a partir da linha que fecha o último `}` da linha atual.

Para ver o hash no vim, seleciona as linhas com `Shift+v`, e aperta `Ctrl+h`.

</details>

## 📚 Conteúdo

### 🧠 Programação Dinâmica
- [Divide and Conquer DP](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/DP/dcDp.cpp)
- [Longest Common Subsequence - O(n+m) de memória](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/DP/lcs.cpp)
- [Mochila - O(n+cap) de memória](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/DP/mochila.cpp)
- [SOS DP](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/DP/sosDP.cpp)
- [Subset Sum](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/DP/subsetSum.cpp)

---

### 🗂️ Estruturas de Dados
- Segment Tree
    - [Segtree Padrão (soma)](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Estruturas/Segtree/segTree.cpp)
    - [Segtree 2D (iterativa)](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Estruturas/Segtree/segTree2D.cpp)
    - [Segtreap (equivalente a seg 2D esparsa)](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Estruturas/Segtree/segTreap.cpp)
    - [Segtree Beats](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Estruturas/Segtree/segTreeBeats.cpp)
    - [Segtree Colorida (lê os comentários pra saber o que faz)](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Estruturas/Segtree/segTreeColor.cpp)
    - [Segtree Esparsa - Lazy](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Estruturas/Segtree/segTreeEsparsa.cpp)
    - [Segtree Esparsa - O(q) Memória](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Estruturas/Segtree/segTreeEsparsa2.cpp)
    - [Segtree Iterativa](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Estruturas/Segtree/segTreeIterativa.cpp)
    - [Segtree Iterativa com Lazy Propagation](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Estruturas/Segtree/segTreeIterativaComLazy.cpp)
    - [Segtree de PA](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Estruturas/Segtree/segTreePa.cpp)
    - [Segtree Persistente](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Estruturas/Segtree/segTreePersistent.cpp)
    - [Segtree Persistente com Lazy](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Estruturas/Segtree/segTreePersistentComLazy.cpp)
- [BIT (Fenwick Tree)](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Estruturas/bit.cpp)
- [BIT 2D](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Estruturas/bit2d.cpp)
- [BIT com Soma em Range](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Estruturas/bitRange.cpp)
- [BIT-Sort Tree](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Estruturas/bitSortTree.cpp)
- [Convex Hull Trick](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Estruturas/cht.cpp)
- [Convex Hull Trick Dinâmico](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Estruturas/chtDinamico.cpp)
- [DSU (e variações)](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Estruturas/dsu.cpp)
- [Heap Persistente](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Estruturas/HeapPersistente.cpp)
- [Li-Chao Tree](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Estruturas/lichao.cpp)
- [Li-Chao Tree Lazy](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Estruturas/lichaoLazy.cpp)
- [MergeSort Tree](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Estruturas/mergeSortTree.cpp)
- [Minqueue - Deque](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Estruturas/minqueueDeque.cpp)
- [Minqueue - Stack](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Estruturas/minqueueStack.cpp)
- [Priority Queue DS](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Estruturas/priorityQueueDs.cpp)
- [Order Statistic Set (GCC)](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Estruturas/orderStatisticSet.cpp)
- [Range Color](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Estruturas/rangeColor.cpp)
- [RMQ <O(n), O(1)>](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Estruturas/rmq.cpp)
- [Slope Trick](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Estruturas/slopeTrick.cpp)
- [Sparse Table](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Estruturas/sparseTable.cpp)
- [Sparse Table Disjunta](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Estruturas/sparseTableDisjunta.cpp)
- [Splaytree](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Estruturas/splaytree.cpp)
- [Splaytree Implicita](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Estruturas/splaytreeImplicita.cpp)
- [Split-Merge Set](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Estruturas/splitMergeSet.cpp)
- [Split-Merge Set - Lazy](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Estruturas/splitMergeSetLazy.cpp)
- [SQRT Tree](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Estruturas/sqrtTree.cpp)
- [Treap](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Estruturas/treap.cpp)
- [Treap Implícita](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Estruturas/treapImplicita.cpp)
- [Treap Implícita Persistente](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Estruturas/treapPersistent.cpp)
- [Wavelet Tree](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Estruturas/waveletTree.cpp)

---

### 🌳 Grafos
- LCA/HLD
    - [LCA <O(n), O(1)>](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Grafos/LCA-HLD/lca.cpp)
    - [LCA com Binary Lifting](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Grafos/LCA-HLD/lcaComBinaryLifting.cpp)
    - [LCA com HLD](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Grafos/LCA-HLD/lcaComHld.cpp)
    - [Heavy-Light Decomposition - Aresta](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Grafos/LCA-HLD/hldAresta.cpp)
    - [Heavy-Light Decomposition - Vértice](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Grafos/LCA-HLD/hldVertice.cpp)
    - [Heavy-Light Decomposition sem Update](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Grafos/LCA-HLD/hldSemUpdate.cpp)
- LCT
    - [Link-cut Tree - Aresta](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Grafos/LCT/lctAresta.cpp)
    - [Link-cut Tree - Vertice](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Grafos/LCT/lctVertice.cpp)
    - [Link-cut Tree Padrão](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Grafos/LCT/lct.cpp)
- [AGM Direcionada (arborescência)](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Grafos/directedMst.cpp)
- [Articulation Points](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Grafos/articulationPoints.cpp)
- [Bellman-Ford](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Grafos/bellmanFord.cpp)
- [Block-Cut Tree](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Grafos/blockCutTree.cpp)
- [Blossom](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Grafos/blossom.cpp)
- [Centro/Diâmetro em Árvore](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Grafos/center.cpp)
- [Centroid (encontra os centroids da árvore)](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Grafos/centroid.cpp)
- [Centroid Decomposition](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Grafos/centroidDecomp.cpp)
- [Centroid Tree](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Grafos/centroidTree.cpp)
- [Dijkstra](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Grafos/dijkstra.cpp)
- [Dinitz](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Grafos/dinitz.cpp)
- [Dominator Tree](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Grafos/dominatorTree.cpp)
- [Euler Path / Euler Cycle Linear](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Grafos/eulerPath.cpp)
- [Euler Tour Tree Enraizada](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Grafos/rootedETT.cpp)
- [Euler Tour Tree Não Enraizada](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Grafos/unrootedETT.cpp)
- [Floyd-Warshall](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Grafos/floydWarshall.cpp)
- [Functional Graph](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Grafos/functionalGraph.cpp)
- [Hopcroft Karp](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Grafos/hopcroftKarp.cpp)
- [Isomorfismo de Árvores](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Grafos/treeIsomorf.cpp)
- [Johnson](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Grafos/johnson.cpp)
- [Kosaraju](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Grafos/kosaraju.cpp)
- [KShortestWalks.cpp](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Grafos/KShortestWalks.cpp)
- [Kruskal](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Grafos/kruskal.cpp)
- [Kuhn](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Grafos/kuhn.cpp)
- [Line Tree](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Grafos/linetree.cpp)
- [Max Flow com Lower Bound](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Grafos/lowerBoundMaxFlow.cpp)
- [MinCost-MaxFlow](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Grafos/minCostMaxFlow.cpp)
- [Prufer Code Linear](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Grafos/prufer.cpp)
- [Sack (DSU em árvores)](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Grafos/sack.cpp)
- [Stable Marriage](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Grafos/stableMarriage.cpp)
- [Tarjan (SCC) e Compressão de Ciclos (bridge tree)](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Grafos/tarjan.cpp)
- [Top Tree](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Grafos/topTree.cpp)
- [Topological Sort](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Grafos/topoSort.cpp)
- [Vertex Cover](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Grafos/cover.cpp)
- [Virtual Tree](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Grafos/virtualTree.cpp)

---

### 🔢 Matemática
- [2-SAT (com recuperação)](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Matematica/2sat.cpp)
- [Algoritmo de Euclides Estendido](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Matematica/gcdEstendido.cpp)
- [Algoritmo Rho de Pollard (Pollard Rho)](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Matematica/pollardrho.cpp)
- [Avaliação de Interpolação (avalia a interpolação em um x)](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Matematica/evalInterpol.cpp)
- [Berlekamp-Massey](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Matematica/berlekampMassey.cpp)
- [Convolução de GCD / LCM](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Matematica/gcdLcmConvolution.cpp)
- [Coprime Basis](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Matematica/coprimeBasis.cpp)
- [Crivo de Eratosthenes Linear (e variações)](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Matematica/crivo.cpp)
- [Detecção de Ciclo - Tortoise and Hare](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Matematica/cycleDetection.cpp)
- [Distribuição Binomial](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Matematica/probabilityBinomial.cpp)
- [Division Trick](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Matematica/divisionTrick.cpp)
- [Eliminação Gaussiana](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Matematica/gauss.cpp)
- [Eliminação Gaussiana de XOR](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Matematica/gaussZ2.cpp)
- [Equação Diofantina Linear](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Matematica/diofantina.cpp)
- [Exponenciação Rápida](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Matematica/fastPow.cpp)
- [Fast Walsh Hadamard Transform](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Matematica/fwht.cpp)
- [FFT](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Matematica/convolution.cpp)
- [Integral Numérica](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Matematica/integral.cpp)
- [Inverso Modular](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Matematica/modInverse.cpp)
- [Karatsuba](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Matematica/karatsuba.cpp)
- [Logaritmo Discreto](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Matematica/logDiscreto.cpp)
- [Miller-Rabin](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Matematica/millerRabin.cpp)
- [Mulmod O(1)](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Matematica/mulmod.cpp)
- [Multipoint Evaluation](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Matematica/multipointEvaluation.cpp)
- [NTT](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Matematica/ntt.cpp)
- [Operações em Polinômios e Séries de Potências](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Matematica/powerSeries.cpp)
- [Simplex](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Matematica/simplex.cpp)
- [Teorema Chines do Resto](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Matematica/chinese.cpp)
- [Totiente](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Matematica/totiente.cpp)

---

### 🔧 Primitivas
- [Aritmética Modular](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Primitivas/modularArithmetic.cpp)
- [Big Integer - C++](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Primitivas/bigint.cpp)
- [Fração](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Primitivas/frac.cpp)
- [Matroid](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Primitivas/matroid.cpp)
- [Primitiva de Calendário](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Primitivas/calendario.cpp)
- [Primitivas de Matriz - Exponenciação](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Primitivas/matrix.cpp)
- [Primitivas Geométricas](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Primitivas/geometria.cpp)
- [Primitivas Geométricas Inteiras](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Primitivas/geometriaInt.cpp)
- [Primitivas Geométricas 3D](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Primitivas/geometria3d.cpp)

---

### 🔤 Strings
- [Aho-corasick](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Strings/ahocorasick.cpp)
- [Algoritmo Z](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Strings/z.cpp)
- [Autômato de Sufixo](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Strings/suffixAutomaton.cpp)
- [eertree (Palindromic Tree)](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Strings/eertree.cpp)
- [KMP](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Strings/kmp.cpp)
- [Manacher](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Strings/manacher.cpp)
- [Min/max suffix/cyclic shift (lexicográfico) O(n)](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Strings/minMaxSuffixCyclic.cpp)
- [String Hashing](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Strings/hashing.cpp)
- [String Hashing - módulo 2^61 - 1](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Strings/hashingLargeMod.cpp)
- [Suffix Array O(n)](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Strings/suffixArray.cpp)
- [Suffix Array O(n log n)](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Strings/suffixArray2.cpp)
- [Suffix Array Dinâmico](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Strings/dynamicSuffixArray.cpp)
- [Trie](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Strings/trie.cpp)

---

### 📊 Problemas
- [Algoritmo Húngaro (assignment)](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Problemas/hungarian.cpp)
- [Área da Uniao de Retangulos](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Problemas/areaUniaoRetangulo.cpp)
- [Area Máxima de Histograma](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Problemas/areaHistograma.cpp)
- [Closest Pair of Points](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Problemas/closestPairOfPoints.cpp)
- [Coeficiente Binomial Modular (para valores grandes e mod não tão grande)](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Problemas/binomial.cpp)
- [Coloração de Grafo de Intervalo](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Problemas/intervalGraphColoring.cpp)
- [Conectividade Dinâmica - DSU](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Problemas/conectividadeDinamica.cpp)
- [Conectividade Dinâmica - LCT](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Problemas/conectividadeDinamica2.cpp)
- [Conjunto Independente Máximo com Peso em Grafo de Intervalo](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Problemas/intervalGraphIndSet.cpp)
- [Convex Hull Dinâmico](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Problemas/dynamicHull.cpp)
- [Distância Máxima entre Dois Pontos](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Problemas/maxDist.cpp)
- [Distinct Range Query com Update](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Problemas/distinctUpdate.cpp)
- [Distinct Range Query](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Problemas/distinct2.cpp)
- [Dominator Points](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Problemas/dominatorPoints.cpp)
- [DP de Dominação 3D](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Problemas/dominacao3d.cpp)
- [Fatoração de String em Palíndromos](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Problemas/palindromicFactorization.cpp)
- [Gray Code](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Problemas/grayCode.cpp)
- [Half-Plane Intersection](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Problemas/halfPlaneIntersection.cpp)
- [Heap Sort](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Problemas/heapSort.cpp)
- [Interseção de Ângulos](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Problemas/angleRange.cpp)
- [Interseção de Segmentos](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Problemas/segmentIntersection.cpp)
- [Inversion Count](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Problemas/inversionCount.cpp)
- [Longest Increasing Subsequence (recuperando)](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Problemas/lis.cpp)
- [Longest Increasing Subsequence (tamanho)](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Problemas/lis2.cpp)
- [Minimum Enclosing Circle O(n)](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Problemas/minCirc.cpp)
- [Minkowski Sum](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Problemas/minkowski.cpp)
- [MO](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Problemas/mo.cpp)
- [MO - DSU](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Problemas/moDsu.cpp)
- [MO em Árvores](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Problemas/moOnTrees.cpp)
- [Parsing de Expressão](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Problemas/parsing.cpp)
- [RMQ Offline com Divide and Conquer](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Problemas/rmqOffline.cpp)
- [Sequência de de Brujin](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Problemas/deBrujin.cpp)
- [Shortest Addition Chain](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Problemas/additionChain.cpp)
- [Steiner Tree](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Problemas/steinerTree.cpp)
- [Sweep Direction](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Problemas/sweepDirection.cpp)
- [Triangulação de Delaunay](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Problemas/delaunay.cpp)
- [Triângulos em Grafos](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Problemas/graphTriangles.cpp)
- [Verificação de Polígono Simples](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Problemas/simplePolygon.cpp)

---

### 📦 Extra
- [Debug](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Extra/debug.cpp)
- [fastIO](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Extra/fastIO.cpp)
- [Hash](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Extra/hash.sh)
- [makefile](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Extra/makefile)
- [Pragmas](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Extra/pragma.cpp)
- [rand](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Extra/rand.cpp)
- [Stresstest](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Extra/stress.sh)
- [Template C++](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Extra/template.cpp)
- [Timer](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Extra/timer.cpp)
- [vimrc](https://github.com/brunomaletta/Biblioteca/blob/master/Codigo/Extra/vimrc)

## Histórico de Estrelas

<a href="https://www.star-history.com/?repos=brunomaletta%2Fbiblioteca&type=date&legend=top-left">
 <picture>
   <source media="(prefers-color-scheme: dark)" srcset="https://api.star-history.com/chart?repos=brunomaletta/biblioteca&type=date&theme=dark&legend=top-left&sealed_token=NwamUVXrfEUG1vfcWjycHhVQ4giScfJ6wjvikORPtCV01PFi2Q-PgYo_PTGf1aly-jdvB-4zzUA5n-KlnXkaZlcZDJFSXM2UrGAERRHlsL5eq8Y-IzTbVsTOdfYUE0UhR-VXkX4YVieVlpCHgQU5GRSj8E87m7YVU5FQpAHt7D2bvr99tzKYLDel5wsc" />
   <source media="(prefers-color-scheme: light)" srcset="https://api.star-history.com/chart?repos=brunomaletta/biblioteca&type=date&legend=top-left&sealed_token=NwamUVXrfEUG1vfcWjycHhVQ4giScfJ6wjvikORPtCV01PFi2Q-PgYo_PTGf1aly-jdvB-4zzUA5n-KlnXkaZlcZDJFSXM2UrGAERRHlsL5eq8Y-IzTbVsTOdfYUE0UhR-VXkX4YVieVlpCHgQU5GRSj8E87m7YVU5FQpAHt7D2bvr99tzKYLDel5wsc" />
   <img alt="Star History Chart" src="https://api.star-history.com/chart?repos=brunomaletta/biblioteca&type=date&legend=top-left&sealed_token=NwamUVXrfEUG1vfcWjycHhVQ4giScfJ6wjvikORPtCV01PFi2Q-PgYo_PTGf1aly-jdvB-4zzUA5n-KlnXkaZlcZDJFSXM2UrGAERRHlsL5eq8Y-IzTbVsTOdfYUE0UhR-VXkX4YVieVlpCHgQU5GRSj8E87m7YVU5FQpAHt7D2bvr99tzKYLDel5wsc" />
 </picture>
</a>
