public class MergeSortSimplexForm {

    static void mergeSort(int arr[], int left, int right) {
        if(left >= right) {
            return;
        }
        int mid = (left + right) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }

    static void merge(int arr[], int left, int mid, int right) {
        int temp[] = new int[right - left+1];

        int i = left;
        int j = mid + 1;
        int k = 0;

        while(i<=mid && j<=right) {
            if(arr[i] < arr[j]) {
                temp[k++] = arr[i++];
            } else {
                temp[k++] = arr[j++];
            }
        }

        // remainin left
        while(i<=mid) {
            temp[k++] = arr[i++];
        }

        //remaining right


        while(j<=right) {
            temp[k++] = arr[j++];
        }

        //copy back to original array

        for(int x=0; x<temp.length; x++) {
            arr[left+x] = temp[x];
        }
    }

    static void display(int arr[]) {
        for(int i=0;i<arr.length;i++) {
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }


    public static void main(String args[]) {

        int arr[] = {5,3,8,4,2,7};

        System.out.print("Before Sorting Array is : ");
        display(arr);

        mergeSort(arr, 0, arr.length-1);;

        System.out.print("After Sorting Array is : ");
        display(arr);

    }
}