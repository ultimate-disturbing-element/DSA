package Arrays.Maximum_Number;

import java.util.PriorityQueue;
import java.util.Queue;

public class Kth_Maximum_Element {

    public static void main(String[] args){
    Queue<Integer> pq = new PriorityQueue<>();

    int nums[] = {6,5,4,4,3,1};
    int k = 2;

    for(final int num:nums){
        pq.offer(num);
        while(pq.size() > k){
            pq.poll();
        }
    }
    System.out.println(pq.peek());
}
}
