import x10.io.Console;

public class SimpleAT 
{
    var x : Long;
    var D : PlaceGroup = Place.places();;
  
    public static def main(args:Rail[String]):void 
    {
        var temp : SimpleAT = new SimpleAT();

        temp.x = 100;

        Console.OUT.println("Value before AT (x) = " + temp.x);

        temp.setZeroUsingAT();

        Console.OUT.println("Value after AT = " + temp.x + " (expected = x)");
    }

    def setZeroUsingAT()
    {
        at (D.next(D.next(here))) 
        {
            x = 0;
            Console.OUT.println(here + " says hello");
            Console.OUT.println("Value inside AT = " + x + " (expected = 0)");
        }
    }
}
