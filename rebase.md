Git Rebase Standard vs Git Rebase Interactive
Git rebase interactive is when git rebase accepts an -- i argument. This stands for "Interactive." Without any arguments, the command runs in standard mode. In both cases, let's assume we have created a separate feature branch.

# Create a feature branch based off of main 
git checkout -b feature_branch main
# Edit files 
git commit -a -m "Adds new feature" 
Git rebase in standard mode will automatically take the commits in your current working branch and apply them to the head of the passed branch.

git rebase <base>
This automatically rebases the current branch onto , which can be any kind of commit reference (for example an ID, a branch name, a tag, or a relative reference to HEAD).
