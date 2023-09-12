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
// 중위 순회
void inorder(TreeNode* root) {
	if (root) {
		inorder(root->left);	// 왼쪽서브트리 순회
		printf(" %d", root->data); 	// 노드 방문
		inorder(root->right);	// 오른쪽서브트리 순회
	}
}
// 전위 순회
void preorder(TreeNode* root) {
	if (root) {
		printf(" %d", root->data); 	// 노드 방문
		preorder(root->left);	// 왼쪽서브트리 순회
		preorder(root->right);	// 오른쪽서브트리 순회
	}
}
// 후위 순회
void postorder(TreeNode* root) {
	if (root) {
		postorder(root->left);	// 왼쪽 서브 트리 순회
		postorder(root->right);	// 오른쪽 서브 트리 순회
		printf(" %d", root->data); 	// 노드 방문
	}
}
int main(void)
{
	printf("<Linked Tree>");
	printf("\n");
	printf("1.전위 순회=");
	preorder(root);
	printf("\n");
	printf("\n");

	printf("2.중위 순회=");
	inorder(root);
	printf("\n");
	printf("\n");

	printf("3.후위 순회=");
	postorder(root);
	printf("\n");
	printf("\n");

	printf("<Array Tree>");
	//int treeArray[NODE] = { 1, 2, 7, 3, 6, 8, 9, 4, 5, 0, 0, 10, 11 }; //트리의 배열표현
	
	//for (int i = 0; i <= 11; i++) {
		//printf("%d", treeArray[i]);
		//if (treeArray[i] = 0)
			//treeArray[i]};
	return 0;
}