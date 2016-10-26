# abstract_target(抽象_target)
定义一个新的可用于方便target依赖继承的抽象target。

#示例
定义一个抽象target
```
abstract_target 'Networking' do
  pod 'AlamoFire'

  target 'Networking App 1'
  target 'Networking App 2'
end
```

给多个target定义抽象target
```
# Note: There are no targets called "Shows" in any of this workspace's Xcode projects
abstract_target 'Shows' do
  pod 'ShowsKit'

  # The target ShowsiOS has its own copy of ShowsKit (inherited) + ShowWebAuth (added here)
  target 'ShowsiOS' do
    pod 'ShowWebAuth'
  end

  # The target ShowsTV has its own copy of ShowsKit (inherited) + ShowTVAuth (added here)
  target 'ShowsTV' do
    pod 'ShowTVAuth'
  end

  # Our tests target has its own copy of
  # our testing frameworks, and has access
  # to ShowsKit as well because it is
  # a child of the abstract target 'Shows'

  target 'ShowsTests' do
    inherit! :search_paths
    pod 'Specta'
    pod 'Expecta'
  end
end
```
