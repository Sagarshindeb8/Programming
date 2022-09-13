//LB Assignment no:42, Question no:5.
//Write java program to accept directory name from user and display all names of files from that directory and size of eachfile.

import java.io.File;
import java.util.ArrayList;
 
public class A43_Q5 {
   public static void main(String[] args)
   { 
      long folderSize = findSize("E:\\SoftwareDevelopment\\LB\\Assignment\\AssignmentNo43\\Directory1");
      System.out.println("Size in byte :"+folderSize);
   } 
   public static long findSize(String path)
   { 
      long totalSize = 0;
      ArrayList<String> directory = new ArrayList<String>();
      File file = new File(path);
      
      if(file.isDirectory())
      { 
         directory.add(file.getAbsolutePath());

         while(directory.size() > 0)
         {
            String folderPath = directory.get(0);
            System.out.println("Size of this :"+folderPath);

            directory.remove(0);
            File folder = new File(folderPath);
            File[] filesInFolder = folder.listFiles();
            int noOfFiles = filesInFolder.length;
            
            for(int i = 0 ; i < noOfFiles ; i++)
            { 
               File f = filesInFolder[i];
               if(f.isDirectory())
               { 
                  directory.add(f.getAbsolutePath());
               } 
               else
               { 
                  totalSize += f.length();
                  System.out.println("Size of: "+filesInFolder[i]+" is "+f.length());
               } 
            } 
         } 
      }
      else
      { 
         totalSize = file.length();
      } 
      return totalSize;
   }
}
