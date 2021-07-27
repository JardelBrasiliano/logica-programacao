#include <stdio.h>
#include <stdlib.h>
#define SIZE 40

struct queue {//Struct para representar a Queue
  int items[SIZE];
  int front;
  int rear;
};

struct queue* createQueue();
void enqueue(struct queue* q, int);
int dequeue(struct queue* q);
void display(struct queue* q);
int isEmpty(struct queue* q);
void printQueue(struct queue* q);

struct node {
    int vertex;
    struct node* next;
};

struct node* createNode(int);

struct Graph {
    int numVertices;
    struct node** adjLists;
    int* visited;
};

// BFS algorithm
void bfs(struct Graph* graph, int startVertex) {
  struct queue* q = createQueue();

  graph->visited[startVertex] = 1; // marca com 1(true) o vertice na lista de visietd para representar como ja visitado para verificação
  enqueue(q, startVertex);

  while (!isEmpty(q)) { //Verifica se a fila estar vazia
    printQueue(q);
    int currentVertex = dequeue(q); //remove o primeiro elemento da fila e remove da lista

    printf(" || proxima verificacao com - %d\n", currentVertex);

    struct node* temp = graph->adjLists[currentVertex]; //pega as adjacencia do vertice atual, ou seja,  todos os outros vertice que estao conectados

    while (temp) { // passa por todas as vertice adjacentes
      int adjVertex = temp->vertex; // pega o vertice adjacente atual

      if (graph->visited[adjVertex] == 0) { // verifica se ja foi visitado - Se nao foi ele entra no if
        graph->visited[adjVertex] = 1; // marca como visitado
        enqueue(q, adjVertex); //Coloca no final da fila
      }
      temp = temp->next; // Vai para proximo item da lista de adjacentes
    }
  }
}

//Criar o node
struct node* createNode(int v) {
    struct node* newNode = malloc(sizeof(struct node));
    newNode->vertex = v;
    newNode->next = NULL;
    return newNode;
}

//Criar Grafo
struct Graph* createGraph(int vertices) {
    struct Graph* graph = malloc(sizeof(struct Graph));
    graph->numVertices = vertices;

    graph->adjLists = malloc(vertices * sizeof(struct node*));
    graph->visited = malloc(vertices * sizeof(int));

    int i;
    for (i = 0; i < vertices; i++) {
        graph->adjLists[i] = NULL;
        graph->visited[i] = 0;
    }

    return graph;
    }

//Adicionar vértice
void addEdge(struct Graph* graph, int src, int dest) {
    //Adiciona um vértice  de src ate dest
    struct node* newNode = createNode(dest);
    newNode->next = graph->adjLists[src];
    graph->adjLists[src] = newNode;

    //Adiciona um vértice de dest ate src
    newNode = createNode(src);
    newNode->next = graph->adjLists[dest];
    graph->adjLists[dest] = newNode;
}

//Cria uma Fila
struct queue* createQueue() {
  struct queue* q = malloc(sizeof(struct queue));
  q->front = -1;
  q->rear = -1;
  return q;
}

//Checar se a fila estar vazia
int isEmpty(struct queue* q) {
    if (q->rear == -1)
        return 1;
    else
        return 0;
}

//Adicionar elemento na Fila
void enqueue(struct queue* q, int value) {
    if (q->rear == SIZE - 1)
        printf("\nFila esta cheia!!");
    else {
        if (q->front == -1)
            q->front = 0;
        q->rear++;
        q->items[q->rear] = value;
    }
}

//Remover elementos da Fila
int dequeue(struct queue* q) {
    int item;
    if (isEmpty(q)) {
        printf("Fila esta vazia!");
        item = -1;
    } else {
        item = q->items[q->front];
        q->front++;
        if (q->front > q->rear) {
            printf("Resetando a Fila");
            q->front = q->rear = -1;
        }
    }
    return item;
}

//Imprimir a Fila
void printQueue(struct queue* q) {
    int i = q->front;
    if (isEmpty(q)) {
        printf("Fila esta vazia!");
    } else {
        printf("\nFila de verificacao atual: ");
        for (i = q->front; i < q->rear + 1; i++) {
            if(q->rear == i){
                printf(" %d ", q->items[i]);
            }else{
                printf(" %d, ", q->items[i]);
            }
        }
    }
}

int main() {
    struct Graph* graph = createGraph(5);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 0, 3);
    addEdge(graph, 1, 2);
    addEdge(graph, 2, 4);

    bfs(graph, 0);

    return 0;
}
