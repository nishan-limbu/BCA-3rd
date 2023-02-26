public class Question32 implements Runnable {
    public static void main(String[] args) {
        Thread thread = new Thread(new Question32());
        thread.start();
    }
    @Override
    public void run() {
        try {
            for (int i = 1; i <= 20; i++) {
                System.out.println(i);
                Thread.sleep(2000);
            }
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }
}
