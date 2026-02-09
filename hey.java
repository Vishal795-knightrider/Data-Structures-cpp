class Multi implements Runnable{
    public void main(){
        System.out.println("thread is running..");
    }
    public static void main(String args[]){
        Multi t=new Multi();
        t.start();
    }
}

