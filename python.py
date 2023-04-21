numberOfLines = 1
while True:
    texture = input()
    
    if (texture == "END"): break

    texture = texture + '-'
    currentChar = 'a'
    is_even = True
    count = 0
    charMarkDown = [0]*256

    for i in range(0,255):
        charMarkDown[i] = -1;

    for ch in texture:
        if (ch == currentChar):
            count+=1
        else:
            if charMarkDown[ord(currentChar)] != -1 and charMarkDown[ord(currentChar)] != count :
                is_even = False
                break
            charMarkDown[ord(currentChar)] = count
            count = 1;
            currentChar = ch


    if is_even:
        print(numberOfLines,"EVEN")
    else:
        print(numberOfLines, "NOT EVEN")
    numberOfLines += 1