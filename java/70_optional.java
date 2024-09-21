import java.util.Optional;
import java.util.List;
import java.util.Arrays;

class demo
{
    public static void main(String args[])
    {
        List<String> names_list = Arrays.asList("Navin","xenon","xavier","loki","john","kishor");

        Optional<String> name = names_list.stream()
                                 .filter(x->x.contains("x"))
                                 .findFirst();
                            
        System.out.println(name.orElse("Not found"));
    }
}