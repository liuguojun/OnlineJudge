#include<iostream>
#include<cstring>
#include<stdio.h>

struct BSTNode {
	char a;
	BSTNode *left;
	BSTNode *right;
};

BSTNode *root=NULL;

void Insert(char c)
{
	BSTNode *pointer=NULL;
	
	if(root==NULL)
	{
		root=new BSTNode;
		root->a=c;
		root->left=NULL;
		root->right=NULL;
		return;
	}
	else pointer=root;

	while(1)
	{
		if(pointer->a>c)
		{
			if(pointer->left==NULL)
			{
				pointer->left=new BSTNode;
				pointer->left->a=c;
				pointer->left->left=NULL;
pointer->left->right=NULL;
				return ;
			}
			else pointer=pointer->left;
		}
		else 
		{
			if(pointer->right==NULL)
			{
				pointer->right=new BSTNode;
				pointer->right->a=c;
pointer->right->left=NULL;
pointer->right->right=NULL;
				return ;
			}
			else pointer=pointer->right;
		}
	}
}
void PreOrder(BSTNode *root)
{
	if(root!=NULL)
	{
		cout<<root->a;
		PreOrder(root->left);
		PreOrder(root->right);
	}
}

int main()
{
	char str[100][200];

	while(1)
	{
		int i,j,k,flag=0;
		i=0;
root=NULL;
		
		while(cin>>str[i])
		{
			if(strcmp(str[i],"*")==0)
			{i--;break;}
			if(strcmp(str[i],"$")==0){
				i--;flag=1;break;}

			i++;
		}
		
		for(j=i;j>=0;j--)
			for(k=0;str[j][k]!=0;k++)
				Insert(str[j][k]);
			PreOrder(root);
			cout<<endl;
			if(flag==1)break;
	}
	return 0;
}

		

