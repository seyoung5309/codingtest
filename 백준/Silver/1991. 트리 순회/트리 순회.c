#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    char data;
    struct Node* left;
    struct Node* right;
} Node;

Node* create_node(char data);
Node* find_node(Node* root, char target);
Node* find_node(Node* root, char target);
void insert_node(Node* node, char A, char B, char C);
void preorder(Node* root);
void inorder(Node* root);
void postorder(Node* root);

int main() {
    int n;
    scanf("%d", &n);

    Node* root = NULL;

    for (int i = 0; i < n; i++) {
        char A, B, C;
        scanf(" %c %c %c", &A, &B, &C); // 앞에 공백 중요

        if (root == NULL) {
            root = create_node(A);
            insert_node(root, A, B, C);
            continue;
        }

        Node* target = find_node(root, A);

        if (target != NULL) {
            insert_node(target, A, B, C);
        }
    }

    preorder(root);
    printf("\n");

    inorder(root);
    printf("\n");

    postorder(root);

    return 0;
}

// 노드 생성
Node* create_node(char data) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

// 노드 탐색 (DFS)
Node* find_node(Node* root, char target) {
    if (root == NULL) return NULL;

    if (root->data == target) return root;

    Node* left = find_node(root->left, target);
    if (left != NULL) return left;

    return find_node(root->right, target);
}

// 노드 삽입
void insert_node(Node* node, char A, char B, char C) {
    node->data = A;

    if (B != '.')
        node->left = create_node(B);

    if (C != '.')
        node->right = create_node(C);
}

// 전위 순회
void preorder(Node* root) {
    if (root == NULL) return;

    printf("%c", root->data);
    preorder(root->left);
    preorder(root->right);
}

// 중위 순회
void inorder(Node* root) {
    if (root == NULL) return;

    inorder(root->left);
    printf("%c", root->data);
    inorder(root->right);
}

// 후위 순회
void postorder(Node* root) {
    if (root == NULL) return;

    postorder(root->left);
    postorder(root->right);
    printf("%c", root->data);
}