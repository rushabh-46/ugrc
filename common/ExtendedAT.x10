import x10.io.Console;

public class ExtendedAT 
{
    var x : Long;
    var D : PlaceGroup = Place.places();;
  
    public static def main(args:Rail[String]):void 
    {
        var temp : ExtendedAT = new ExtendedAT();

        temp.x = 100;

        Console.OUT.println("Value before AT (x) = " + temp.x);

        temp.double();
    }

    def double()
    {
        x = at (D.next(D.next(here))) 
        {
            x = x * 2;
            Console.OUT.println(here + " says hello");
            Console.OUT.println("Value inside AT = " + x + " (expected = 2x)");
            return x;
        };
        Console.OUT.println("Value after AT = " + x + " (expected = 2x)");
    }
}
