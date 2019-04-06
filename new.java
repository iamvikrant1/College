package com.company;

import com.sun.org.apache.xpath.internal.SourceTree;

import java.util.Scanner;
import java.util.SortedMap;
import java.util.concurrent.BrokenBarrierException;

public class Main {

    public static void main(String[] args) {
	// write your code here

        int[] persons= new int[4];
        String[] name={"ahmed","mohamed","mostafa","adel"};
        int invalid=0;
        String vote;

        Scanner s=new Scanner(System.in);

        while (true){
            System.out.println("Enter vote :");
            vote=s.next();

            if (vote.equals("ahmed")) persons[0]++;
            else if (vote.equals("mohamed")) persons[1]++;
            else if (vote.equals("mostafa")) persons[2]++;
            else if (vote.equals("adel")) persons[3]++;
            else if (vote.equals("close")) break;
            else {
                invalid++;
            }

        } //End While.

        for (int i = 0; i <4 ; i++) {

            System.out.println(name[i]+" "+persons[i]);

        }

        int max=persons[0];
        int index=0;

        for (int i = 0; i <4 ; i++) {
            if (persons[i]>max){
                max=persons[i];
                index=i;
            }

        }

        int count=0;

        for (int i = 0; i <4 ; i++) {
            if (max==persons[i]) count++;
        }

        if (count==1){

            System.out.println("the winner is " +name[index]+ " with vote= "+max);

        }

    }
}
