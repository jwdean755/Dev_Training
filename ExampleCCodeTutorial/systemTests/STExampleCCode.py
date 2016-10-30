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


def main():
    result = IVLetterAsAge()
    result += IVManyLettersAsAge()
    result += IVManyRandomCharsAsAge()
    #result += 

if __name__ == "__main__":
    main()
