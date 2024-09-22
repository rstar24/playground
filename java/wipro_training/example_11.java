import java.util.*;

public class example_11 {
    public static void main(String[] args) {

        System.out.println("List of Integer");
        List<Integer> a1 = new ArrayList<>();
        a1.add(1);
        a1.add(2);
        a1.add(3);
        a1.add(4);

        Iterator<Integer> it = a1.iterator();

        while (it.hasNext()) {
            System.out.println(it.next());
        }

        System.out.println("List of String");
        List<String> l1 = new ArrayList<>();
        l1.add("Rishabh");
        l1.add("Likes");
        l1.add("to");
        l1.add("code");

        Iterator<String> it2 = l1.iterator();

        while (it2.hasNext()) {
            System.out.println(it2.next());
        }

        System.out.println("List of String");
        PriorityQueue<String> q1 = new PriorityQueue<>();
        q1.add("Katrina");
        q1.add("Karina");
        q1.add("Karishma");
        Iterator<String> it3 = q1.iterator();
        while (it3.hasNext()) {
            System.out.println(it3.next());

        }

    }
}
