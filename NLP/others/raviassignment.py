
"""
Stub implementation
Extract dates in a given text input and print them in canonical form DD/MM/YYYY
Execute as 'python assignment.py'
"""
__author__ = "Ravikiran Sahajan"


import re

class DateError(Exception): pass
class InputFileError(Exception): pass


def extractDates(sentences):
	if not sentences:
		raise DateError, 'Input can not be blank'
	
	monthindx = {'January':'01','February':'02','March':'03','April':'04','May':'05','June':'06','July':'07','August':'08','September':'09','October':'10','November':'11','December':'12','Jan':'01','Feb':'02','Mar':'03','Apr':'04','May':'05','Jun':'06','Jul':'07','Aug':'08','Sep':'09','Oct':'10','Nov':'11','Dec':'12'}; 
	
	
	# will store all the extracted dates
	dates = list()
	for i in range(len(sentences)):
		
		# TODO : CODE HERE
		
		
	       simpleDatePattern = re.compile(r"(?P<Date>[0-9]{1,2})(.|-|\/)(?P<Month>[0-9]{1,2})(.|-|\/)(?P<Year>[0-9]{2,4})")
               matchIter = simpleDatePattern.finditer(sentences[i])
               
               
               for m in matchIter:
                tempDate = str(i) + " " + m.group('Date') + '/' + m.group('Month') + '/' + m.group('Year')
                dates.append(tempDate)

 
         
               amonthDatePattern = re.compile(r"(?P<Date>[0-9]{1,2}) (?P<of>(o|f){0,2})(?P<Month>(January|February|March|April|May|June|July|August|September|October|November|December|Jan|Feb|Mar|Apr|May|Jun|Jul|Aug|Sep|Oct|Nov|Dec))(,*) (?P<Year>[0-9]{2,4})")
               matchIter = amonthDatePattern.finditer(sentences[i])                      
               for m in matchIter:
                tempDate = str(i) + " " + m.group('Date') + '/' + monthindx[m.group('Month')] + '/' + m.group('Year')
                dates.append(tempDate)
 
               
         
               extraDatePattern = re.compile(r"(?P<Date>[0-9]{1,2})(?P<ex>(st|th|nd|rd)*) (?P<of>(o|f){0,2}) (?P<Month>(January|February|March|April|May|June|July|August|September|October|November|December|Jan|Feb|Mar|Apr|May|Jun|Jul|Aug|Sep|Oct|Nov|Dec))(,*) (?P<Year>[0-9]{2,4})")
               matchIter = extraDatePattern.finditer(sentences[i])                      
               for m in matchIter:
                tempDate = str(i) + " " + m.group('Date') + '/' + monthindx[m.group('Month')] + '/' + m.group('Year')
                dates.append(tempDate)
               
		
	return dates
			
def readMyFile(inputFileName):
	fileHandle = open(inputFileName, 'r')
	return fileHandle.readlines()
	
if __name__ == "__main__":
	dates = extractDates(readMyFile("./testold"))
	for date in dates:
		print date
	
