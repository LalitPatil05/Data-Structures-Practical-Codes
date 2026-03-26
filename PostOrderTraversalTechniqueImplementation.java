class Node {
    int data;
    Node left, right;

    Node(int data){
        this.data = data;
        left = right = null;
    }
}

public class PostOrderTraversalTechniqueImplementation {

    Node root;

    void postOrderTechnique(Node root) {
        if(root != null) {
            postOrderTechnique(root.left);
            postOrderTechnique(root.right);
            System.out.print(root.data+" ");
        }
    }

    public static void main(String args[]) {

        PostOrderTraversalTechniqueImplementation tree = new PostOrderTraversalTechniqueImplementation();
        tree.root = new Node(10);
        tree.root.left = new Node(20);
        tree.root.left.left = new Node(40);
        tree.root.left.right = new Node(50);
        tree.root.right = new Node(30);
        tree.root.right.left = new Node(60);
        tree.root.right.right = new Node(70);

        System.out.print("Post-Order of Elements are : ");
        tree.postOrderTechnique(tree.root);

    }
} 