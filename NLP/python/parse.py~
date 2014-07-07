
"""
Stub implementation
Extract dates in a given text input and print them in canonical form DD/MM/YYYY
Execute as 'python assignment.py'
"""
__author__ = "Dinesh Kumar"
__editor__ = "Nitish Bhardwaj"

import re

class DateError(Exception): pass
class InputFileError(Exception): pass


def extractDates(sentences):
	if not sentences:
		raise DateError, 'Input can not be blank'
	
	lmonth = {'January':'01','February':'02','March':'03','April':'04','May':'05','June':'06','July':'07','August':'08','September':'09','October':'10','November':'11','December':'12'};
	
	# will store all the extracted dates
	dates = list()
	for i in range(len(sentences)):
		
		# TODO : CODE HERE
		
		
		simpleDatePattern = re.compile(r"(?P<Date>[0-9]{1,2})\/(?P<Month>[0-9]{1,2})\/(?P<Year>[0-9]{2,4})")
		matchIter = simpleDatePattern.finditer(sentences[i])
		
		
		for m in matchIter:
				tempDate = str(i) + " " + m.group('Date') + '/' + m.group('Month') + '/' + m.group('Year')
				dates.append(tempDate)

	        if  dates:

		        complexDatePattern = re.compile(r"(?P<Date>[0-9]{1,2})-(?P<Month>[0-9]{1,2})-(?P<Year>[0-9]{2,4})")
		        matchIter = complexDatePattern.finditer(sentences[i])
		        for m in matchIter:
				tempDate = str(i) + " " + m.group('Date') + '/' + m.group('Month') + '/' + m.group('Year')
				dates.append(tempDate)

                if dates :
               
		        lcomplexDatePattern = re.compile(r"(?P<Date>[0-9]{1,2}) of (?P<Month>(January|February|March|April|May|June|July|August|September|October|November|December)), (?P<Year>[0-9]{2,4})")
		        matchIter = lcomplexDatePattern.finditer(sentences[i])		      
		        for m in matchIter:
				tempDate = str(i) + " " + m.group('Date') + '/' + lmonth[m.group('Month')] + '/' + m.group('Year')
				dates.append(tempDate)
	       
                if dates :
               
		        lcomplexDatePattern = re.compile(r"(?P<Date>[0-9]{1,2})(?P<ex>(st|th|nd|rd)) (?P<Month>(January|February|March|April|May|June|July|August|September|October|November|December)), (?P<Year>[0-9]{2,4})")
		        matchIter = lcomplexDatePattern.finditer(sentences[i])		      
		        for m in matchIter:
				tempDate = str(i) + " " + m.group('Date') + '/' + lmonth[m.group('Month')] + '/' + m.group('Year')
				dates.append(tempDate)
               
		
	return dates
			
def readMyFile(inputFileName):
	fileHandle = open(inputFileName, 'r')
	return fileHandle.readlines()
	
if __name__ == "__main__":
	dates = extractDates(readMyFile("./data/testinput"))
	for date in dates:
		print date
	
