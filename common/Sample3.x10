/*
 *  This file is part of the X10 project (http://x10-lang.org).
 *
 *  This file is licensed to You under the Eclipse Public License (EPL);
 *  You may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *      http://www.opensource.org/licenses/eclipse-1.0.php
 *
 *  (C) Copyright IBM Corporation 2006-2016.
 */

import x10.io.Console;

/**
 * The classic hello world program, with a twist - prints a message
 * from the command line at every Place. 
 * The messages from each Place may appear in any order, but the
 * finish ensures that the last message printed will be "Goodbye"
 * <pre>
 * Typical output:
 * [dgrove@linchen samples]$ ./HelloWholeWorld 'best wishes'
 * Place(1) says hello and best wishes
 * Place(2) says hello and best wishes
 * Place(3) says hello and best wishes
 * Place(0) says hello and best wishes
 * Goodbye 
 * [dgrove@linchen samples]$
 * </pre>
 */



public class Sample3 {
    public static def main(args:Rail[String]):void {
     
    val temp = new TestClass(0, 0);
    
    at (here) async {
        temp.x = 1;
        Console.OUT.println(temp.x);
    }

    temp.y = 2;
    
    Console.OUT.println(temp.x + " and " + temp.y);
  }
}
