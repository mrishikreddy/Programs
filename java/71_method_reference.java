import java.util.List;
import java.util.Arrays;

class demo
{
    public static void main(String args[])
    {
        List<String> names = Arrays.asList("Navin","Kiran","Arjun","Ram","Rock");
        List<String> cap_names = names.stream()
                                      .map(String::toUpperCase)
                                      .toList();

        cap_names.forEach(System.out::println);
    }
}