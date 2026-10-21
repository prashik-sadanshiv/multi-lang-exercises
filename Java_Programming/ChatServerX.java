import java.io.*;
import java.net.*;

class ChatServerX
{
    public static void main(String A[])
    {
        try
        {
            ServerSocket ssobj = new ServerSocket(5100);        // Server socket is opened by the 
            System.out.println("Server is Running at 5100"); 
            Socket sobj = ssobj.accept();                       // request accepted by the server which is requested by the client
            System.out.println("Client request gets accepted successfuly");

            PrintStream pobj = new PrintStream(sobj.getOutputStream());
            BufferedReader bobj1 = new BufferedReader(new InputStreamReader(sobj.getInputStream()));
            BufferedReader bobj2 = new BufferedReader(new InputStreamReader(System.in));

            System.out.println("Marvellous Server is running....");
            String str1 = null, str2 = null;

            while((str1 = bobj1.readLine()) != null)
            {
                System.out.println("Client says : "+str1);
                System.out.println("Enter message for Client : ");
                str2 = bobj2.readLine();
                pobj.println(str2);
            }
            pobj.close();
            bobj1.close();
            bobj2.close();
            sobj.close();
            ssobj.close();
        } // End of Try
        catch(Exception eobj)
        {
            System.out.println(eobj);
        }
    } // End of main
} // End of class


