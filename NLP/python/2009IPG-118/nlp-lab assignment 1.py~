
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
	
	lmonth = {'january':'01','february':'02','march':'03','april':'04','may':'05','june':'06','july':'07','august':'08','september':'09','october':'10','november':'11','december':'12','jan':'01','feb':'02','mar':'03','apr':'04','may':'05','jun':'06','jul':'07','aug':'08','sep':'09','oct':'10','nov':'11','dec':'12'};
	
	# will store all the extracted dates
	dates = list()
	for i in range(len(sentences)):
		
		# TODO : CODE HERE
		
		
		simpleDatePattern = re.compile(r"(?P<Date>[0-9]{1,2})(?P<ex>(.|-|\/))(?P<Month>[0-9]{1,2})(?P<sp>(.|-|\/))(?P<Year>[0-9]{2,4})")
		matchIter = simpleDatePattern.finditer(sentences[i])
		for m in matchIter:
				tempDate = str(i) + " " + m.group('Date').zfill(2) + '/' + m.group('Month').zfill(2) + '/' + m.group('Year').zfill(4)
				dates.append(tempDate)
                
  
		complexDatePattern = re.compile(r"(?P<Date>[0-9]{1,2})(?P<ex>(st|th|nd|rd)*) (?P<Month>(January|February|March|April|May|June|July|August|September|October|November|December|Jan|Feb|Mar|Apr|May|Jun|Jul|Aug|Sep|Oct|Nov|Dec))(,*) (?P<Year>[0-9]{2,4})",re.IGNORECASE)
		matchIter = complexDatePattern.finditer(sentences[i])		      
		for m in matchIter:
				tempDate = str(i) + " " + m.group('Date').zfill(2) + '/' + lmonth[m.group('Month').lower()].zfill(2) + '/' + m.group('Year').zfill(4)
				dates.append(tempDate)
	       
	       
		lcomplexDatePattern = re.compile(r"(?P<Date>[0-9]{1,2})(?P<ex>(st|th|nd|rd)*) of (?P<Month>(January|February|March|April|May|June|July|August|September|October|November|December|Jan|Feb|Mar|Apr|May|Jun|Jul|Aug|Sep|Oct|Nov|Dec))(,*) (?P<Year>[0-9]{2,4})",re.IGNORECASE)
		matchIter = lcomplexDatePattern.finditer(sentences[i])		      
		for m in matchIter:
				tempDate = str(i) + " " + m.group('Date').zfill(2) + '/' + lmonth[m.group('Month').lower()].zfill(2) + '/' + m.group('Year').zfill(4)
				dates.append(tempDate)

 
               
	return dates
			
def readMyFile(inputFileName):
	fileHandle = open(inputFileName, 'r')
	return fileHandle.readlines()
	
if __name__ == "__main__":
	dates = extractDates(readMyFile("./python/data/testinput"))
	for date in dates:
		print date
	
