public class BinarySearchExample {

  public static int binarySearchTechnique(int arr[], int target) {
      int low = 0;
      int high = arr.length - 1;
      
      while(low <= high) {
          int mid = (low+high)/2;
          
          if(arr[mid] == target) {
              return mid;
          }
          else if(arr[mid]<target){
              low = mid + 1;
          }
          else {
              high = mid - 1;
          }
      }
         return -1;
  }
      public static void main(String args[]) {
          int arr[] = {1,2,3,4,5,6,7,8,9};
          int ele = 4;
          int result = binarySearchTechnique(arr,ele);
          if(result != -1) {
              System.out.println("Element are Located at Index : "+result);
          }
          else {
              System.out.println("Element not Found.!");
          }
      }
} 
