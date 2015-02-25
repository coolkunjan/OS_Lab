
//Did the code in cooperation with 121048 Shailee Mehta

public class ProducerConsumerTest {

   public static void main(String[] args) {
      monitor c = new monitor();
       Consumer c1 = new Consumer(c, 1);
       Producer p1 = new Producer(c, 1);
     	 Consumer c2 = new Consumer(c, 2);
       Producer p2 = new Producer(c, 2);
      System.out.print("\nConsumer 1 \n");
      c1.start();
      System.out.print("\nConsumer 2 \n");
      c2.start();
      System.out.print("\nProducer 1 \n");
      p1.start(); 
      System.out.print("\nProducer 2 \n");
       p2.start();      
   }
}
class monitor {
   private int contents;
   private boolean available = false;
   public synchronized int get() {
      while (available == false) {
         try {
            wait();
            System.out.print("\nConsumer waiting\n");
         }
         catch (InterruptedException e) {
         }
      }
      available = false;
      notifyAll();
      return contents;
   }
   public synchronized void put(int value) {
      while (available == true) {
         try {
            wait();
            System.out.print("\nProducer waiting\n");
         }
         catch (InterruptedException e) { 
         } 
      }
      contents = value;
      available = true;
      notifyAll();
   }
}

class Consumer extends Thread {
   private monitor monitor;
   private int number;
   public Consumer(monitor c, int number) {
      monitor = c;
      this.number = number;
   }
   public void run() {
 //  System.out.print("\nconsumer process being called\n");
      int value = 0;
        
            value = monitor.get();
            System.out.println("Consumer #" 
			+ this.number
+ " got: " + value);

}
}

class Producer extends Thread {
private monitor monitor;
private int number;

public Producer(monitor c, int number) {
monitor = c;
this.number = number;
}

public void run() {
int num = (int)(Math.random() * 10);
//System.out.print("\n Calling producer\n");
monitor.put(num);
System.out.println("Producer #" + this.number
+ " put: " + num);
try {
sleep((int)(Math.random() * 100));
} catch (InterruptedException e) { }

}
}
