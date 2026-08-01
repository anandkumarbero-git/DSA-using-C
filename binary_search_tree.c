// Wap to create a binary search tree and display its content using recursive preorder,postorder and inorder traversal
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left,*right;
};

struct node* insert(struct node *r,int x){
    if(r==NULL){
        r=(struct node*)malloc(sizeof(struct node));
        r->data=x;
        r->left=r->right=NULL;
        return r;
    }
    if(x<r->data) r->left=insert(r->left,x);
    else r->right=insert(r->right,x);
    return r;
}

void preorder(struct node *r){
    if(r){ printf("%d ",r->data); preorder(r->left); preorder(r->right); }
}

void inorder(struct node *r){
    if(r){ inorder(r->left); printf("%d ",r->data); inorder(r->right); }
}

void postorder(struct node *r){
    if(r){ postorder(r->left); postorder(r->right); printf("%d ",r->data); }
}

int main(){
    struct node *root=NULL;
    root=insert(root,50);
    insert(root,30);
    insert(root,70);
    insert(root,20);
    insert(root,40);

    printf("Preorder: "); preorder(root);
    printf("\nInorder: "); inorder(root);
    printf("\nPostorder: "); postorder(root);

    return 0;
}