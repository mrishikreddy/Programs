import java.util.List;
import java.util.Arrays;
import java.util.ArrayList;

class Student {
    private String name;
    private int age;

    public Student(String name) {
        this.name = name;
        this.age = 7;
    }

    public void getName()
    {
        System.out.println(this.name);
    }
}


class demo
{
    public static void main(String args[])
    {
        List<String> names = Arrays.asList("Navin","Kiran","Arjun","Ram","Rock");

        List<Student> student_objs = new ArrayList<>();

        student_objs = names.stream()
                .map(Student::new) 
                .toList();

        student_objs.forEach(Student::getName);
    }
}