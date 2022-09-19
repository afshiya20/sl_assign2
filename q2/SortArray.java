import java.util.*;  

class SortArray {

    public native int[] sortArrayNative(int[] k);
    static {
        System.loadLibrary("SortArray");
    }
    public static void main(String[] args){
        SortArray sorter = new SortArray();
        System.out.println("Enter array size : ");
        Scanner sc=new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter array elements : ");
        for(int i=0;i<n;i++){
            int k = sc.nextInt();
            arr[i]=k;
        }
        sc.close();
        arr = sorter.sortArrayNative(arr);
        System.out.println("Sorted Array : ");
        for(int i=0;i<n;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println("");
    }
}
