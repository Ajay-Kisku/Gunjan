"""
Here is what to do -
-----------------------------------------------------------------
You will be given name of students and their marks respectively,
find out the second heighest marks and print the name of students
who have scored second heighest marks in alphabetical order.

"""

#Here we have a data set of name of students and their scores respectively
names  = ["zaaman","Zakir","Bijay","Sanjay","Monu","Sonu",]
scores = [4,4,2,6,4,9,2]

#combining them so we can work on them easily while using for loop
names_and_scores = list(zip(names,scores))

#just printing them on screen so that we can see the list
print("\nName\tScore")
print("---------------")
for name,score in names_and_scores:
    print(name, "\t", score)

#converted the list of scores into a set to remove the duplicate values
#then sorting them in ascending order
#then we know the second smallest score must be in index no. 1
second_heighest_marks = sorted(set(scores))[1]

print(f"\nSecond Heights Marks : {second_heighest_marks}")

#here we are counting the required numbers of students well this is not important here
# required_students = scores.count(second_heighest_marks)
# print(f"No. of students who have scored second heighest : {required_students}")

final_list = []   #here we will store the name of the students with second lowest marks 
print("\nList of students who have scored second heighest marks -")
for student,marks in names_and_scores:
    if marks == second_heighest_marks:
        # it is good for just first word of the name
        # it will require more improvements for names like 
        # "Mrs. This That", "Mrs. This That", "Master This That", "monu soren" and there might few others
        student =  student.strip().capitalize() #the above bullshit is about this line
        print(student,"\t",marks)
        final_list.append(student)

#just read it you will get it
print(f"\nAlphabetically arranged names who have scored second heights marks i.e \"{second_heighest_marks}\" are as follows - \n{sorted(final_list)}")
