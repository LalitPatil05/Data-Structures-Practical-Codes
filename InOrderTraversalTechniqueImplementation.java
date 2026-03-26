class Node {
    int data;
    Node left, right;

    Node(int data) {
        this.data = data;
        left = right = null;
    }
}

public class InOrderTraversalTechniqueImplementation {

    Node root;

    void inOrder(Node root) {
        if(root != null) {
            inOrder(root.left);
            System.out.print(root.data+" ");
            inOrder(root.right);
        }
    }

    public static void main(String args[]) {

        InOrderTraversalTechniqueImplementation tree = new InOrderTraversalTechniqueImplementation();

        tree.root = new Node(10);
        tree.root.left = new Node(20);
        tree.root.left.left = new Node(40);
        tree.root.left.right = new Node(50);
        tree.root.right = new Node(30);
        tree.root.right.left = new Node(60);
        tree.root.right.right = new Node(70);

        System.out.print("In-Order of Elements is : ");
        tree.inOrder(tree.root);
    }
}