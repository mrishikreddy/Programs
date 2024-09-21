import java.util.function.Consumer;
import java.util.List;
import java.util.Arrays;
class demo
{
    public static void main(String args[])
    {
        List<Integer> nums = Arrays.asList(4,5,6,7,8,9,10);

        Consumer<Integer> con = new Consumer<Integer>()
        {
            public void accept(Integer n)
            {
                System.out.println(n);
            };
        };

        nums.forEach(con);

        // or  Consumer<Integer> con = n->System.out.println(n));
        //or  nums.forEach(n -> System.out.println(n));
    }


}