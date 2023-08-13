package Arrays.Maximum_Number;

public class Third_Maximum_Number {
    public static int thirdMax(int[] nums){
    long max1 = Long.MIN_VALUE;
    long max2 = Long.MIN_VALUE;
    long max3 = Long.MIN_VALUE;

    for(final int num:nums){
        if(num > max1){
            max3 = max2;
            max2 = max1;
            max1 = num;
        }
        else if(num > max2 && max1 > num ){
            max3 = max2;
            max2 = num;
        }
        else if(num > max3 && max2 > num){
            max3 = num;
        }
    }
    return max3 == Long.MIN_VALUE ? (int) max1 : (int) max3;
}
    public static void main(String[] args){
        int[] nums = {2,2,3,1};

        int maxofthird = thirdMax(nums);
        System.out.println(maxofthird);
    }

}
