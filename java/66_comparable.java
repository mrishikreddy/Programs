import java.util.Collections;
import java.util.Comparator;
import java.util.List;
import java.util.ArrayList;

class Student implements Comparable<Student>
{
    int age;
    String name;

    public Student(int age,String name)
    {
        this.age=age;
        this.name=name;
    }

    @Override
    public String toString()
    {
        return "Student [age="+age+" name="+name+"]";
    }

    @Override
    public int compareTo(Student that)
    {
        if(this.age >that.age)
        return 1;
        else
        return -1;
    }
}

class Demo
{
    public static void main(String args[])
    {
        
        List<Student> studs = new ArrayList<>();
        studs.add(new Student(22,"Navin"));
        studs.add(new Student(18,"Shiv"));
        studs.add(new Student(45,"Ram"));
        studs.add(new Student(36,"Pawan"));
        studs.add(new Student(27,"Rohit"));

        Collections.sort(studs);
        for(Student s: studs)
           System.out.println(s);
    }
}