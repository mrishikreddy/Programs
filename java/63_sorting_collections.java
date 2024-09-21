import java.util.ArrayList;  
import java.util.List;
import java.util.Collections;

class Demo {
    public static void main(String args[]) {
        List<Integer> nums = new ArrayList<Integer>();
        nums.add(5);
        nums.add(6);
        nums.add(7);
        nums.add(1);
        nums.add(2);
        nums.add(3);
        
        Collections.sort(nums);
        System.out.println(nums);
    }
}
