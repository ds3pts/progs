object ScalaTutorial
{
	def main(args: Array[String])
	{	
		// Exception handling
		def divideNums(num1 : Int, num2 : Int) = try
		{
			(num1/num2)
		}catch
		{
			case ex : java.lang.ArithmeticException => "Cant divide by zero"
		}
		
		println("3 / 0 = " + divideNums(3,0))
		
	} // END OF MAIN
}			