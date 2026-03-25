import java.util.Scanner;

class Stack {
    int maxSize;
    int[] arr;
    int top;

    Stack(int size) {
        maxSize = size;
        arr = new int[maxSize];
        top = -1;
    }

    void push(int ele) {
        if(top == maxSize - 1) {
            System.out.println("Stack is Full / Overflow");
        } else {
            arr[++top] = ele;
            System.out.println(ele+" Pushed into the Stack.");
        }
    }

    void pop() {
        if(top == -1) {
            System.out.println("Stack is Empty / Underflow.");
        } else {
            int bin = arr[top--];
            System.out.println(bin+" is Popped From Stack.");
        }
    }

    void peek() {
        if(top == -1) {
            System.out.println("Stack is Empty");
        } else {
            System.out.println("Top Element is : "+arr[top]);
        }
    }

    void display() {
        if(top == -1) {
            System.out.println("Stack is Empty");
        } else {
            System.out.print("Stack Element is : ");
            for(int i=top; i>=0; i--) {
                System.out.print(arr[i]+" ");
            }
        }
        System.out.println();
    }
 }

public class StackDemo {
    public static void main(String args[]) {
        
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter the Stack Size : ");
        int size = sc.nextInt();

        Stack stack = new Stack(size);

        int choice;

        do {
            System.out.println("------Stack Menu------");
            System.out.println("1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit");
            System.out.print("Enter the Choice : ");
            choice = sc.nextInt();

            switch(choice) {
                case 1:
                    System.out.print("Enter the Value : ");
                    int ele = sc.nextInt();
                    stack.push(ele);
                    break;
                case 2:
                    stack.pop();
                    break;
                case 3:
                    stack.peek();
                    break;
                case 4:
                    stack.display();
                    break;
                case 5:
                    System.out.println("Exiting....");
                    break;
                default:
                    System.out.println("Invalid Choice..!!");
            }

        } while(choice != 5);

        sc.close();
    }
}