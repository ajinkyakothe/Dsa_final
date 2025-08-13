/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode[] splitListToParts(ListNode root, int k) {
        
    //   Approach this the question where thinking plays a vital role...
    //   It's obvious that if the length of the linked list is greater than than k then there will be some nodes/parts being null.
  
    // creating the array for the returing purpose
     ListNode[] parts=new ListNode[k];

     //calculate the length of the linked list...
     int len=0;
     ListNode node=root;
     while(node != null)
     {
        len++;
        node=node.next;
     }

     //cal min size and the extra nodes
     int n=len / k , r=len % k;

     node=root;
     ListNode prev=null;

     //Loop through each part
     for(int i=0; node != null && i<k ; i++ ,r--)
     {
        parts[i]=node;

        for(int j=0;j<n+(r>0 ? 1:0);j++)
        {
            prev=node;
            node=node.next;
        }
           // Disconnect the current part from the rest of the list by setting prev.next to null.
            if (prev != null) {
                prev.next = null;
            }
     }
  

       return parts;

    }
}