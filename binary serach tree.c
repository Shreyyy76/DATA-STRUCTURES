#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node*left;
	struct node*right;
};
void inorder(struct node*root)
{
	if(root)
	{
		inorder(root->left);
		printf("%d", root->data);
		inorder (root->right);
	}
}
int main()
{
	int n,i;
	struct node*p,*q,*root;
	printf("enter the number of nodes to be insert:");
	scanf("%d",&n);
	printf("\nplease enter the numbers to be insert:");
	for(i=0;i<n;i++)
	{
		p=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&p->data);
		p->left = NULL;
		p->right=NULL;
		if(i==0)
		{
			root=p;
		}
		else
		{
			q=root;
			{
				if(p->data>q->data)
				{
					if(q->right==NULL)
					{
						
						q->right=p;
						break;
					}
					else
					q=q->right;
				}
				else
				{
					if(q->left==NULL)
					{
						q->left==p;
						break;
					}
					else
					q=q->left;
				}
			}
		}
	}
	printf("\nBinay search tree nodes in inorder traversal:");
	inorder(root);
	printf("\n");
	return 0;
}
