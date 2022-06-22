#include<stdio.h>
#include<stdlib.h>
struct node
{
int value;
struct node *left_child, *right_child;
};
struct node *new_node(int value)
{
struct node *tmp = (struct node *)malloc(sizeof(struct node));
tmp->value = value;
tmp->left_child = tmp->right_child = NULL;
return tmp;
}
void print(struct node *root_node, int lvl) // displaying the nodes!
{
if (root_node != NULL)
{
print(root_node->left_child, lvl+1);
printf("%d, level %d\n", root_node->value, lvl);
print(root_node->right_child, lvl+1);
lvl+1;
}
}

void print2 (struct node *root_node, int lvl)
{
	if (root_node == NULL){
	return;		
	}
	
	int i;
	print2(root_node->right_child, lvl+1);
	for (i=0; i<(lvl*5); i++){
		printf("  ");
	}
		printf(" %d \n", root_node->value);
		print2(root_node->left_child, lvl+1);
				
}

void print3 (struct node *root_node, int lvl)
{
	if (root_node == NULL){
	return;		
	}
	
	int i;
	print2(root_node->right_child, lvl+1);
	for (i=0; i<(lvl*5); i++){
		printf("   ");
	}
		printf("%d\n", root_node->value);
		print2(root_node->left_child, lvl+1);
				
}

struct node* insert_node(struct node* node, int value) // inserting nodes!
{
if (node == NULL) return new_node(value);
if (value < node->value)
{
node->left_child = insert_node(node->left_child, value);
}
else if (value > node->value)
{
node->right_child = insert_node(node->right_child, value);
}
return node;
}
int main()
{
printf("TechVidvan Tutorial: Implementation of a Binary Tree in C!\n\n");
struct node *root_node = NULL;
root_node = insert_node(root_node, 10);
insert_node(root_node, 10);
insert_node(root_node, 30);
insert_node(root_node, 25);
insert_node(root_node, 36);
insert_node(root_node, 56);
insert_node(root_node, 78);
print(root_node, 0);
printf("\n");
print2(root_node, 0);
printf("\n");
print3(root_node, 0);
return 0;
}
