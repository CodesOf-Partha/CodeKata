#include<stdio.h> 
#include<stdlib.h>
struct node 
{ 
    int key; 
    struct node *left, *right; 
}; 
struct node *newNode(int item) 
{ 
    struct node *temp =  (struct node *)malloc(sizeof(struct node)); 
    temp->key = item; 
    temp->left = temp->right = NULL; 
    return temp; 
} 
void inorder(struct node *root) 
{ 
    if (root != NULL) 
    { 
        inorder(root->left); 
        printf("%d\n", root->key); 
        inorder(root->right); 
    } 
} 
struct node* insert(struct node *node, int key) 
{ 
    if (node == NULL) return newNode(key);
    if (key < node->key) 
        node->left  = insert(node->left, key); 
    else if (key > node->key) 
        node->right = insert(node->right, key);    
    return node; 
}
// int getHeight(struct node *root) {
//   if (root == NULL)
//          return 0;
//     int leftHeight = getHeight(root->left);
//     int rightHeight = getHeight(root->right);
// 	return 1 + max(leftHeight,rightHeight);
// }
// int max(int a, int b) {
//   return ((a > b) ? a : b);
// }
int maxDepth(struct node *node)  
{  
    if (node == NULL)  
        return 0;  
    else
    {  
        int lDepth = maxDepth(node->left);  
        int rDepth = maxDepth(node->right);  
        if (lDepth > rDepth)  
            return(lDepth + 1);  
        else return(rDepth + 1);  
    }  
}  
int main() 
{	int num=0,n,height;
    struct node *root = NULL; 
    scanf("%d",&n);
    scanf("%d",&num);
    root = insert(root, num);
    for(int i=0;i<n-1;i++){
    	scanf("%d",&num);
    	insert(root, num);
    }
    inorder(root); 
    height=maxDepth(root);
    printf("\nThe height of the tree is: %d",height);
    return 0; 
} 