
"""
Stub implementation
Extract dates in a given text input and print them in canonical form DD/MM/YYYY
Execute as 'python assignment.py'
"""
__author__ = "Dinesh Kumar"

import re

class DateError(Exception): pass
class InputFileError(Exception): pass


def extractDates(sentences):
	if not sentences:
		raise DateError, 'Input can not be blank'
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
               
		        lcomplexDatePattern = re.compile(r"(?P<Date>[0-9]{1,2}) of January, (?P<Year>[0-9]{2,4})")
		        matchIter = lcomplexDatePattern.finditer(sentences[i])		      
		        for m in matchIter:
				tempDate = str(i) + " " + m.group('Date') + '/' + '01' + '/' + m.group('Year')
				dates.append(tempDate)

	        if  dates:

		        complexDatePattern = re.compile(r"(?P<Date>[0-9]{1,2})st March, (?P<Year>[0-9]{2,4})")
		        matchIter = complexDatePattern.finditer(sentences[i])
		        for m in matchIter:
				tempDate = str(i) + " " + m.group('Date') + '/' + '03' + '/' + m.group('Year')
				dates.append(tempDate)

	        if  dates:

		        complexDatePattern = re.compile(r"(?P<Date>[0-9]{1,2})rd March, (?P<Year>[0-9]{2,4})")
		        matchIter = complexDatePattern.finditer(sentences[i])
		        for m in matchIter:
				tempDate = str(i) + " " + m.group('Date') + '/' + '03' + '/' + m.group('Year')
				dates.append(tempDate)

               
		
		
	return dates
			
def readMyFile(inputFileName):
	fileHandle = open(inputFileName, 'r')
	return fileHandle.readlines()
	
if __name__ == "__main__":
	dates = extractDates(readMyFile("./data/testinput"))
	for date in dates:
		print date
	
