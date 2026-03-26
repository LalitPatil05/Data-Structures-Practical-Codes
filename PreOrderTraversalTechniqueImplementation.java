class Node {
    int data;
    Node left, right;

    Node(int data) {
        this.data = data;
        left = right = null;
    }
}

public class PreOrderTraversalTechniqueImplementation {

    Node root;

    void preOrderTechnique(Node root) {
        if (root != null) {
            System.out.print(root.data+" ");
            preOrderTechnique(root.left);
            preOrderTechnique(root.right);
        }
    }

    public static void main(String args[]) {

        PreOrderTraversalTechniqueImplementation tree = new PreOrderTraversalTechniqueImplementation();

        tree.root = new Node(10);
        tree.root.left = new Node(20);
        tree.root.left.left = new Node(40);
        tree.root.left.right = new Node(50);
        tree.root.right = new Node(30);
        tree.root.right.left = new Node(60);
        tree.root.right.right = new Node(70);

        System.out.print("Pre-Order of Elements is : ");
        tree.preOrderTechnique(tree.root);
    }
}