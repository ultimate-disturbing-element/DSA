package Linked_List.Singly_LL;

public class Singly_Linked_List {
    
    public static void main(String[] args) {
        LL ll = new LL();
        ll.insertFirst(11);
        ll.insertFirst(12);
        ll.insertFirst(1);
        ll.insertLast(14);
        ll.insertIndex(13,3);

        ll.display();

        ll.deleteFirst();
        ll.deleteLast();
        ll.deleteIndex(2);

    }

}
