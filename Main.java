import java.util.Random;

class SharedResource {
    int number;
    boolean isEvenReady = false;
    boolean isOddReady = false;

    synchronized void generateNumber() {
        Random random = new Random();
        number = random.nextInt(100) + 1; 
        System.out.println("Generated number: " + number);

        if (number % 2 == 0) {
            isEvenReady = true;
            notifyAll(); 
        } else {
            isOddReady = true;
            notifyAll();
        }
    }

    synchronized void computeSquare() {
        while (!isEvenReady) {
            try {
                wait(); 
            } catch (InterruptedException e) {
                Thread.currentThread().interrupt();
            }
        }
        System.out.println("Square of " + number + " is: " + (number * number));
        isEvenReady = false;  
    }

    synchronized void computeCube() {
        while (!isOddReady) {
            try {
                wait(); 
            } catch (InterruptedException e) {
                Thread.currentThread().interrupt();
            }
        }
        System.out.println("Cube of " + number + " is: " + (number * number * number));
        isOddReady = false;  
    }
}

class NumberGeneratorThread extends Thread {
    private final SharedResource sharedResource;

    public NumberGeneratorThread(SharedResource sharedResource) {
        this.sharedResource = sharedResource;
    }

    @Override
    public void run() {
        while (true) {
            sharedResource.generateNumber();
            try {
                Thread.sleep(1000);  
            } catch (InterruptedException e) {
                Thread.currentThread().interrupt();
            }
        }
    }
}

class SquareCalculationThread extends Thread {
    private final SharedResource sharedResource;

    public SquareCalculationThread(SharedResource sharedResource) {
        this.sharedResource = sharedResource;
    }

    @Override
    public void run() {
        while (true) {
            sharedResource.computeSquare();
        }
    }
}

class CubeCalculationThread extends Thread {
    private final SharedResource sharedResource;

    public CubeCalculationThread(SharedResource sharedResource) {
        this.sharedResource = sharedResource;
    }

    @Override
    public void run() {
        while (true) {
            sharedResource.computeCube();
        }
    }
}

public class MultithreadingSolution {
    public static void main(String[] args) {
        SharedResource sharedResource = new SharedResource();

        Thread generatorThread = new NumberGeneratorThread(sharedResource);
        Thread squareThread = new SquareCalculationThread(sharedResource);
        Thread cubeThread = new CubeCalculationThread(sharedResource);

        generatorThread.start();
        squareThread.start();
        cubeThread.start();
    }
}
