Gem::Specification.new do |spec|
  spec.name              = 'zipruby'
  spec.version           = '0.3.8'
  spec.summary           = 'Ruby bindings for libzip.'
  spec.files             = Dir.glob('ext/zipruby/*.{c,h,rb}') + %w(README.txt LICENSE.libzip ChangeLog)
  spec.author            = 'winebarrel'
  spec.email             = 'sgwr_dts@yahoo.co.jp'
  spec.homepage          = 'http://zipruby.rubyforge.org'
  spec.extensions        = 'ext/zipruby/extconf.rb'
  spec.rubyforge_project = 'zipruby'
end
