from subprocess import Popen, PIPE



def RunExecutable(executable):
    executable = [executable]
    proc = Popen(executable, stdin=PIPE, stdout=PIPE, bufsize=1, shell=True)
    return proc

def IVLetterAsAge():
    proc = RunExecutable(r'../build/ExampleCCodeTutorial')
    exeOut,exeErr = proc.communicate('d\n1\n1\n')
    print exeOut
    if 'error' in exeOut:
        print 'IVLetterAsAge SUCCESS'
        return 0
    else:
        print 'IVLetterAsAge FAILURE'
        return 1

def IVManyLettersAsAge():
    proc = RunExecutable(r'../build/ExampleCCodeTutorial')
    exeOut,exeErr = proc.communicate('asdfasdfdfvydrcusbdfkcjybakruycbkajydbcadfbhadfbvkjbadhkfjbcjhad\n1\n1\n')
    print exeOut
    if 'error' in exeOut:
        print 'IVManyLettersAsAge SUCCESS'
        return 0
    else:
        print 'IVManyLettersAsAge FAILURE'
        return 1

def IVManyRandomCharsAsAge():
    proc = RunExecutable(r'../build/ExampleCCodeTutorial')
    exeOut,exeErr = proc.communicate('!@#$%^&**&^%$+_)(*&^}{":><]\';,.<`~\n1\n1\n')
    print exeOut
    if 'error' in exeOut:
        print 'IVManyRandomCharsAsAge SUCCESS'
        return 0
    else:
        print 'IVManyRandomCharsAsAge FAILURE'
        return 1


def IVLowerMenu0():
    proc = RunExecutable(r'../build/ExampleCCodeTutorial')
    exeOut,exeErr = proc.communicate('3\n0\n1\n1\n1\n')
    print exeOut
    if 'error' in exeOut:
        print 'IVLowerMenu0 SUCCESS'
        return 0
    else:
        print 'IVLowerMenu0 FAILURE'
        return 1

def IVUpperMenu6():
    proc = RunExecutable(r'../build/ExampleCCodeTutorial')
    exeOut,exeErr = proc.communicate('3\n6\n1\n1\n1\n')
    print exeOut
    if 'error' in exeOut:
        print 'IVUpperMenu6 SUCCESS'
        return 0
    else:
        print 'IVUpperMenu6 FAILURE'
        return 1

def VLowerMenu1():
    proc = RunExecutable(r'../build/ExampleCCodeTutorial')
    exeOut,exeErr = proc.communicate('3\n1\n1\n1\n')
    print exeOut
    if 'error' not in exeOut:
        print 'VLowerMenu1 SUCCESS'
        return 0
    else:
        print 'VLowerMenu1 FAILURE'
        return 1

def VUpperMenu5():
    proc = RunExecutable(r'../build/ExampleCCodeTutorial')
    exeOut,exeErr = proc.communicate('3\n5\n1\n1\n1\n')
    print exeOut
    if 'error' not in exeOut:
        print 'VUpperMenu5 SUCCESS'
        return 0
    else:
        print 'VUpperMenu5 FAILURE'
        return 1

def main():
    result = IVLetterAsAge()
    result += IVManyLettersAsAge()
    result += IVManyRandomCharsAsAge()
    result += IVLowerMenu0()
    result += IVUpperMenu6()
    result += VLowerMenu1()
    result += VUpperMenu5()
    #result += VInputAge2()
    #result += VInputAge13()
    #result += VInputAge12()
    #result += VInputAge22()
    #result += VInputAge23()
    #result += VInputAge4And3Candy()
    #result += VInputAge5And5Candy()
    #result += VInputAge10And10Candy()
    #result += VInputAge10And9Candy()
    if 0 == result:
        print '\nAll System Tests PASSED\n'
    else:
        print '\n' + result + ' System Tests FAILED\n'

if __name__ == "__main__":
    main()
