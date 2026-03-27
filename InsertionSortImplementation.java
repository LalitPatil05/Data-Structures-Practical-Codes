public class InsertionSortImplementation {

    static void insertionSortTechnique(int arr[]) {
        int size = arr.length;

        for(int i=0; i<size; i++) {
            int key = arr[i];
            int j = i - 1;

            //shift element to right

            while(j>=0 && arr[j] > key) {
                arr[j+1] = arr[j];
                j--;
            }
            // Insert element at correct Position
            arr[j+1] = key;
        }
    }

    static void display(int arr[]) {
        for(int i=0; i<arr.length; i++) {
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    } 

    public static void main(String args[]) {
        int arr[] = {7,6,5,4,3,2,1};
        System.out.print("Before Sorting Array is : ");
        display(arr);
        insertionSortTechnique(arr);
        System.out.print("After Sorting Array is : ");
        display(arr);
    }
}