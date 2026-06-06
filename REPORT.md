# Отчет по лабораторной работе №2
## Студент: Артеменко Арина Иу8-22

## Часть 1: Основная работа с Git

### Выполненные команды и их вывод:

```git config --global user.name "gest475"
git config --global user.email "maryuye@mail.ru"
mkdir -p workspace/lab02 && cd workspace/lab02
git init
```

```git status```
*Вывод:*
On branch master
No commits yet
nothing to commit (create/copy files and use "git add" to track)

```git add README.md```

```git commit -m "Initial commit: add README.md"```
*Вывод:*
[master (root-commit) e535dac] Initial commit: add README.md
1 file changed, 1 insertion(+)
create mode 100644 README.md

```git log --oneline```
*Вывод:*
e535dac (HEAD -> master) Initial commit: add README.md

## Часть 2: Создание репозитория на GitHub


```curl -H "Authorization: token ***" https://api.github.com/user/repos -d '{"name":"lab002","private":fa>
git remote add origin https://github.com/gest475/lab002.git
```

```git remote -v```
*Вывод:*
origin  https://github.com/gest475/lab002.git (fetch)
origin  https://github.com/gest475/lab002.git (push)

```git branch -M main```
```git push -u origin main```
*Вывод:*
Enumerating objects: 3, done.
Counting objects: 100% (3/3), done.
Writing objects: 100% (3/3), 245 bytes | 245.00 KiB/s, done.
Total 3 (delta 0), reused 0 (delta 0)
To https://github.com/gest475/lab002.git
 * [new branch]    main -> main
branch 'main' set up to track 'origin/main'.

## Часть 3: Добавление .gitignore и исходного кода

```cat > .gitignore <<EOF
*build*/
*install*/
*.swp
.idea/
EOF
git add .gitignore
```
`git commit -m "Add .gitignore"`
*Вывод:*
[main b4ea0b1] Add .gitignore
1 file changed, 4 insertions(+)
create mode 100644 .gitignore
```mkdir sources include examples
cat > sources/print.cpp <<EOF
cat > include/print.hpp <<EOF
cat > examples/example1.cpp <<EOF
cat > examples/example2.cpp <<EOF
git add .
```

`git commit -m "added sources"`
*Вывод:*
[main 5c4334e] added sources
4 files changed, 32 insertions(+)
create mode 100644 examples/example1.cpp
create mode 100644 examples/example2.cpp
create mode 100644 include/print.hpp
create mode 100644 sources/print.cpp

`git push`
*Вывод:*
Enumerating objects: 10, done.
Counting objects: 100% (10/10), done.
Writing objects: 100% (9/9), 925 bytes | 925.00 KiB/s, done.
To https://github.com/gest475/lab002.git
b4ea0b1..5c4334e main -> main

## Часть 4
### Part I - Hello World программа
`cd ~/workspace && mkdir -p homework && cd homework`

`git clone https://github.com/gest475/lab002.git hello_world`
*Вывод:*
Cloning into 'hello_world'...
remote: Enumerating objects: 15, done.
remote: Total 15 (delta 1), reused 14 (delta 0)
Receiving objects: 100% (15/15), done.

```
cat > hello_world.cpp <<EOF
git add hello_world.cpp
```
`git commit -m "Initial commit: Hello World program with bad style"`
*Вывод:*
[main 83ee00b] Initial commit: Hello World program with bad style
1 file changed, 8 insertions(+)
create mode 100644 hello_world.cpp

`git push`
*Вывод:*
Enumerating objects: 4, done.
To https://github.com/gest475/lab002.git
5c4334e..83ee00b main -> main

`cat > hello_world.cpp <<EOF`

`git commit -am "Add user input and greeting"`
*Вывод:*
[main fe7a119] Add user input and greeting
1 file changed, 4 insertions(+), 1 deletion(-)

`git push`
*Вывод:*
To https://github.com/gest475/lab002.git
83ee00b..fe7a119 main -> main

### Part II - Ветка patch1

`git checkout -b patch1`
*Вывод:*
Switched to a new branch 'patch1'

`git branch`
*Вывод:*
main

patch1

`cat > hello_world.cpp <<EOF`

`git commit -am "Fix code style: remove using namespace std"`
*Вывод:*
[patch1 fa07092] Fix code style: remove using namespace std
1 file changed, 4 insertions(+), 5 deletions(-)

`git push --set-upstream origin patch1`
*Вывод:*
Enumerating objects: 5, done.
To https://github.com/gest475/lab002.git

[new branch] patch1 -> patch1
branch 'patch1' set up to track 'origin/patch1'.

`cat > hello_world.cpp <<EOF`

`git commit -am "Add comments to code"`
*Вывод:*
[patch1 ed7b02c] Add comments to code
1 file changed, 7 insertions(+), 3 deletions(-)


`git push`
*Вывод:*
fa07092..ed7b02c patch1 -> patch1

`git checkout main`
*Вывод:*
Switched to branch 'main'
Your branch is up to date with 'origin/main'.

`git pull`
*Вывод:*
Already up to date.

`git branch -d patch1`
*Вывод:*
warning: deleting branch 'patch1' that has been merged to
'refs/remotes/origin/patch1', but not yet merged to HEAD
Deleted branch patch1 (was ed7b02c).

### Part III - Ветка patch2

`git checkout -b patch2`
*Вывод:*
Switched to a new branch 'patch2'

`cat > hello_world.cpp <<EOF`

`git commit -am "Apply Mozilla code style"`
*Вывод:*
[patch2 4b0d5a0] Apply Mozilla code style
1 file changed, 7 insertions(+), 6 deletions(-)

`git push --set-upstream origin patch2`
*Вывод:*
Enumerating objects: 5, done.
To https://github.com/gest475/lab002.git

[new branch] patch2 -> patch2
branch 'patch2' set up to track 'origin/patch2'.

`git checkout main`
*Вывод:*
Switched to branch 'main'

`cat > hello_world.cpp <<EOF`

`git commit -am "Add comment in main branch"`
*Вывод:*
[main 645afa3] Add comment in main branch
1 file changed, 1 insertion(+)

`git push origin main`
*Вывод:*
To https://github.com/gest475/lab002.git
fe7a119..645afa3 main -> main

`git checkout patch2`
*Вывод:*
Switched to branch 'patch2'

`git rebase origin/main`
*Вывод:*
Successfully rebased and updated refs/heads/patch2.

`git push --force-with-lease origin patch2`
*Вывод:*
469ae46...c03850c patch2 -> patch2 (forced update)

`git checkout main`
*Вывод:*
Switched to branch 'main'

`git pull`
*Вывод:*
Already up to date.

`git branch -d patch2`
*Вывод:*
warning: deleting branch 'patch2' that has been merged to
'refs/remotes/origin/patch2', but not yet merged to HEAD
Deleted branch patch2 (was c03850c).

## Итоговая история коммитов

`git log --oneline --graph --all`
*Вывод:*
c03850c (origin/patch2) Add comment in main branch
51dd06c Apply Mozilla code style
645afa3 (HEAD -> main, origin/main) Add comment in main branch
ed7b02c (origin/patch1) Add comments to code
fa07092 Fix code style: remove using namespace std
fe7a119 Add user input and greeting
83ee00b Initial commit: Hello World program with bad style
5c4334e added sources
b4ea0b1 Add .gitignore
e535dac Initial commit: add README.md


