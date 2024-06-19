import java.io.*;

class A implements Runnable 
{
    public void run()
    {
        for(int i = 0 ; i< 5; i++){
            System.out.println("Hello runnable A");
            try {
                Thread.sleep(1000);

            }
            catch (InterruptedException e ){
                e.printStackTrace();
            }

        }
        
    }
}

class B implements Runnable 
{
    public void run(){
        for(int i= 0 ;i < 5 ; i++){
            System.out.println("Hello runnable B");
            try {
                Thread.sleep(1000);

            }
            catch (InterruptedException e ){
                e.printStackTrace();
            }
        
        }
    }
}

public class Demo_2 {
    public static void main(String[] args) {
        System.out.println("Hello World I am a Demo");

        Runnable obj1 = () ->
        {
            for(int i = 0 ; i< 5; i++){
                System.out.println("Hello runnable A");
                try {
                    Thread.sleep(1000);
    
                }
                catch (InterruptedException e ){
                    e.printStackTrace();
                }
    
            }
        };

        Runnable obj2 = () ->
        {
            for(int i = 0 ; i< 5; i++){
                System.out.println("Hello runnable B");
                try {
                    Thread.sleep(1000);
    
                }
                catch (InterruptedException e ){
                    e.printStackTrace();
                }
            }
        };

        Thread t1 = new Thread(obj1);

        Thread t2 = new Thread(obj2);

        t1.start();
        // try{
        //     Thread.sleep(5);
        // }
        // catch (InterruptedException e){
        //     e.printStackTrace();
        // }
        t2.start();   

    }
}