class student
{
    int rollno;
    String name;
    char section;
}
class out
{
    public static void main(String args[])
    {
        student s1 = new student();
        s1.rollno = 1;
        s1.name = "Rishik Reddy";
        s1.section = 'R';

        student s2 = new student();
        s2.rollno = 2;
        s2.name = "Ragu";
        s2.section = 'P';

        student s3 = new student();
        s3.rollno = 3;
        s3.name = "Ram";
        s3.section = 'Q';

        student arr[] = new student[3];
        arr[0] = s1;
        arr[1] = s2;
        arr[2] = s3;

        int i;

        for(i=0;i<arr.length;i++)
        {
            System.out.println(arr[i].rollno+" "+arr[i].name+" "+arr[i].section);
        }
    }
}