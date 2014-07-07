import re

class DateError(Exception): pass
class InputFileError(Exception): pass


def extractDates(sentences):
	if not sentences:
		raise DateError, 'Input can not be blank'
	
	lmonth = {'january':'01','jan':'01','jan.':'01','february':'02','feb':'02','feb.':'02','march':'03','mar':'03','mar.':'03','april':'04','apr':'04','apr.':'04','may':'05','june':'06','jun':'06','jun.':'06','july':'07','jul':'07','jul.':'07','august':'08','aug':'08','aug.':'08','september':'09','sept':'09','sept.':'09','october':'10','oct':'10','oct.':'10','november':'11','nov':'11','nov.':'11','december':'12','dec':'12','dec.':'12'};
	
	# will store all the extracted dates
	dates = list()
	for i in range(len(sentences)):
		
		# TODO : CODE HERE
		
		
		simpleDatePattern = re.compile(r"(?P<Date>[0-9]{1,2})(?P<ex>(.|-|\/))(?P<Month>[0-9]{1,2})(?P<exe>(.|-|\/))(?P<Year>[0-9]{2,4})")
		matchIter = simpleDatePattern.finditer(sentences[i])

		
		for m in matchIter:
			tempDate = str(i+1) + " " + m.group('Date').zfill(2) + '/' + m.group('Month').zfill(2) + '/' + m.group('Year').zfill(4)
			dates.append(tempDate)

               
		lcomplexDatePattern = re.compile(r"(?P<Date>[0-9]{1,2}) of (?P<Month>(january|february|march|april|may|june|july|august|september|october|november|december|jan|feb|mar|apr|may|jun|jul|aug|sept|oct|nov|dec|jan.|feb.|mar.|apr.|may.|jun.|jul.|aug.|sept.|oct.|nov.|dec.))(,*) (?P<Year>[0-9]{2,4})")
                matchIter = lcomplexDatePattern.finditer(sentences[i].lower())                
               	for m in matchIter:
                	tempDate = str(i+1) + " " + m.group('Date').zfill(2) + '/' + lmonth[m.group('Month')] + '/' + m.group('Year').zfill(4)
                        dates.append(tempDate)
	       
               
		lcomplexDatePattern = re.compile(r"(?P<Date>[0-9]{1,2})(?P<ex>(st|th|nd|rd)*) (?P<Month>(january|february|march|april|may|june|july|august|september|october|november|december|jan|feb|mar|apr|may|jun|jul|aug|sept|oct|nov|dec|jan.|feb.|mar.|apr.|may.|jun.|jul.|aug.|sept.|oct.|nov.|dec.))(,*) (?P<Year>[0-9]{2,4})")
        	matchIter = lcomplexDatePattern.finditer(sentences[i].lower())                
                for m in matchIter:
                	tempDate = str(i+1) + " " + m.group('Date').zfill(2) + '/' + lmonth[m.group('Month')] + '/' + m.group('Year').zfill(4)
                        dates.append(tempDate)

		
		lcomplexDatePattern = re.compile(r"(?P<Date>[0-9]{1,2})(?P<ex>(st|th|nd|rd)) of (?P<Month>(january|february|march|april|may|june|july|august|september|october|november|december|jan|feb|mar|apr|may|jun|jul|aug|sept|oct|nov|dec|jan.|feb.|mar.|apr.|may.|jun.|jul.|aug.|sept.|oct.|nov.|dec.))(,*) (?P<Year>[0-9]{2,4})")
        	matchIter = lcomplexDatePattern.finditer(sentences[i])                
                for m in matchIter:
                	tempDate = str(i+1) + " " + m.group('Date').zfill(2) + '/' + lmonth[m.group('Month')] + '/' + m.group('Year').zfill(4)
                        dates.append(tempDate)
		
		lcomplexDatePattern = re.compile(r"(?P<Month>(january|february|march|april|may|june|july|august|september|october|november|december|jan|feb|mar|apr|may|jun|jul|aug|sept|oct|nov|dec|jan.|feb.|mar.|apr.|may.|jun.|jul.|aug.|sept.|oct.|nov.|dec.)) (?P<Date>[0-9]{1,2})(?P<ex>(st|th|nd|rd))(,*) (?P<Year>[0-9]{2,4})")
        	matchIter = lcomplexDatePattern.finditer(sentences[i].lower())                
                for m in matchIter:
                	tempDate = str(i+1) + " " + m.group('Date')/zfill(2) + '/' + lmonth[m.group('Month')] + '/' + m.group('Year').zfill(4)
                        dates.append(tempDate)

                 
		lcomplexDatePattern = re.compile(r"(?P<Month>(january|february|march|april|may|june|july|august|september|october|november|december|jan|feb|mar|apr|may|jun|jul|aug|sept|oct|nov|dec|jan.|feb.|mar.|apr.|may.|jun.|jul.|aug.|sept.|oct.|nov.|dec.)) (?P<Date>[0-9]{1,2})(,*) (?P<Year>[0-9]{2,4})")
        	matchIter = lcomplexDatePattern.finditer(sentences[i].lower())                
                for m in matchIter:
                	tempDate = str(i+1) + " " + m.group('Date').zfill(2) + '/' + lmonth[m.group('Month')] + '/' + m.group('Year').zfill(4)
                        dates.append(tempDate)
                
		
	return dates
			
def readMyFile(inputFileName):
	fileHandle = open(inputFileName, 'r')
	return fileHandle.readlines()
	
if __name__ == "__main__":
	dates = extractDates(readMyFile("./testold"))
	for date in dates:
		print date
