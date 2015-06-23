#define C_BLACK 1000
#define C_RED 2000

#define D_RIGHT 10
#define D_LEFT 20

typedef struct node {
    int key, value, color;
    struct node *left, *right;
} node;

node * createNode(int key, int value, int color) {
    node *n;
    n = (node *) malloc(sizeof(node));
    n->key = key;
    n->value = value;
    n->color = color;
    return n;
}

int isRed(node *n) {
    if (n != NULL) {
        if (n->color == C_RED)
            return 1;
    }
    return 0;
}

int getValue(node *init, int key) {
    node *n;
    n = init;
    while (n != (node *) NULL) {
        if (n->key == key)
            return n->value;
        else
            if (n->key > key)
                n = n->left;
            else
                n = n->right;
    }
}

void flipColor(node *n) {

}

node * rotate(node *n, int dir) {
    node *new;
    if (dir == D_LEFT) {

    }
    if (dir == D_RIGHT) {

    }
    return new;
}

node * insertNode(node *init, int key, int val) {
    node *n;
    init = n;
    if (n == NULL)
        return createNode(key, val, C_RED);

    if (isRed(n->left) && isRed(n->right))
        flipColor(n);

    if (key == n->key)
        n->val = val;
    else
        if (key < n->key)
            n->left = insertNode(n->left, key, val);
        else
            n->right = insertNode(n->right, key, val);

    if (isRed(n->right))
        n = rotate(n, D_LEFT);

    if (isRed(n->left) && isRed(n->left->left))
        n = rotate(n, D_RIGHT);

    return n;
}


int main () {

}
