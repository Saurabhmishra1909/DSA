import java.io.*;
import java.util.*;











Stack<Character> st=new stack<>();
for(int i=0;i<exp.length();i++){
    char ch=exp.charAt(i);
    if(ch!= ')' && ! Character.isAlphabetic(ch))
    print(ch+" ");
    else if(ch== ')'){
        while((ch=st.peek()))
    }
}