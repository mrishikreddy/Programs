import java.util.Map;
import java.util.HashMap;
class demo
{
    public static void main(String args[])
    {
        Map<Character,Integer> marks = new HashMap<>();       // use HashTable for synchornization
        marks.put('A',56);
        marks.put('B',42);
        marks.put('C',83);
        marks.put('D',72);
        marks.put('E',84);
        marks.put('F',96);

        System.out.println(marks.get('A'));
        System.out.println(marks.keySet());

        for(Character key: marks.keySet())
        {
            System.out.println(key+":"+marks.get(key));
        }

    }
}
