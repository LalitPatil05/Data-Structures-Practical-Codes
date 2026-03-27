public class BubbleSortImplementation {
    
    static void bubbleSort(int arr[]) {
        
        int n = arr.length;

        for(int i=0; i<n-1; i++) {
            for(int j=0; j<n-1; j++) {
                if(arr[j] > arr[j+1]) {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }

    static void display(int arr[]) {
        for(int i=0; i<arr.length; i++) {
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }

    public static void main(String args[]) {
        int arr[] = {5,4,3,2,1};
        System.out.print("Before Sorting Array is : ");
        display(arr);
        bubbleSort(arr);
        System.out.print("After Sorting Array is : ");
        display(arr);
    }
}