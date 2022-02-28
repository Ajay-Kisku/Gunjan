import os

print(os.getcwd())
# os.chdir("project")
with open(r"projects\eyeArt.txt", "r") as file:
    content = file.read()
    print(content)