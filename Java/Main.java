public class Main {
    public static void main(String[] args) {
        java.util.stream.IntStream.rangeClosed(1, 150).mapToObj(i -> String.valueOf(i) + (0 == i % 3 || 3 == i % 10 ? "!" : "")).forEach(System.out::println);
    }
}
