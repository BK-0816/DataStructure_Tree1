#include<stdio.h>
#include<stdlib.h>
#include<memory.h>
#define NODE 100

typedef struct TreeNode {
	int data;
	struct TreeNode* left, * right;
} TreeNode;
//		  1
//	  2		  7
//  3   6   8    9
//4   5        10 11 

TreeNode n1 = { 4, NULL, NULL };
TreeNode n2 = { 5, NULL, NULL };
TreeNode n3 = { 3, &n1, &n2 };
TreeNode n4 = { 6, NULL, NULL };
TreeNode n5 = { 2, &n3, &n4 };
TreeNode n6 = { 8, NULL, NULL };
TreeNode n7 = { 10, NULL, NULL };
TreeNode n8 = { 11, NULL, NULL };
TreeNode n9 = { 9, &n7, &n8 };
TreeNode n10 = { 7, &n6, &n9 };
TreeNode n11 = { 1, &n5, &n10 };
TreeNode* root = &n11;
// ���� ��ȸ
void inorder(TreeNode* root) {
	if (root) {
		inorder(root->left);	// ���ʼ���Ʈ�� ��ȸ
		printf(" %d", root->data); 	// ��� �湮
		inorder(root->right);	// �����ʼ���Ʈ�� ��ȸ
	}
}
// ���� ��ȸ
void preorder(TreeNode* root) {
	if (root) {
		printf(" %d", root->data); 	// ��� �湮
		preorder(root->left);	// ���ʼ���Ʈ�� ��ȸ
		preorder(root->right);	// �����ʼ���Ʈ�� ��ȸ
	}
}
// ���� ��ȸ
void postorder(TreeNode* root) {
	if (root) {
		postorder(root->left);	// ���� ���� Ʈ�� ��ȸ
		postorder(root->right);	// ������ ���� Ʈ�� ��ȸ
		printf(" %d", root->data); 	// ��� �湮
	}
}
int main(void)
{
	printf("<Linked Tree>");
	printf("\n");
	printf("1.���� ��ȸ=");
	preorder(root);
	printf("\n");
	printf("\n");

	printf("2.���� ��ȸ=");
	inorder(root);
	printf("\n");
	printf("\n");

	printf("3.���� ��ȸ=");
	postorder(root);
	printf("\n");
	printf("\n");

	printf("<Array Tree>");
	//int treeArray[NODE] = { 1, 2, 7, 3, 6, 8, 9, 4, 5, 0, 0, 10, 11 }; //Ʈ���� �迭ǥ��
	
	//for (int i = 0; i <= 11; i++) {
		//printf("%d", treeArray[i]);
		//if (treeArray[i] = 0)
			//treeArray[i]};
	return 0;
}