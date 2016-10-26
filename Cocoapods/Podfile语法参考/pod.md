# pod
pod指定项目中的依赖。

根据pod的名称和可选的版本要求来确定依赖。

在项目中开始使用时，你可能需要安装某个框架的最新版本。如果是这样的话，那你可以直接省略版本要求。

```
pod 'SSZipArchive'
```
在项目后期，你可能需要指定该框架的特定版本，在这种情况下，你可以指定该框架的版本号。
```
pod 'Objection', '0.9'
```
除了不指定版本或指定特定的版本外，你还可以使用下面的运算符来进行设置：
```
>0.1    表示安装任何高于0.1的版本
>= 0.1  表示安装0.1版本或者任何高于0.1的版本
< 0.1   表示安装任何低于0.1的版本
<= 0.1  表示安装0.1版本或者任何低于0.1的版本
~> 0.1.2 表示安装0.1.2的版本或者高于0.1.2小于0.2的版本这样的设置相当于：>=0.1.2 且<0.2.0，并将始终与最新的已知版本匹配您的要求。

```
可以为更细粒度的控制指定一个版本要求列表。
关于版本设置的更多信息，请参考：

* Semantic Versioning[http://semver.org]
* RubyGems Versioning Policies[http://docs.rubygems.org/read/chapter/7]

# 生成配置

默认情况下，依赖都安装在target的编译配置中。由于调试目的或其他原因，它们只能在一个编译配置列表中启用。
```
pod 'PonyDebugger', :configurations => ['Debug', 'Beta']
```
或者，您可以指定将它包含在一个单独的构建配置中。
```
pod 'PonyDebugger', :configuration => 'Debug'
```
请注意，在所有配置中都包含可传递的依赖关系，这样的话你就不必手动指定它们的生成配置了。

#Subspecs
当通过pod名字来安装的时候，默认会安装podspec定义下所有的subspecs
你可以使用下面的方式来指定安装的subspecs.
```
pod 'QueryKit/Attribute'
```
你可以使用下面的方法安装一系列(多个)的subspecs
```
pod 'QueryKit', :subspecs => ['Attribute', 'QuerySet']
```
依赖关系也可以从外部来源获得。

#使用本地文件
如果你想为客户端项目使用`串联`pod,那么可以采用指定路径的方式。
```
pod 'AFNetworking', :path => '~/Documents/AFNetworking'
```
如果使用此选项，那么CocoaPods将会从指定的文件路径把框架链接到Pods项目中。这意味着，您将坚持CocoaPods设置？。
引用的文件夹可以是你喜欢的SCM模块，或者是一个git仓库的子模块。
`Note that the podspec of the Pod file is expected to be in the folder.`

#From a podspec in the root of a library repository.

有时你可能需要总是使用最新版本的，或特定版本的第三方框架。如果是这样的话，你可以指定pod中声明。
使用仓库的master分支（主干）
```
pod 'AFNetworking', :git => 'https://github.com/gowalla/AFNetworking.git'
```
使用仓库中的不同分支
```
pod 'AFNetworking', :git => 'https://github.com/gowalla/AFNetworking.git', :branch => 'dev'
```
使用仓库中的tag(标记通常用来做备份处理)
```
pod 'AFNetworking', :git => 'https://github.com/gowalla/AFNetworking.git', :tag => '0.7.0'
```
甚至指定某次特定的提交
```
pod 'AFNetworking', :git => 'https://github.com/gowalla/AFNetworking.git', :commit => '082f8319af'
```
要注意，这意味着，该版本也需要满足Pods中设置的其他依赖关系。
...


