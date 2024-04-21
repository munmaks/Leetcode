/*
100. Same Tree
https://leetcode.com/problems/same-tree/description/
Given the roots of two binary trees p and q, write a function to check if they are the same or not.

Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.

Example 1:
Input: p = [1,2,3], q = [1,2,3]
Output: true

Example 2:
Input: p = [1,2], q = [1,null,2]
Output: false

Example 3:
Input: p = [1,2,1], q = [1,1,2]
Output: false
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if (!p && !q) { return true; }  /* les arbre sont deux NULL */
    else if (!p || !q) { return false; }    /* l'un d'entre n'est pas NULL */

    return (isSameTree(p->left, q->left) &&         /* la comparaison a gauche */
            isSameTree(p->right, q->right)) &&      /* la comparaison a droite */
            (p->val == q->val) ;                    /* la comparaison des valeurs */
}
