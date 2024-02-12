public class JavaStrings1 {
    public static void main(String[] args) {
        String s = "Hello";
        // Method calls
        // length() -> to get the number of characters
        System.out.println(s.length());
        // charAt(ind) -> character at ind index
        System.out.println(s.charAt(2)); // character at 2nd index
        // toUpperCase() -> return a new string
        // where every character is of uppercase
        System.out.println(s.toUpperCase());
        System.out.println(s.toLowerCase());
        System.out.println(s); // Original String won't be changed as it's immutable
        System.out.println(s.contains(""+'H')); // true as Hello has H in it
        System.out.println(s.contains("" + "b")); // false as there is no b
        // Hello
        System.out.println(s.indexOf('H'));
        System.out.println(s.lastIndexOf('l'));
        System.out.println(s.startsWith("Hel"));
        System.out.println(s.endsWith("llo"));

        System.out.println(s.substring(2));
        System.out.println(s.substring(1, 4));

        // Compare String -> compareTo() -->
        // negative --> s1 is smaller than s2
        // 0 --> s1 is equal to s2
        // positive --> s1 is greater than s2
        String s1 = "abc"; // 'c' 'e' --> 99 - 101 --> -2
        String s2 = "abe"; // 'e' 'c' --> 101 - 99 --> 2
        String p = "xyz";
        String q = "xyzaaaaa";
        System.out.println(p.compareTo(q));
        System.out.println(s1.compareTo(s2));
        System.out.println(s2.compareTo(s1));
        //  equals() --> true / false
        System.out.println(p.equals(q));
        char ch = 'a';
        System.out.println(ch);
        char ch2 = 65; // 'A'
        System.out.println(ch2);
        int a = 'z'; // 122
        System.out.println(a);
        System.out.println((int)'B');
    }
}
