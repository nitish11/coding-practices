------------------------
Regular Expressions
------------------------

Brief - Write and test one or more regular expressions to extract dates in a given text.

Motivation - There is an increasing number of products which process e-mails, news articles etc. to automatically extract dates and fill the calender with appropriate appointments or events. Accuracy of such a task is of utmost importance. The system may also want to preserve various relationships among the dates, e.g. from Mar 12, 2011 to April 21, 2011 (period relationship), etc. in addition to the purpose associated with the dates.


------------------------
Detailed
------------------------

Each logical line in the test input will probably contain one or more dates in the following formats (not an exhaustive list):

YYYY-MM-DD or YY-MM-DD
Aug 15, 2013
15 August, 2013
DD/MM/YY or DD/MM/YYYY
DD.MM.YYYY
5th of Feb 2013
etc.

Your primary task is to define a function extractDates() which takes a logical line as an input and prints out extracted dates in canonical format DD/MM/YYYY.  

Test data will ensure that no confusion arises between date and month, as in 09/09/2003. Typically, such confusions are handled by looking at the context. Furthermore, dates will range from 01/01/1900 to 31/12/2999.

Add your own test cases to ./python/data/testinput


Java users:
-------------

Read the input file using Scanner class, as in 

Scanner scanIt = new Scanner(new File("inputfilename"));
while(scanIt.hasNextLine()){
	String tempLine = scanIt.nextLine();
	// Process tempLine to extract dates; assuming extractDates() is the required function
	extractDates(tempLine)
}

Note: Scanner resides in java.util package. 
      Throw appropriate exceptions. 

Output:
-------------

Each line in the output should contain a line number and a date in canonical format:
1 15/08/2013
1 24/08/2013
3 12/01/2014
etc.

Python users will return a list containing dates in the above format. For testing purposes, the stub prints the same out. Java users must return an ArrayList<String> instead.

Note: If more than one dates occur in a line, relative order must be preserved.


------------------------
Submission instructions:
------------------------

> Submit your assignments with dkdineshk3@gmail.com.
> Mention 'nlp-lab assignment 1' in subject - a must for the filter to work
> Ensure that you get a canned response claiming your submission is successful.

Note:
> One can code the assignment in language of their choice.
> Direct all your queries to dkdineshk3@gmail.com with 'nlp-lab' in the subject.
