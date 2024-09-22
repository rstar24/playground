
/**
 * NumericTest
 */
interface NumericTest {
    boolean test(int n);
}

/**
 * SomeFunc
 */
interface SomeFunc<T> {
    T func(T t);
}

public class example_12 {
    public static void main(String[] args) {

        NumericTest isEven = (n) -> (n % 2) == 0;
        if (isEven.test(100)) {
            System.out.println("Yes I am even");
        }
        if (isEven.test(95)) {
            System.out.println("No I am not even");
        }

        NumericTest isNonNeg = (n) -> (n >= 0);

        if (isNonNeg.test(-10)) {
            System.out.println("I won't run");
        }
        if (isNonNeg.test(100)) {
            System.out.println("I am non Negative");
        }

        System.out.println("Reversing using lambda expression");
        SomeFunc<String> reverse = (str) -> {
            String result = "";

            for (int i = ((str.length()) - 1); i >= 0; i--) {
                result += str.charAt(i);
            }
            return result;
        };
        System.out.println("Revers abcdef " + reverse.func("abcdef"));

        System.out.println("Factorial using lambda expression");
        SomeFunc<Integer> factorial = (n) -> {
            int res = 1;

            for (int i = 1; i <= n; i++) {
                res *= i;
            }
            return res;
        };
        System.out.println("10! = " + factorial.func(10));

    }
}
