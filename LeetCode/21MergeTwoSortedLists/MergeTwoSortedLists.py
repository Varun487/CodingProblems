class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        # Single pass -> Time:O(n+m), Space:O(1), n=NodesInList1, m=NodesInList2
        head = ListNode()
        curr = head
        while list1 != None and list2 != None:
            if list1.val <= list2.val:
                curr.next = list1
                list1 = list1.next
            else:
                curr.next = list2
                list2 = list2.next
            curr = curr.next
        if list1 == None:
            curr.next = list2
        else:
            curr.next = list1
        return head.next
