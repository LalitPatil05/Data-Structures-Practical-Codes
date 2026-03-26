import java.util.Scanner;

class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}

class LinkedList {

    Node head = null;

    // Insert the element in the Linked List at the Beginning
    void insertAtBeginning(int data) {
        Node newNode = new Node(data);
        newNode.next = head;
        head = newNode;
        System.out.println(data+" Inserted at the Beginning of the Linked List.");
    }

    // Insert the element in the Linked List at the Ending
    void insertAtEnding(int data) {
        Node newNode = new Node(data);
        if(head == null) {
            head = newNode;
        } else {
           Node temp = head;
           while(temp.next != null) {
            temp = temp.next;
           }
           temp.next = newNode;
        }
        System.out.println(data+" inserted at the Ending of the Linked List.");
    }

    // Delete the element from Linked List at the Beginning
    void deleteFromBeginning() {
        if(head == null) {
            System.out.println("List is Empty.!");
        } else {
            System.out.println(head.data+" is Deleted From the Beginning of the Linked List.");
            head = head.next;
        }
    }

    // Delete the Element from Linked List at the Ending
    void deleteFromEnding() {
        if(head == null) {
            System.out.println("List is Empty.!");
        }
        else if(head.next == null) {
            System.out.println(head.data+" is Deleted from the Ending of the Linked List.");
            head = null;
        }
        else {
            Node temp = head;
            while(temp.next.next != null) {
                temp = temp.next;
            }   
            System.out.println(temp.next.data+" are Deleted from the Ending of the Linked List");
            temp.next = null;
        }
    }

    // Display the Element in the Linked List
    void display() {
        if(head == null) {
            System.out.println("Linked List is Empty.!");
        } else {
            Node temp = head;
            System.out.print("Linked List Elements are : ");
            while(temp != null) {
                System.out.print(temp.data+" -> ");
                temp = temp.next;
            }
            System.out.println("NULL");
        }
    }
}

public class LinkedListImplementation {

    public static void main(String args[]) {

        Scanner sc = new Scanner(System.in);

        LinkedList list = new LinkedList();

        int choice;

        do {
            System.out.println("------LINKED LIST MENU------");
            System.out.print("1.Insert at Beginning\n2.Insert at Ending\n3.Delete from Beginning\n4.Delete from Ending\n5.Display List.\n6.Exit\n");
            
            System.out.print("Enter the Choice : ");
            choice = sc.nextInt();

            switch(choice) {
                case 1:
                    System.out.print("Enter the Value : ");
                    int ele = sc.nextInt();
                    list.insertAtBeginning(ele);
                    break;
                case 2:
                    System.out.print("Enter the Value : ");
                    int ele2 = sc.nextInt();
                    list.insertAtEnding(ele2);
                    break;
                case 3:
                    list.deleteFromBeginning();
                    break;
                case 4:
                    list.deleteFromEnding();
                    break;
                case 5:
                    list.display();
                    break;
                case 6:
                    System.out.println("Exiting...");
                    break;
                default:
                    System.out.println("Invalid Choice. Please Try Again.!");
            }

        } while(choice != 6);

        sc.close();
    }
}