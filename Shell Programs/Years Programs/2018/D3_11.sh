# Write a Shell script that creates a directory called "bpl" inside $home. Populate this directory with two subdirectories "bin" and "scripts".

# This program create directories in that location from where the terminal locates at that moments

ch=`pwd`        # takes the current location of the terminal locating
ch=$ch"/bpl"    # set a directory name "bpl"
mkdir $ch		# create that directory "bpl" at that location where terminal locating
cd $ch			# entered into that Location
mkdir bin		# create another directory "bin" into the "bpl" directory
mkdir scripts	# create another directory "scripts" into the "bpl" directory