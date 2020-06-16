git add .

echo 'Enter the commit message:'
read commitMessage

git commit -m "$commitMessage"

git push origin $branch

echo 'Done Done Done'


read