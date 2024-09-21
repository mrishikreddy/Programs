import java.util.Collections;
import java.util.Comparator;
import java.util.List;
import java.util.ArrayList;

class Student
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
}

class Demo
{
    public static void main(String args[])
    {
         Comparator<Student> var = new Comparator<Student>()
         {                   
            @Override                                        //<-- anonymous class
             public int compare(Student i, Student j)                
                {     if(i.age >j.age)                                  //<--logic to compare ages of Student objects
                     return 1;
                     else
                     return -1;
                };
         };

        List<Student> studs = new ArrayList<>();
        studs.add(new Student(22,"Navin"));
        studs.add(new Student(18,"Shiv"));
        studs.add(new Student(45,"Ram"));
        studs.add(new Student(36,"Pawan"));
        studs.add(new Student(27,"Rohit"));

        Collections.sort(studs,var);
        for(Student s: studs)
           System.out.println(s);
    }
}