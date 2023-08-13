package Arrays.Maximum_Number;

public class Second_Maximum_Number {

    public static int seconddMax(int[] nums){
        long max1 = Long.MIN_VALUE;
        long max2 = Long.MIN_VALUE;

        for(final int num:nums){
            if(num>max1){
                max2 = max1;
                max1 = num;
            }
            else if(num>max2 && max1 > num){
                max2 = num;
            }
        }
        return max2 == Long.MIN_VALUE ? (int) max1 : (int) max2;
    }

    public static void main(String[] args){
        int[] nums = {2,2,3,5,1};

        int maxofsecond = seconddMax(nums);
        System.out.println(maxofsecond);
    }
    
}
