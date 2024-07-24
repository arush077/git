 
git is used to create checkpoints / Tracking
github is just a cloud that stores repos


           add                  commit         push
  change ---------->   stage ----------> repo ---------->github 


 git --version //to check if git is installed or not
 git status //matlab is the 




 //!How to track
 go into the folder and then use init command
 using git init (this runs only once in every project) (//!because it means u are initializing a repository)
 so 

 cd folder
 git init

//git init likne se you get a .git file and now abhi if you run git status to u know this is gettin tracked



 ls = shows a list of all
 ls -la = shows also the hidden files ( aka .git file )
 pwd = present working dir
 touch text1.txt
 mkdir folder1
 cd      //bas itna like pe you come back to home directory of mac
 cat //its used to print a file
 how to open a folder in vscode === go into the folder and then press code . simply

//how to get pathname in finder 
double tap on file and press option and copy path
then you can directly cd over there

//! here git status == "untracked files pls add them"

 //adding

 git add . (all files get added)
 git add abc.txt (just one file you want to add)


//! here do git status to see status of the stage u can also unstage it over here : "On Branch Master, changes to be commited"

 //commiting

 git commit -m "put a message here"


 //! only to push the commits into github
 git remote add origin 'your_url_name' //url mil jaega from the empty repo that you initialized
 git push -u origin master


 //!how to make a user
 git config --global user.email "put email here"
 cat .gitconfig   //it will print out all the username and stuff
 
 //! no vim and vscode 
 git config --global core.editor "code --wait"





 //! how to protect sensitive info
 add paths of that into .gitignore file
 make a new .gitignore file
 write the filename inside it
 now even when you do git add
 files in the gitignore wont be tracked




 //! HASH / BRANCHING

 //every commit has a hash value


 commit1      commit2      commit3     commit4
 hash= 1      hash=2       hash=3      hash=4                       //hash is equivalent to the id of the commit
 parent=Null  parent=1     parent=2    parent=3


