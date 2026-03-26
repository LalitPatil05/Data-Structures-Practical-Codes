import java.util.Scanner;

class Node {
    int data;
    Node left, right;

    Node(int data) {
        this.data = data;
        left = right = null;
    }
}

class Queue {
    Node arr[];
    int FRONT, REAR, SIZE;

    Queue(int SIZE) {
        this.SIZE = SIZE;
        arr = new Node[SIZE];
        FRONT = -1;
        REAR = -1;
    }

    boolean isEmpty() {
        if(FRONT == -1 || FRONT > REAR) {
            return true;
        } else {
            return false;
        }
    }

    boolean isFull() {
        if(REAR == SIZE-1) {
            return true;
        } else {
            return false;
        }
    }

    void enQueue(Node node) {
        if(isFull()) {
            System.out.println("Queue is Full.!");
            return;
        }
        if(FRONT == -1) {
            FRONT = 0;
        }
        REAR = REAR + 1;
        arr[REAR] = node;
    }

    Node deQueue() {
        if(isEmpty()){
            return null;
        }
        Node temp = arr[FRONT];
        FRONT = FRONT + 1;
        return temp;
    }
}

class BinaryTree {
    Node root;
    // Insert an Element
    void insert(int data) {
        Node newNode = new Node(data);
        if(root == null) {
            root = newNode;
            return;
        }

        Queue queue = new Queue(100);
        queue.enQueue(root);

        while(!queue.isEmpty()) {
            Node temp = queue.deQueue();
            if(temp.left == null) {
                temp.left = newNode;
                return;
            } else {
                queue.enQueue(temp.left);
            } if(temp.right == null) {
                temp.right = newNode;
                return;
            } else {
                queue.enQueue(temp.right);
            }
        }    
    }

void BFS() {
    if(root == null) {
        System.out.println("Tree is Empty.!");
        return;
    }

    Queue queue = new Queue(100);
    queue.enQueue(root);

    while(!queue.isEmpty()) {
        Node temp = queue.deQueue();

        System.out.print(temp.data+" ");

        if(temp.left != null) {
            queue.enQueue(temp.left);
        }
        if(temp.right != null) {
            queue.enQueue(temp.right);
        }
    }
}

}

public class BFSImplementation {
    
    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);

        BinaryTree tree = new BinaryTree();
        
        int choice;

        do {

            System.out.println("------BFS MENU------");
            System.out.print("1.Insert Node\n2.BFS Traversal\n3.Exit\n");

            System.out.print("Enter the Choice : ");
            choice = sc.nextInt();

            switch(choice) {
                case 1:
                    System.out.print("Enter the Value : ");
                    int val = sc.nextInt();
                    tree.insert(val);
                    break;
                case 2:
                    System.out.print("BFS Traversed Order List is : ");
                    tree.BFS();
                    System.out.println();
                    break;
                case 3:
                    System.out.println("Exiting...");
                    break;
                default:
                    System.out.println("Invalid Choice, Try again later.!");
            }

        } while(choice !=3);
        
        sc.close();
    }
}