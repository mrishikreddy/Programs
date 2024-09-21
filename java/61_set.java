import java.util.HashSet;  
import java.util.Set;
import java.util.Iterator;
// or import java.util.TreeSet;

class Demo {
    public static void main(String args[]) {
        Set<Integer> nums = new HashSet<Integer>(); // or Set<Integer> nums = new TreeSet<Integer>();
        nums.add(5);                                // or  HashSet<Integer> nums = new HashSet<Integer>();
        nums.add(2);
        nums.add(8);
        nums.add(6);
        nums.add(7);

        Iterator<Integer> values = nums.iterator();
        while(values.hasNext())
        System.out.println(values.next());
    }
}
