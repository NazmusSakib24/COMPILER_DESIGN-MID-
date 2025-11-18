f = open("P-1.txt", "r")
lines = f.readlines()  
f.close()

print("\n")
print("Full Contents of the file:\n")
for line in lines:
    print(line, end="")  

print("\nToken Analysis\n")
line_number = 1

for line in lines:
    line = line.strip() + " "
    print("\n")
    print("Line", line_number, ":", line.strip())
    print("Description:")
   

    word = ""
    for ch in line:  
        if ch in " +-*/=<>();{}#\"":
            if word:
                if word in ["int","return","using","namespace","cout","cin","main","iostream","std","include"]:
                    print(word, "-> Keyword")
                elif word.isdigit():
                    print(word, "-> Number")
                else:
                    print(word, "-> Identifier")
                word = ""
            if ch in "+-*/=<>":
                print(ch, "-> Operator")
            elif ch in "();{}#\"":
                print(ch, "-> Punctuation")
        else:
            word += ch

    line_number += 1
