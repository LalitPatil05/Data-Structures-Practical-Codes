public class SelectionSortImplementation {

    static void selectionSortTechnique(int arr[]) {
        
        int size = arr.length;

        for(int i=0; i<size-1; i++) {
            int minIndex = i;

            // Find minimum element
            for(int j=i+1; j<size; j++) {
                if(arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }
            // swapping
            int temp = arr[minIndex];
            arr[minIndex] = arr[i];
            arr[i] = temp;
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
        selectionSortTechnique(arr);
        System.out.print("After Sorting Array is : ");
        display(arr);
    }
}