import x10.io.Console;

public class VerySimpleAT {

    var x : Long;
    var D : PlaceGroup = Place.places();;
  
    public static def main(args:Rail[String]):void 
    {
        var temp : VerySimpleAT = new VerySimpleAT();

        temp.x = 100;
        temp.setZero();
        Console.OUT.println("Value after = " + temp.x);
    }

    def setZero()
    {
        {
            x = 0;
            Console.OUT.println(here + " says hello");
            Console.OUT.println("Value inside = " + x);
        }
    }
}
