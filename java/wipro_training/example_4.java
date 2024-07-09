public class example_4 {
    public static void main(String[] args) {
        String s = "I am a string";
        s = s + '\0';
        System.out.println(s);
        dumb2 d = new dumb2();
        d.fun3();
    }
}

class dumb2 {
    void fun3() {
        System.out.println("I am fun3()");
    }
}
