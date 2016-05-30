# Podfile
Podfile是一种描述了Xcode项目中一个或多个targets依赖关系的规范。

Podfile文件可以非常的简单：
```
target 'MyApp'
pod 'AFNetworking', '~> 1.0'
```

下面是一个更复杂的例子：
```
platform :ios, '9.0'
inhibit_all_warnings!

target 'MyApp' do
  pod 'ObjectiveSugar', '~> 0.5'

  target "MyAppTests" do
    inherit! :search_paths
    pod 'OCMock', '~> 2.0.1'
  end
end

post_install do |installer|
  installer.pods_project.pod_targets.each do |target|
    puts "#{target.name}"
  end
end
```
