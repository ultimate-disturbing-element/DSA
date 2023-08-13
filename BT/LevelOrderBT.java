package BT;

import java.util.*;

public class LevelOrderBT {
    
    static class Node{
        int data;
        Node left;
        Node right;

        Node(int data){
            this.data = data;
            this.left = null;
            this.right = null;
        }
    }

    static class BinaryTree{
        static int idx = -1;
        public static Node buildNode(int nodes[]){
            idx++;
            if(nodes[idx] == -1) return null;

            Node newNode = new Node(nodes[idx]);
            newNode.left = buildNode(nodes);
            newNode.right = buildNode(nodes);

            return newNode;
        }
    }

    public static void levelOrder(Node root){
        Queue<Node> q = new LinkedList<>();
        q.add(root);
        q.add(null);

        while(!q.isEmpty()){
            Node curreNode = q.remove();
            if(curreNode == null){
                System.out.println();
                if(q.isEmpty()){
                    break;
                }
                else{
                    q.add(null);
                }

            }else{
                System.out.print(curreNode.data+" ");
                if(curreNode.left != null){
                    q.add(curreNode.left);
                }
                if(curreNode.right != null){
                    q.add(curreNode.right);
                }
            }
        }

    }

    public static void main(String[] args){
        int nodes[] = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};

        BinaryTree tree = new BinaryTree();
        Node root = tree.buildNode(nodes);

        levelOrder(root);

    }

}
