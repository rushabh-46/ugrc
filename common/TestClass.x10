import x10.regionarray.Array;
import x10.regionarray.Dist;
import x10.regionarray.DistArray;
import x10.regionarray.Region;
import x10.util.*;

public class TestClass 
{
	var nodes:Long = 5;
	var nodeSet:DistArray[Node];
	
	/** Region and Distribution specification. */
	var R: Region;	var D: Dist;
	
	public static def main(args:Rail[String]) throws Exception 
	{
		var kc:TestClass = new TestClass();
		
		if (args.size > 0) {
			kc.nodes = Long.parse(args(0));
		}

		Console.OUT.println("Total nodes = " + kc.nodes);

		kc.R = Region.make(0, (kc.nodes-1));
		kc.D = Dist.makeBlock(kc.R);

		kc.nodeSet = DistArray.make[Node](kc.D);
		kc.initialize();
		kc.selfCommittee();
 	}

 	public def selfCommittee() {
 		finish {
			for(i in D) {
				async at(D(i)) {
					var index:Long = i.operator()(0);	
					if(nodeSet(i).committee == -1)
						nodeSet(i).committee = index;
					Console.OUT.println(here + " says hello for index = " + index);
				}
			}
		}				
 	}

	def initialize() {
 		finish {
 			for(i in D) {
		 		async at(D(i)) {
			 		nodeSet(i) = new Node();
		 		}
			}
 		}
 	}

}

class Node
{
	var committee:Long = -1;
}
