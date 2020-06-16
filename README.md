# xd065
学习笔记：
1.如何创建SSH-keygen
   1）运行git bash，输入如下代码：
      $ ssh-keygen -t rsa -C "your_email@example.com"
      代码参数含义：
      -t 指定密钥类型，默认是 rsa ，可以省略。
      -C 设置注释文字，比如邮箱。
      -f 指定密钥文件存储文件名。
      以上代码省略了 -f 参数，因此，运行上面那条命令后会让你输入一个文件名，用于保存刚才生成的 SSH key 代码

      当然，也可以不输入文件名，使用默认文件名（推荐），那么就会生成 id_rsa 和 id_rsa.pub 两个秘钥文件

      接着又会提示你输入两次密码（该密码是你push文件的时候要输入的密码，而不是github管理者的密码），
      当然，你也可以不输入密码，直接按回车。那么push的时候就不需要输入密码，直接提交到github上了
      
      接下来，就会显示如下代码提示，如：
      Your identification has been saved in /c/Users/you/.ssh/id_rsa.
    2）添加你的 SSH key 到 github上面去
       首先你需要拷贝 id_rsa.pub 文件的内容，你可以用编辑器打开文件复制，也可以用git命令复制该文件的内容，如：
         $ clip < ~/.ssh/id_rsa.pub

       登录你的github账号，从又上角的设置（ Account Settings ）进入，然后点击菜单栏的 SSH key 进入页面添加 SSH key。

       点击 Add SSH key 按钮添加一个 SSH key 。把你复制的 SSH key 代码粘贴到 key 所对应的输入框中，记得 SSH key 代码的前后不要留有空格或者回车。当然，上面的 Title 所对应的        输入框你也可以输入一个该 SSH key 显示在 github 上的一个别名。默认的会使用你的邮件名称。

 
