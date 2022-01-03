import x10.io.Console;

public class PaperEG {

    public class A {
        var r1 : Long;
        var r2 : Long;
    }

    public class B extends A 
    {
        var r3 : A;
    }

    public def f() : void
    {
        val a : A = new A();
        a.r1 = 1;

        val p = here;

        at(p)
        {
            a.r2 = 5;
            val x : Long = a.r2;
            val b : B = new B();
            b.r1 = 10;

            val D = Place.places();

            for (i in D)
            {
                b.r3 = a;

                at(i)
                {
                    val y : Long = b.r1;
                    val c : A = a;
                    c.r1 = 100;
                    val z : Long = a.r1;
                }

            }

            at(D.next(p))
            {
                val xx : Long = a.r1;
                val yy : Long = a.r2;
            }

        }

    }

    public static def main(args:Rail[String]):void 
    {
        finish for (p in Place.places()) {
     	    at (here) async {
                Console.OUT.println(here+" says hello and "+args(0));
            }
        }
        
        var temp : PaperEG = new PaperEG();
        temp.f();

        Console.OUT.println("Goodbye");
    }
}


