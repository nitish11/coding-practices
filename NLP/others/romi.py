
import re

class DateError(Exception): pass
class InputFileError(Exception): pass

def extractDates(sentences):
	if not sentences:
		raise DateError, 'Input can not be blank'
	
	lmonths = {'January':'01','Jan.':'01','Jan':'01','February':'02','Feb.':'02','Feb':'02','March':'03','Mar.':'03','Mar':'03','April':'04','Apr.':'04','Apr':'04','May':'05','June':'06','July':'07','August':'08','Aug.':'08','Aug':'08','September':'09','Sept.':'09','Sept':'09','October':'10','Oct.':'10','Oct':'10','November':'11','Nov.':'11','Nov':'11','December':'12','Dec.':'12','Dec':'12'};
	
	cmonths = {'JANUARY':'01','JAN.':'01','JAN':'01','FEBRUARY':'02','FEB.':'02','FEB':'02','MARCH':'03','MAR.':'03','MAR':'03','APRIL':'04','APR.':'04','APR':'04','MAY':'05','JUNE':'06','JULY':'07','AUGUST':'08','AUG.':'08','AUG':'08','SEPTEMBER':'09','SEPT.':'09','SEPT':'09','OCTOBER':'10','OCT.':'10','OCT':'10','NOVEMBER':'11','NOV.':'11','NOV':'11','DECEMBER':'12','DEC.':'12','DEC':'12'};
	
	# will store all the extracted dates
	dates = list()
	for i in range(len(sentences)):
		
		# TODO : CODE HERE
				
		        simpleDatePattern = re.compile(r"(?P<Date>[0-9]{1,2})(?P<ex>(.|-|\/)*)(?P<Month>[0-9]{1,2})(?P<exe>(.|-|\/)*)(?P<Year>[0-9]{2,4})")
		        matchIter = simpleDatePattern.finditer(sentences[i])
				
		        for m in matchIter:
				tempDate = str(i) + " " + m.group('Date').zfill(2) + '/' + m.group('Month').zfill(2) + '/' + m.group('Year').zfill(4)
				dates.append(tempDate)
				

                        if dates :
               
		                morecomplexDatePattern = re.compile(r"(?P<Date>[0-9]{1,2}) of (?P<Month>(Jan|Jan.|January|Feb|Feb.|February|Mar|Mar.|March|Apr|Apr.|April|May|June|July|Aug|Aug.|August|Sept|Sept.|September|Oct|Oct.|October|Nov|Nov.|November|Dec|Dec.|December))(,*) (?P<Year>[0-9]{2,4})")
		                matchIter = morecomplexDatePattern.finditer(sentences[i])		      
		                for m in matchIter:
				        tempDate = str(i) + " " + m.group('Date').zfill(2) + '/' + lmonths[m.group('Month')] + '/' + m.group('Year').zfill(4)
				        dates.append(tempDate)
	               
                        if dates :
                       
		                morecomplexDatePattern = re.compile(r"(?P<Date>[0-9]{1,2})(?P<ex>(st|th|nd|rd)) (?P<Month>(Jan|Jan.|January|Feb|Feb.|February|Mar|Mar.|March|Apr|Apr.|April|May|June|July|Aug|Aug.|August|Sept|Sept.|September|Oct|Oct.|October|Nov|Nov.|November|Dec|Dec.|December))(,*) (?P<Year>[0-9]{2,4})")
		                matchIter = morecomplexDatePattern.finditer(sentences[i])		      
		                for m in matchIter:
				        tempDate = str(i) + " " + m.group('Date').zfill(2) + '/' + lmonths[m.group('Month')] + '/' + m.group('Year').zfill(4)
				        dates.append(tempDate)
				
		        if dates :
                       
		                morecomplexDatePattern = re.compile(r"(?P<Date>[0-9]{1,2}) of (?P<Month>(JAN|JAN.|JANUARY|FEB|FEB.|FEBRUARY|MAR|MAR.|MARCH|APR|APR.|APRIL|MAY|JUNE|JULY|AUG|AUG.|AUGUST|SEPT|SEPT.|SEPTEMBER|OCT|OCT.|OCTOBER|NOV|NOV.|NOVEMBER|DEC|DEC.|DECEMBER))(,*) (?P<Year>[0-9]{2,4})")
		                matchIter = morecomplexDatePattern.finditer(sentences[i])		      
		                for m in matchIter:
				        tempDate = str(i) + " " + m.group('Date').zfill(2) + '/' + cmonths[m.group('Month')] + '/' + m.group('Year').zfill(4)
				        dates.append(tempDate)
	               
                        if dates :
                       
		                morecomplexDatePattern = re.compile(r"(?P<Date>[0-9]{1,2})(?P<ex>(st|th|nd|rd)) (?P<Month>(JAN|JAN.|JANUARY|FEB|FEB.|FEBRUARY|MAR|MAR.|MARCH|APR|APR.|APRIL|MAY|JUNE|JULY|AUG|AUG.|AUGUST|SEPT|SEPT.|SEPTEMBER|OCT|OCT.|OCTOBER|NOV|NOV.|NOVEMBER|DEC|DEC.|DECEMBER))(,*) (?P<Year>[0-9]{2,4})")
		                matchIter = morecomplexDatePattern.finditer(sentences[i])		      
		                for m in matchIter:
				        tempDate = str(i) + " " + m.group('Date').zfill(2) + '/' + cmonths[m.group('Month')] + '/' + m.group('Year').zfill(4)
				        dates.append(tempDate)
				
		        if dates :
                       
		                morecomplexDatePattern = re.compile(r"(?P<Month>(JAN|JAN.|JANUARY|FEB|FEB.|FEBRUARY|MAR|MAR.|MARCH|APR|APR.|APRIL|MAY|JUNE|JULY|AUG|AUG.|AUGUST|SEPT|SEPT.|SEPTEMBER|OCT|OCT.|OCTOBER|NOV|NOV.|NOVEMBER|DEC|DEC.|DECEMBER)) (?P<Date>[0-9]{1,2}) (,*) (?P<Year>[0-9]{2,4})")
		                matchIter = morecomplexDatePattern.finditer(sentences[i])		      
		                for m in matchIter:
				        tempDate = str(i) + " " + m.group('Date').zfill(2) + '/' + cmonths[m.group('Month')] + '/' + m.group('Year').zfill(4)
				        dates.append(tempDate)
				
		        if dates :
                       
		                morecomplexDatePattern = re.compile(r"(?P<Month>(Jan|Jan.|January|Feb|Feb.|February|Mar|Mar.|March|Apr|Apr.|April|May|June|July|Aug|Aug.|August|Sept|Sept.|September|Oct|Oct.|October|Nov|Nov.|November|Dec|Dec.|December)) (?P<Date>[0-9]{1,2}) (,*) (?P<Year>[0-9]{2,4})")
		                matchIter = morecomplexDatePattern.finditer(sentences[i])		      
		                for m in matchIter:
				        tempDate = str(i) + " " + m.group('Date').zfill(2) + '/' + lmonths[m.group('Month')] + '/' + m.group('Year').zfill(4)
				        dates.append(tempDate)
                       
		
	return dates
			
def readMyFile(inputFileName):
	fileHandle = open(inputFileName, 'r')
	return fileHandle.readlines()
	
if __name__ == "__main__":
	dates = extractDates(readMyFile("./testold"))
	for date in dates:
		print date
	
