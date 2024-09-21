abstract class Car
{
    public abstract void drive();
    public abstract void playMusic();
    public void onlights()
    {
        System.out.println("Lights turned on");
    }
}

abstract class Porsche extends Car
{
    public void drive()
    {
        System.out.println("Driving");
    }
}

class BMW extends Porsche
{ 
    public void playMusic()
    {
        System.out.println("Music playing");
    }
}

class out
{
    public static void main(String args[])
    {
        BMW obj = new BMW();
        obj.onlights();
        obj.playMusic();
        obj.drive();
    }
}