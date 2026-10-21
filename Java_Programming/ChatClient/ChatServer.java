import java.io.*;
import java.net.*;


class ChatServer {

    int Addition(int iNo1, int iNo2)
    {
        return iNo1 + iNo2;
    }
    int Substraction(int iNo1, int iNo2)
    {
        return iNo1 - iNo2;
    }
    int Multiplication(int iNo1, int iNo2)
    {
        return iNo1 * iNo2;
    }
    int Division(int iNo1, int iNo2)
    {
        return iNo1 / iNo2;
    }

    public static void main(String A[])
    {
        try
        {
            ServerSocket ssobj = new ServerSocket(5100);
            System.out.println("Server is Running at 5100");
            Socket sobj = ssobj.accept();
            System.out.println("Client request gets accepted successfuly");

            PrintStream pobj = new PrintStream(sobj.getOutputStream());
            BufferedReader bobj1 = new BufferedReader(new InputStreamReader(sobj.getInputStream()));
            BufferedReader bobj2 = new BufferedReader(new InputStreamReader(System.in));

            System.out.println("Marvellous Server is running...");
            String str1 = null, str2 = null;
            int iValue1 = 0, iValue2 = 0;
            while((str1 = bobj1.readLine()) != null)
            {
                if((str1 = bobj1.readLine()).equals("addition"))
                {
                    System.out.println("Enter the Addition Client: ");
                    str2 = bobj2.readLine();
                    pobj.println(str2);
                }
                System.out.println("Client says: "+str1);
                System.out.println("Enter the message for Client: ");
                str2 = bobj2.readLine();
                pobj.println(str2);                  
            }
            pobj.close();
            bobj1.close();
            bobj2.close();
            sobj.close();
            ssobj.close();
        }
        catch(Exception eobj)
        {
            System.out.println(eobj);
        }
    } // End of main
}// End of class



            //     if((str1 = bobj1.readLine()) == ("addition"))
            //     {
            //         while(!(str1 = ))
            //         pobj.println(iValue1);
            //         pobj.println("")
                // }