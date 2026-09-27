# Binary Search Tree Assignment

## Given ISBN Keys

45, 20, 60, 10, 30, 50, 70, 25, 55

## BST Construction

The given keys are inserted into a Binary Search Tree.

## Tree Traversals

### Inorder
10, 20, 25, 30, 45, 50, 55, 60, 70

### Preorder
45, 20, 10, 30, 25, 60, 50, 55, 70

### Postorder
10, 25, 30, 20, 55, 50, 70, 60, 45

## Search Comparison

| Key | BST Comparisons | Linear Search Comparisons |
|-----|-----------------|---------------------------|
| 25  | 4               | 8                         |
| 55  | 4               | 9                         |
| 90  | 3               | 9                         |

## Complexity

BST Search:
- Best Case: O(1)
- Average Case: O(log n)
- Worst Case: O(n)

Linear Search:
- Best Case: O(1)
- Average Case: O(n)
- Worst Case: O(n)

## Conclusion

The program constructs a Binary Search Tree, performs tree traversals, searches for the given keys, and compares BST search with linear search.
