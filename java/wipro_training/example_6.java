// Multiple inheritence

/**
 * checkId
 */
interface checkId {

    void checkTag();

    void checkRetina();
}

interface authentication {

    // void checkUsername();
    void checkTag();

    void checkPassword();

}

class dumb {
    void something() {
        System.out.println("Nothing");
    }
}

class worker implements checkId, authentication {
    public void checkTag() {
        System.out.println("I have checked tags");

    }

    public void checkRetina() {
        System.out.println("I have checked retina");
    }

    // public void checkUsername() {
    // System.out.println("I have checked Retina");
    // }

    public void checkPassword() {
        System.out.println("I have checked Password");
    }
}

class worker_2 extends worker {
    public void fun2() {
        System.out.println("Just fun");
    }
}

class worker_3 extends worker_2 {

}

class worker_4 extends dumb {
}

public class example_6 {
    public static void main(String[] args) {

        worker w = new worker();
        w.checkTag();
        w.checkRetina();
        // w.checkUsername();
        w.checkPassword();

        worker_4 ww = new worker_4();

        ww.something();
    }
}
