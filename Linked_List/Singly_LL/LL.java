package Linked_List.Singly_LL;

 public class LL {

    private Node head;
    private Node tail;

    private int size;

    public LL(){
        this.size = 0;
    }
    
     private class Node {
        int value;
        Node next;

        Node(int value){
            this.value = value;
        }

        Node(int value, Node next){
            this.value = value;
            this.next = next;
        }
    }

    // Insertion
    public void insertFirst(int val){
        Node newNode = new Node(val);
        newNode.next = head;
        head = newNode;
        if(tail == null){
            tail = head;
        }
        size++;
    }

    public void insertLast(int val){
        if(tail == null){
            insertFirst(val);
            return;
        }
        Node node = new Node(val);
        tail.next = node;
        tail = node;
        size++;
    }


    public void insertIndex(int val , int index){
        if(index == 0){
            insertFirst(val);
            return;
        }
        if(index == size){
            insertLast(val);
            return;
        }
        Node temp = head;
        for(int i = 1;i<index;i++){
            temp = temp.next;  
        }
        Node node = new Node(val,temp.next);
        temp.next = node;
        size++;
    }

    // Deletion

    public int deleteFirst(){
        int val = head.value;
        head = head.next;
        if(head == null){
            tail = null;
        }
        size--;
        return val;
    }


    public int deleteLast(){
        if(size <= 1){
            return deleteFirst();
        }
        Node secondLast = get(size - 2);
        int val = tail.value;
        tail = secondLast;
        tail.next = null;

        return val;
    }

    public int deleteIndex(int index){
        if(index == 0){
            return deleteFirst();
        }
        if(index == size-1){
            return deleteLast();
        }

        Node prev = get(index-1);
        int val = prev.next.value;
        prev.next = prev.next.next;

        return val;
    }

    // Find

    public Node find(int val){
        Node node = head;
        while(node != null){
            if(node.value == val){
                return node;
            }
            node = node.next;
        }
        return null;
    }
    
    public Node get(int index){
        Node temp = head;
        for(int i = 0;i<index;i++){
            temp = temp.next;
        }
        return temp;
    }

    public void display(){
        Node temp = head;
        while(temp != null){
            System.out.print(temp.value+"->");
            temp = temp.next;
        }
        System.out.println("END");
    }
}

