import java.io.PrintWriter
import scala.io.Source

object ScalaTutorial
{
	def main(args: Array[String])
	{
		val writer = new PrintWriter("test.txt")
		writer.write("Just a random text\nSome more random text")
		writer.close()
		
		val textFromFile = Source.fromFile("test.txt", "UTF-8")
		val lineIterator = textFromFile.getLines
		
		for(line<- lineIterator)
			println(line)
		
		textFromFile.close()
	} // END OF MAIN
} 		