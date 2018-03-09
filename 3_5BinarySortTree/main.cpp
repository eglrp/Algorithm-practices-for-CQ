#include <iostream>
#include <string>

using namespace std;

struct Node
{
    Node *lchild;
    Node *rchild;
    int c;

}Tree[100];

int loc;
Node *creat( )
{
    Tree[loc].lchild = Tree[loc].rchild = NULL;
    return &Tree[loc++];
}

void postOrder( Node *T )
{
    if( T->lchild != NULL )
        postOrder(T->lchild);
    if( T->rchild != NULL )
        postOrder(T->rchild);
    cout<<T->c;
}

void inOrder( Node *T )
{
    if( T->lchild != NULL )
        inOrder(T->lchild);
    cout<<T->c;
    if( T->rchild != NULL )
        inOrder( T->rchild );
}

void preOrder( Node *T )
{
    cout<<T->c;
    if( T->lchild != NULL )
        preOrder(T->lchild);
    if( T->rchild != NULL )
        preOrder( T->rchild);
}

Node *Insert( Node *T , int x)
{
    if( T == NULL )
    {
        T = creat();
        T->c = x;
        return T;
    }
    else
        if( x < T->c )
            T->lchild = Insert(T->lchild, x );
        else
            if( x > T->c )
                T->rchild = Insert( T->rchild , x );

    return T;
}

int main()
{

    int n;
    while ( cin >> n )
    {
        loc = 0;
        Node *T = NULL;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin>>x;
            T = Insert(T, x );
        }
        preOrder(T);
        cout<<'\n';
        inOrder(T);
        cout<<'\n';
        postOrder(T);
        cout<<'\n';

    }

    //std::cout << "Hello, World!" << std::endl;
    return 0;
}