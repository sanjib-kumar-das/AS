#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
	struct node *left;
    struct node *right;
};

struct node* newnode(int data)
{
    struct node* tmp;
    tmp=(struct node *)malloc(sizeof(struct node));
    tmp->data=data;
    tmp->left=NULL;
    tmp->right=NULL;
    return tmp;
}             
struct node *insert(struct node *q,int data)
{
   if(q==NULL)
       return newnode(data);
       
   if(data < q->data)
     q->left=insert(q->left,data);
   else if(data> q->data)
     q->right=insert(q->right,data);
     
   return q;
}
void inorderTraversal(struct node *root)
{
   if(root!=NULL)
   {
       inorderTraversal(root->left);
       printf("%d  ",root->data);
       inorderTraversal(root->right);
   }
}
struct node* min_value(struct node* node)
{
    struct node* p = node;
    while (p && p->left != NULL)
    {
        p = p->left;
    }
    return p;
}
struct node *deleteNode(struct node *root,int data)
{
    if(root==NULL)
        return root;
    else if(data<root->data)
        root->left=deleteNode(root->left,data);
    else if(data>root->data)
        root->right=deleteNode(root->right,data);
    else
    {
        if(root->left == NULL)
        {
            struct node* temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL)
        {
            struct node* temp = root->left;
            free(root);
            return temp;
        }
        struct node* temp = min_value(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}
int main()
{
    struct node *root=NULL; 
    int data,n,i;
    printf("How many node you want to create : ");
    scanf("%d",&n);
    printf("\n\n");
    printf("Enter the data : \n");
    for(i=0;i<n;i++)
	{
        
        scanf("%d",&data);
     	root = insert(root,data);
	}
	printf("\n\nInOrder Traversal is : ");
    inorderTraversal(root);
    int choice;
    
    while (1)
    {
        printf("\n\nPress 1 to Insert Node \nPress 2 to Delete Node \nPress 3 to Exit\n\n");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1: printf("\nEnter the value which you want to insert : ");
    	    scanf("%d",&data);
    	    root = insert(root,data);
    	    printf("\n\nInOrder Traversal after insertion : ");
    	    inorderTraversal(root);
            break;

        case 2: printf("\n\nEnter the value which you want to delete : ");
            scanf("%d",&data);
            root=deleteNode(root,data);
            printf("\n\nInOrder Traversal after deletion : ");
            inorderTraversal(root);
            break;

        case 3: exit(0);
                break;
        
        default: printf("\nInvalid Choice!!");
            break;
        }

        
    }
    return 0;
}
    

    