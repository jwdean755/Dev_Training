import random


CMFDevs = 53724
NCWDGDevs = 47329
NCWDGNonDevs = 29415

def FillLists():
    #Eventually read in a file here
    # and parse to fill these arrays
    dDevs = {"Bennett": CMFDevs, "Gamboa":CMFDevs, "CWE1":CMFDevs, "Davis":NCWDGDevs, "Lenox":NCWDGDevs, "Beegle":NCWDGDevs, "Hummel":NCWDGDevs, "Blancher":NCWDGDevs, "Pak":NCWDGDevs, "Clark":NCWDGDevs, "CWE2":NCWDGDevs, "Helwig":NCWDGNonDevs, "Chamberlain":NCWDGNonDevs, "Dixon":NCWDGNonDevs, "Nance":NCWDGNonDevs, "Mugs":NCWDGNonDevs}

    return dDevs



def RandomlyFillDevTeams(dDevs):
    dTeamA = {}
    dTeamB = {}
    dCMFTeam1 = {}
    shuffleddDevs = {}
    count = 0
    lListOfTeams = [dTeamA,dTeamB,dCMFTeam1]
    dDevsKeys = dDevs.keys()
    random.shuffle(dDevsKeys)
    for eachDictKey in dDevsKeys:
        if 0 == count:
            dTeamA.update({eachDictKey: dDevs[eachDictKey]})
            count += 1
        elif 1 == count:
            dTeamB.update({eachDictKey: dDevs[eachDictKey]})
            count += 1
        else:
            dCMFTeam1.update({eachDictKey: dDevs[eachDictKey]})
            count = 0
    return lListOfTeams

def EnsureEvenSteven(lListOfTeams,dDevs):
    tempCMFDevs = 0
    tempNCWDGDevs = 0
    tempNCWDGNonDevs = 0
    sucOrFail = 1
    for eachDictValue in dDevs.viewvalues():
        if eachDictValue == CMFDevs:
            tempCMFDevs += 1
        elif eachDictValue == NCWDGDevs:
            tempNCWDGDevs += 1
        else:
            tempNCWDGDevs += 1
    for eachDict in lListOfTeams:
        partCMFDevs = tempCMFDevs/len(lListOfTeams)
        partNCWDGDevs = tempNCWDGDevs/len(lListOfTeams)
        partNCWDGNonDevs = tempNCWDGNonDevs/len(lListOfTeams)
        for eachDictValue in eachDict.viewvalues():
            if eachDictValue == CMFDevs:
                partCMFDevs -= 1
            elif eachDictValue == NCWDGDevs:
                partNCWDGDevs -= 1
            else:
                partNCWDGNonDevs -= 1
#        print str(partCMFDevs) + ' ' + str(partNCWDGDevs) + ' ' + str(partNCWDGNonDevs)
        if all(x >= -2 and x <= 2 for x in (partCMFDevs,partNCWDGDevs,partNCWDGNonDevs)):
            if all(x >= -1 and x <= 1 for x in (partCMFDevs,partNCWDGDevs)) or all(x >= -1 and x <= 1 for x in (partNCWDGDevs,partNCWDGNonDevs)) or all(x >= -1 and x <= 1 for x in (partCMFDevs,partNCWDGNonDevs)):
                sucOrFail += 1
    if 4 == sucOrFail:
        sucOrFail = 0
    else:
        sucOrFail = 1
    return sucOrFail
def main():
    dDevs = FillLists()
    sucOrFail = 1
    count = 0
    while 1 == sucOrFail:
        lListOfTeams = RandomlyFillDevTeams(dDevs)
        sucOrFail = EnsureEvenSteven(lListOfTeams, dDevs)
    random.shuffle(lListOfTeams)
    for eachDict in lListOfTeams:
        print eachDict
        if 0 == count:
            finalTeamComp = 'NCWDG Team Alpha Trainees: '
            count += 1
        elif 1 == count:
            finalTeamComp += '\n\nNCWDG Team Bravo Trainees: '
            count +=1
        else:
            finalTeamComp += '\n\nCMF Team One Trainees:'
            count = 0
        for eachKey in eachDict.keys():
            finalTeamComp += ' ' + eachKey
    print finalTeamComp 
if __name__ == "__main__":
        main()

