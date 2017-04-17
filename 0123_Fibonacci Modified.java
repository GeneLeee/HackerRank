//2017.01.23 Week7~8 , https://www.hackerrank.com/challenges/fibonacci-modified
//Can't make by C++. I failed.

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        
        int num1, num2, goal;
        Scanner sc = new Scanner(System.in);
        num1 = sc.nextInt();
        num2 = sc.nextInt();
        goal = sc.nextInt();
        
        Vector<BigInteger> bi = new Vector<BigInteger>();
        
        bi.add(new BigInteger(num1+"")); //0th
        bi.add(new BigInteger(num2+"")); //1st
        
        for(int i = 2 ; i < goal ; i++){
            bi.add(bi.elementAt(i-1).multiply(bi.elementAt(i-1)).add(bi.elementAt(i-2)));
        }
        
        System.out.println(bi.elementAt(goal-1));

        /*
        for(int i = 0 ; i < bi.size(); i++){
            System.out.println(i+"ดย "+ bi.elementAt(i));
        }
        */
    } 
}