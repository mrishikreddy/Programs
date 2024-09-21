import java.util.stream.Stream;
import java.util.List;
import java.util.ArrayList;
import java.util.Random;


class demo
{
    public static void main(String args[])
    {
        List<Integer> nums = new ArrayList<>(10_000);

        Random ran = new Random();
        for(int i=1;i<=10_000;i++)
            nums.add(ran.nextInt(100));


        long stseq = System.currentTimeMillis();
        int sum1 = nums.stream()
                    .map(i->i*2)
                    .mapToInt(i->i)
                    .sum();
        long endseq = System.currentTimeMillis();

        long stpara = System.currentTimeMillis();
        int sum2 = nums.parallelStream()
                    .map(i->i*2)
                    .mapToInt(i->i)
                    .sum();
        long endpara = System.currentTimeMillis();

        System.out.println(sum1+":"+(stseq-endseq));
        System.out.println(sum2+":"+(stpara-endpara));


    }
}
