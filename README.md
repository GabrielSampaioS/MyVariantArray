<h1>MyVariantArray</h1>

<p>Um array dinâmico em C++ com suporte a múltiplos tipos (estilo <i>list</i> do Python).</p>

<p>Este projeto implementa duas estruturas principais:</p>

<ul>
  <li><strong>MyVariant</strong> — um tipo variante simples capaz de armazenar diferentes tipos primitivos e strings.</li>
  <li><strong>MyArray</strong> — um array dinâmico que se expande automaticamente e armazena elementos <code>MyVariant</code>.</li>
</ul>

<p>O objetivo é aproximar a experiência de uso das listas do Python — que aceitam múltiplos tipos — utilizando apenas recursos básicos do C++.</p>

<h2>🔧 Funcionalidades</h2>

<h3>MyVariant</h3>
<ul>
  <li>Armazena múltiplos tipos (<code>int</code>, <code>double</code>, <code>string</code>, etc.)</li>
  <li>Suporte a cópia e movimentação</li>
  <li>Conversão e acesso seguro ao valor</li>
</ul>

<h3>MyArray</h3>
<ul>
  <li>Array dinâmico com expansão automática</li>
  <li>Inserção simples (<code>push</code>)</li>
  <li>Acesso por índice</li>
  <li>Armazena qualquer valor suportado por <code>MyVariant</code></li>
</ul>

<h2>📁 Estrutura</h2>

<pre>
/src
 ├── myArray.cpp
 ├── myVariant.cpp
 └── main.cpp
/include
 ├── myArray.h
 ├── myVariant.h
</pre>

<h2>▶ Como compilar</h2>

<pre>
g++ -std=c++17 main.cpp myArray.cpp myVariant.cpp -o myarray
./myarray
</pre>

<h2>🎯 Motivação</h2>

<p>O projeto nasceu da curiosidade de entender as diferenças entre:</p>

<ul>
  <li>arrays de baixo nível em C++</li>
  <li>estruturas flexíveis de linguagens de alto nível, como a <code>list</code> do Python</li>
</ul>

<p>
Essa implementação demonstra como construir uma estrutura dinâmica e flexível trabalhando diretamente com ponteiros, 
alocação dinâmica e gerenciamento manual de memória.
</p>
