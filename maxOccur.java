import java.util.Scanner; // user input

public class P5Q1 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in); //

        System.out.print("Enter a word : ");
        String str = scan.nextLine(); // receive input
        
        char maxChar = maxOccurence(str); // call func
        int count = countLetter(str, maxChar); // call func
        
        System.out.println("Character with maximum occurrence: " + maxChar); // print
        System.out.println("Occurrence count: " + count); // print
    }// end main

    public static int countLetter(String str, char ch) {
        int count = 0;
        for (int i = 0; i < str.length(); i++) { // check every letter
            if (str.charAt(i) == ch) // if same
                count++; // if same, +
        }
        return count;
    }

   public static char maxOccurence(String str) {
    int[] chCount = new int[126]; // Create an array using ascii

    for (int i = 0; i < str.length(); i++) {
        char alpha = str.charAt(i); // Get the character at the current index of the string
        chCount[alpha]++; // add the count for the corresponding character in the array
    }

    char maxChar = 0; 
    int maxCount = 0;

    for (int i = 0; i < chCount.length; i++) { // scan through the character count array
        if (chCount[i] > maxCount) { // Check current character's count is greater than the current max
            maxChar = (char) i; // Update the character with the max
            maxCount = chCount[i]; // Update the max
        }
    }

    return maxChar; 
}
}//end
