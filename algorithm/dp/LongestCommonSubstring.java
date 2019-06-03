package project.algorithm.dp;

public class LongestCommonSubstring {

    public static int LCSubStr(char[] X, char[] Y, int m, int n) {
        int[][] suff = new int[m][n];
        int result = 0;

        for (int i = 0;i< m;i++){
            suff[i][0] = 0;
        }

        for (int i = 0;i< n;i++){
            suff[0][i] = 0;
        }

        for (int i = 1;i< m;i++){
            for(int j = 1;j< n;j++){
                if(X[i] == Y[j]){
                    suff[i][j] = suff[i-1][j-1] + 1;
                    result = Integer.max(result, suff[i][j]);
                 }
                else {
                    suff[i][j] = 0;
                }
            }
        }

        return result;
    }


    public static void main(String[] args) {
        //take input

        String X = "GeeksforGeeks";
        String Y = "GeeksQuiz";

        int m = X.length();
        int n = Y.length();

        //call suffix function

        System.out.println("LCS of given string is "+ LCSubStr(X.toCharArray(), Y.toCharArray(), m, n));
    }
}
