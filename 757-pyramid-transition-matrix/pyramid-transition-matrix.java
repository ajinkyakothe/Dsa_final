class Solution {
    Map<String,List<Character>> map;
    Map<String,Boolean> memo;
    
    public boolean pyramidTransition(String bottom, List<String> allowed) {
     map=new HashMap<>();
     memo=new HashMap<>();

     for(String s:allowed)
     {
        String key=s.substring(0,2);
        map.putIfAbsent(key,new ArrayList<>());
        map.get(key).add(s.charAt(2));
     }

     return dfs(bottom);
    }

    boolean dfs(String bottom)
    {
        if(bottom.length()==1) return true;
        if(memo.containsKey(bottom)) return memo.get(bottom);
        boolean res=helper(bottom,0,new StringBuilder());
        memo.put(bottom,res);
        return res;
    }

   boolean helper(String bottom, int index, StringBuilder next){
     if(index == bottom.length()-1) return dfs(next.toString());
     String key=bottom.substring(index,index+2);
     if(!map.containsKey(key)) return false;
     for(char c:map.get(key)){
        next.append(c);
        if(helper(bottom,index+1,next)) return true;
        next.deleteCharAt(next.length()-1);
     }
   return false;
   }






}