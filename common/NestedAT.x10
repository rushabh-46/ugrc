import x10.io.Console;

public class NestedAT 
{
    var x : Long;
    var D : PlaceGroup = Place.places();;
  
    public static def main(args:Rail[String]):void 
    {
        var temp : NestedAT = new NestedAT();

        temp.x = 1000;

        Console.OUT.println("Value before AT (x) = " + temp.x);

        temp.divide();

        Console.OUT.println("Value after AT = " + temp.x + " (expected = x)");
    }

    def divide()
    {
        at (D.next(here)) 
        {
            x /= 2;
            Console.OUT.println("Value in L1-nested AT = " + x + " (expected = x/2)");
            at (D.next(here))
            {
                x /= 2;
                Console.OUT.println("Value in L2-nested AT = " + x + " (expected = x/4)");
                at (D.next(here))
                {
                    x /= 2;
                    Console.OUT.println(here + " says hello");
                    Console.OUT.println("Value in L3-nested AT = " + x + " (expected = x/8)");
                }
                Console.OUT.println("Value in L2-nested AT = " + x + " (expected = x/4)");
            }
            Console.OUT.println("Value in L1-nested AT = " + x + " (expected = x/2)");
        }
    }
}
