# 安装（install）

该Podfile文件指定CocoaPods安装时使用的方法。

#### 例如：


指定自定义CocoaPods安装选项
```
install! 'cocoapods',
         :deterministic_uuids => false,
         :integrate_targets => false
```

#### 支持的关键字：
```
:clean

:deduplicate_targets

:deterministic_uuids

:integrate_targets

:lock_pod_sources

:share_schemes_for_development_pods
```

