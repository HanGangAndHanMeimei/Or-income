# target
在给定块中定义Cocoapods的target和范围依赖关系。一个target应该对应一个Xcode中的target。默认情况下，target包括该块外部定义的依赖关系。

#示例：
target定义
```
target 'ZipApp' do
  pod 'SSZipArchive'
end
```
从parent定义一个测试的Target
```
target 'ZipApp' do
  pod 'SSZipArchive'

  target 'ZipAppTests' do
    inherit! :search_paths
    pod 'Nimble'
  end
end
```

定义一个target应用于多个目标，通过它的父target
```
target 'ShowsApp' do
  pod 'ShowsKit'

  # Has its own copy of ShowsKit + ShowTVAuth
  target 'ShowsTV' do
    pod 'ShowTVAuth'
  end

  # Has its own copy of Specta + Expecta
  # and has access to ShowsKit via the app
  # that the test target is bundled into

  target 'ShowsTests' do
    inherit! :search_paths
    pod 'Specta'
    pod 'Expecta'
  end
end
```


