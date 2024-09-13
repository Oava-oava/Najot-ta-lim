import json
file_name = "students.json"

with open(file_name, "r") as file:
    students = json.load(file)

print("Yiqilgan o'quvchilar:")
for student in students:
    if student["Yiqilgan"]:
        print(f"{student['Oquvchi']}, ball: {student['Imtihon ball']}. Izoh: {student['Izoh']}")
