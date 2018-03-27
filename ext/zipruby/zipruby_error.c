#include "zipruby.h"
#include "zipruby_error.h"
#include "ruby.h"

extern VALUE ZipRuby;
VALUE Error;

void Init_zipruby_error() {
  Error = rb_define_class_under(ZipRuby, "Error", rb_eStandardError);
}
