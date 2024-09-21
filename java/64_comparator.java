import java.util.Collections;
import java.util.Comparator;
import java.util.List;
import java.util.ArrayList;

class Demo
{
    public static void main(String args[])
    {
        Comparator<Integer> var = new Comparator<Integer>()
        {                                                           //<-- anonymous class
            public int compare(Integer i, Integer j)                //<-- always use wraper classes 
            {                                                       //<--while working with collections
                    if(i%10 >j%10)                                  //<--logic to compare only last digit of numbers
                    return 1;
                    else
                    return -1;
            }
        };

        List<Integer> nums = new ArrayList<Integer>();
        nums.add(29);
        nums.add(72);
        nums.add(88);
        nums.add(31);
        nums.add(34);

        Collections.sort(nums,var);
        System.out.println(nums);
    }
}