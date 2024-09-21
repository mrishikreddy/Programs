import java.util.ArrayList;  
import java.util.List;

class Demo {
    public static void main(String args[]) {
        List<Integer> nums = new ArrayList<Integer>();
        nums.add(5);
        nums.add(6);
        nums.add(7);
        System.out.println("The number at index 1 is:"+nums.get(1));  // Access the second element (index 1)
        System.out.println("The index of 6 is:"+nums.indexOf(6)); // Find the index of 6
        for (int n : nums) {
            System.out.println(n);
        }
    }
}
