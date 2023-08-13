package Arrays.Maximum_Number;

public class First_Maximum_Number {
    
    public static void main(String[] args){
        int[] nums = {2,2,3,5,1,10};
        long max = Long.MIN_VALUE;
        for(final int num:nums){
            if(num > max){
                max = num;
            }
        }

        System.out.println(max);
    }
}
