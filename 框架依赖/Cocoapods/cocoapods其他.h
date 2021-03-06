2016年5月29日  任务(持续性任务)
研究cocoapods

/*
 研究范畴：
 1）什么是cocoapods?
 2) cocoapods能做什么？它是怎么工作的？
 3）为什么要使用cocoapods?
 4) cocoapods的内部实现原理是什么？
 5）应该如何使用cocopods？
 6）是否有和cocoapods同类的产品可以使用（谁优谁劣）？

 研究方法：
 1.搜集足够多的技术博客文章，先整理文章（主要在特定开发人员博客|一般博客|简书）
 2.下载github上面cocoapods提供的源码，彻底搞清楚研究范畴中涉及到的知识。
 3.期间应该反复的试错和测试，以保证输出的稳定性。

 价值输出：
 1.在博客园和公司论坛上面提供一篇完善的技术文章阐述和cocoapods相关的所有技能。
 */

/*
 cocoapods相关的一些技术博客（技术参考）
 01 CocoaPods 1.0及相应Mac版App正式发布，Podfile的使用方式发生改变
 http://www.infoq.com/cn/news/2016/05/CocoaPods-1-0-mac-podfile
 02 学习使用CocoaPods后涨的姿势
 http://www.lijianfei.cn/2015/11/05/learn-Cocoapod-up/?utm_source=tuicool&utm_medium=referral
 03 Podfile Syntax Reference
 https://guides.cocoapods.org/syntax/podfile.html#podfile
 04 CocoaPods版本升级那些坑
 http://www.tuicool.com/articles/URjqQvb
 05 CocoaPods/CocoaPods-app
 https://github.com/cocoapods/cocoapods-app
 06 cocoapods官网
 https://cocoapods.org/app
 07 Cocoapods补充
 http://www.she.vc/article/18-95107-0.html
 08 CocoaPods报错：The dependency `AFNetworking ` is not used in any concrete target
 http://blog.csdn.net/sjl_leaf/article/details/50506057
 09 Cocoapods 入门
 09 http://studentdeng.github.io/blog/2013/09/13/cocoapods-tutorial/

 */

//cocoapods 安装指定版本（回退）
//sudo gem install cocoapods --version 0.24.0
//sudo gem uninstall cocoapods卸载cocoapods