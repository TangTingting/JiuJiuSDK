
Pod::Spec.new do |spec|

  spec.name         = "JiuJiuSDK"
  spec.version      = "1.2.0"
  spec.summary      = "JiuJiuSDK"


  spec.description  = "JiuJiuSDK for Login and Pay"
  spec.homepage     = "https://www.jiujiuapp.cn/document.html"

  spec.license      = { :type => "MIT", :file => "LICENSE" }
  spec.author       = { "Joo" => "24156949@qq.com" }
  
  spec.source       = { :git => "https://github.com/TangTingting/JiuJiuSDK.git", :tag => "#{spec.version}" }

  spec.requires_arc = true  
  spec.ios.deployment_target = '10.0'
  spec.vendored_frameworks ='JiuJiuSDK.framework'
   #spec.source_files  = "JiuJiuSDK", "JiuJiuSDK/**/*.{h}"
  
end
