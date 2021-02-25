import os

size = 6
os.system("./rush-01" + ' "' + ("{} ".format(1) * (size * size)) + '" | cat -e');
