class Solution {
    public int minimumDistance(int[] nums) {
        Map<Integer, int[]> mp = new HashMap<>();
        int mini = Integer.MAX_VALUE;

        for (int i = 0; i < nums.length; i++) {

        if(!mp.containsKey(nums[i])){
            mp.put(nums[i],new int[]{-1,i});
        }
        else
        {
            int [] pair=mp.get(nums[i]);
            int prev=pair[0];
            int last=pair[1];

            if(prev != -1)
            {
                int a=prev,b=last,c=i;
                int diff=2*(c-a);
                 mini = Math.min(mini, diff);
            }

                pair[0] = last;
                pair[1] = i;
        }


        }
        return mini == Integer.MAX_VALUE ? -1 : mini;
    }
}