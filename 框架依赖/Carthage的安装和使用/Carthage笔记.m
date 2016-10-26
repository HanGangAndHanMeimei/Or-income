"备注"
     个人已经在在博客园提供了关于Carthage的使用教程
     连接地址：http://www.cnblogs.com/wendingding/p/5959322.html

01 Carthage简单介绍
    主页：https://github.com/Carthage/Carthage.git
    作者：Justin Spahr-Summers等
    版本：0.18
    目标：用最简单的方式来管理Cocoa第三方框架
    性质：第三方框架管理工具(类似于cocoapods) Carthage为用户管理第三方框架和依赖，但不会自动修改项目文件和生成配置，把对项目结构和设置的控制权交给用户。
    原理：自动将第三方框架编程为Dynamic framework(动态库)
    限制：仅支持iOS8+。它只支持框架，所以不能用来针对iOS8以前的系统版本进行开发


02 Carthage和cocoapods

    1）使用了CocoaPods的项目是高度集成的，而Carthage更灵活强调尽可能将任务委托给Xcode和Git。
        "CocoaPods在使用中会自动创建和更新workspace、依赖和Pod项目并进行整合;
        "Carthage在使用中不需要创建和集成相应的workspace和project,只需要依赖打包好的framework文件即可。
        "总结一下，CocoaPods的方法更容易使用，而Carthage更灵活且对项目没有侵入性。
    2）CocoaPods相对来说功能要比Carthage多很多，因此也更复杂,而CocoaPods配置简单项目干净。
    3）CocoaPods有一个中心仓库，而Carthage是去中心化的，没有中心服务器也就避免了可能因中心节点错误而带来的失败，即Carthage每次配置和更新环境，只会去更新具体的库，时间更快。
    4）想让自己的第三方库支持Carthage比让其支持CocoaPods更加的简单。

    5）Carthage的不足
        ① 库依然不如 CocoaPods 丰富
        ② 仅支持iOS8+
        ③ 工具尚且不如cocoapods晚上（已经发布了app）
        ④ 在使用第三方库的过程中无法查看源码

03 Carthage的安装和使用
    1）直接下载Carthage.pkg安装包，安装运行
    2）如果使用的XCode为7.0+版本，那么也可以使用下面的方法来安装
    /*
     〇 安装homebrew
        $ /usr/bin/ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"
     ① 升级brew
        $ brew update
     ② 使用brew来安装
        $ brew install Carthage
     ③ 查看版本
        $ Carthage version
     */

04 Carthage的使用
    1）先进入到项目所在文件夹
        // $ cd 项目路径
    2）创建一个空的Carthage文件
        // $ touch Cartfile
    3）编辑cartfile文件,例如要安装AFN框架
        // git "https://github.com/AFNetworking/AFNetworking.git"

    4）保存并关闭cartfile文件，使用cartfile安装框架
        // $ Carthage update --platform iOS
    5）打开Carthage 查看生产的文件目录
        // $ open Carthage
        文件目录说明：
            "|| Carthage/Checkouts目录：从github获取的源代码
            "|| Carthage/Build目录：编译出来的Framework二进制代码库
    6) 配置项目
        打开项目，点击Target -> Build Phases -> Link Library with Libraries选择Carthage/Build目录中要导入的framework
    7）添加编译的脚本（该脚本文件保证在提交归档时会对相关文件和dSYMs进行复制）
        (1)点击Build Phases，点击“+” ->  New Run Script Phase
        (2)添加添加脚本 /usr/local/bin/Carthage copy-frameworks
        (3)添加"Input Files"
    8）在项目中使用第三方库

    其它：
        卸载Carthage：$ brew uninstall Carthage
        更新第三方框架：
            更新多个框架：修改Cartfile文件，并重新执行 $ Carthage update 配置
            更新某个框架：$ Carthage update 具体的框架名称



05 Carthage的工作过程说明
    ① 创建一个Cartfile文件，在该文件中列出您想使用的框架
    ② 运行Carthage,获取并编译Cartfile文件中列出的框架
    ③ 把框架的二进制文件配置到项目中


06 让你的框架支持Carthage
    