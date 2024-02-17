#include <iostream>

struct Queue
{
    int capacity;
    int front;
    int rear;
    int* elements;
};

int isEmpty(Queue *q){
    if(q->rear == q->front){
        return 1;
    }
    return 0;
}

int isFull(Queue *q){
    if(q->rear == q->capacity - 1){
        return 1;
    }
    return 0;
}

void enqueue(Queue *q, int value){
    if(isFull(q)){
        std::cout << "This Queue is full\n";
    }
    else{
        q->rear++;
        q->elements[q->rear] = value;
        // std::cout << "Enqueued element: " << value << std::endl;
    }
}

int dequeue(Queue *q){
    int item = -1;
    if(isEmpty(q)){
        std::cout << "This Queue is empty\n";
    }
    else{
        q->front++;//This moves the front pointer of the queue to the next element, effectively dequeuing the front element.
        item = q->elements[q->front]; //This retrieves the value of the element at the new front position of the queue and assigns it to the item variable. This value will be returned to the caller.
    }
    return item;
}

int main(){
    // Initializing Queue (Array Implementation)
    Queue q;
    q.capacity = 400;
    q.front = q.rear = 0;
    q.elements = new int[q.capacity];

    // BFS Implementation 
    int startNode = 0;
    int visited[7] = {0,0,0,0,0,0,0};
    int adjacencyMatrix[7][7] = {
        {0,1,1,1,0,0,0},
        {1,0,1,0,0,0,0},
        {1,1,0,1,1,0,0},
        {1,0,1,0,1,0,0},
        {0,0,1,1,0,1,1},
        {0,0,0,0,1,0,0}, 
        {0,0,0,0,1,0,0} 
    };
/*

Graph:
   1---2---3---4
   |       |   |
   0       6   5

*/
    std::cout << startNode << std::endl;
    visited[startNode] = 1; //                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           it means that we are defining visited[start] or the initial node given by user as the visited, 1 here does not mean anything but a truthy value, means visited
    enqueue(&q, startNode); // Enqueue startNode for exploration
    while (!isEmpty(&q))
    {
        int node = dequeue(&q);//this will return the element on the front once this q(node) is deleted, or in other words new node to be put in exploration list

        for (int j = 0; j < 7; j++)
        {
            if(adjacencyMatrix[node][j] == 1 && visited[j] == 0){//
                std::cout << j;
                visited[j] = 1;
                enqueue(&q, j);
            }
        }
    }
    return 0;
}
