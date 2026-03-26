import java.util.Scanner;

// Node class
class Node {
    int data;
    Node left, right;

    Node(int data) {
        this.data = data;
        left = right = null;
    }
}

// Binary Tree
class BinaryTree {

    Node root;

    // Insert (level-wise like BFS)
    void insert(int data) {
        Node newNode = new Node(data);

        if (root == null) {
            root = newNode;
            return;
        }

        // simple manual queue
        Node[] queue = new Node[100];
        int front = 0, rear = 0;

        queue[rear++] = root;

        while (front < rear) {
            Node temp = queue[front++];

            if (temp.left == null) {
                temp.left = newNode;
                return;
            } else {
                queue[rear++] = temp.left;
            }

            if (temp.right == null) {
                temp.right = newNode;
                return;
            } else {
                queue[rear++] = temp.right;
            }
        }
    }

    // PREORDER (ROOT LEFT RIGHT)
    void preorder(Node root) {
        if (root != null) {
            System.out.print(root.data + " ");
            preorder(root.left);
            preorder(root.right);
        }
    }

    // INORDER (LEFT ROOT RIGHT)
    void inorder(Node root) {
        if (root != null) {
            inorder(root.left);
            System.out.print(root.data + " ");
            inorder(root.right);
        }
    }

    // POSTORDER (LEFT RIGHT ROOT)
    void postorder(Node root) {
        if (root != null) {
            postorder(root.left);
            postorder(root.right);
            System.out.print(root.data + " ");
        }
    }
}

// Main class
public class DFSImplementation {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        BinaryTree tree = new BinaryTree();

        int choice;

        do {
            System.out.println("\n------ DFS MENU ------");
            System.out.println("1. Insert Node");
            System.out.println("2. Preorder (DFS)");
            System.out.println("3. Inorder (DFS)");
            System.out.println("4. Postorder (DFS)");
            System.out.println("5. Exit");

            System.out.print("Enter choice: ");
            choice = sc.nextInt();

            switch (choice) {

                case 1:
                    System.out.print("Enter value: ");
                    int val = sc.nextInt();
                    tree.insert(val);
                    break;

                case 2:
                    System.out.print("Preorder: ");
                    tree.preorder(tree.root);
                    System.out.println();
                    break;

                case 3:
                    System.out.print("Inorder: ");
                    tree.inorder(tree.root);
                    System.out.println();
                    break;

                case 4:
                    System.out.print("Postorder: ");
                    tree.postorder(tree.root);
                    System.out.println();
                    break;

                case 5:
                    System.out.println("Exiting...");
                    break;

                default:
                    System.out.println("Invalid choice!");
            }

        } while (choice != 5);

        sc.close();
    }
}