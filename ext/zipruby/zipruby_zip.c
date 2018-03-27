#include <zlib.h>

#include "ruby.h"
#include "zip.h"
#include "zipruby.h"
#include "zipruby_zip.h"

VALUE ZipRuby;

void Init_zipruby_zip() {
  ZipRuby = rb_define_module("ZipRuby");
  rb_define_const(ZipRuby, "VERSION", rb_str_new2(VERSION));

  rb_define_const(ZipRuby, "CREATE",    INT2NUM(ZIP_CREATE));
  rb_define_const(ZipRuby, "EXCL",      INT2NUM(ZIP_EXCL));
  rb_define_const(ZipRuby, "CHECKCONS", INT2NUM(ZIP_CHECKCONS));
  rb_define_const(ZipRuby, "TRUNC",     INT2NUM(ZIP_TRUNCATE));

  rb_define_const(ZipRuby, "FL_NOCASE",     INT2NUM(ZIP_FL_NOCASE));
  rb_define_const(ZipRuby, "FL_NODIR",      INT2NUM(ZIP_FL_NODIR));
  rb_define_const(ZipRuby, "FL_COMPRESSED", INT2NUM(ZIP_FL_COMPRESSED));
  rb_define_const(ZipRuby, "FL_UNCHANGED",  INT2NUM(ZIP_FL_UNCHANGED));

  rb_define_const(ZipRuby, "CM_DEFAULT"   ,     INT2NUM(ZIP_CM_DEFAULT));
  rb_define_const(ZipRuby, "CM_STORE",          INT2NUM(ZIP_CM_STORE));
  rb_define_const(ZipRuby, "CM_SHRINK",         INT2NUM(ZIP_CM_SHRINK));
  rb_define_const(ZipRuby, "CM_REDUCE_1",       INT2NUM(ZIP_CM_REDUCE_1));
  rb_define_const(ZipRuby, "CM_REDUCE_2",       INT2NUM(ZIP_CM_REDUCE_2));
  rb_define_const(ZipRuby, "CM_REDUCE_3",       INT2NUM(ZIP_CM_REDUCE_3));
  rb_define_const(ZipRuby, "CM_REDUCE_4",       INT2NUM(ZIP_CM_REDUCE_4));
  rb_define_const(ZipRuby, "CM_IMPLODE",        INT2NUM(ZIP_CM_IMPLODE));
  rb_define_const(ZipRuby, "CM_DEFLATE",        INT2NUM(ZIP_CM_DEFLATE));
  rb_define_const(ZipRuby, "CM_DEFLATE64",      INT2NUM(ZIP_CM_DEFLATE64));
  rb_define_const(ZipRuby, "CM_PKWARE_IMPLODE", INT2NUM(ZIP_CM_PKWARE_IMPLODE));
  rb_define_const(ZipRuby, "CM_BZIP2",          INT2NUM(ZIP_CM_BZIP2));

  rb_define_const(ZipRuby, "EM_NONE",        INT2NUM(ZIP_EM_NONE));
  rb_define_const(ZipRuby, "EM_TRAD_PKWARE", INT2NUM(ZIP_EM_TRAD_PKWARE));
  // XXX: Strong Encryption Header not parsed yet

  rb_define_const(ZipRuby, "NO_COMPRESSION",      INT2NUM(Z_NO_COMPRESSION));
  rb_define_const(ZipRuby, "BEST_SPEED",          INT2NUM(Z_BEST_SPEED));
  rb_define_const(ZipRuby, "BEST_COMPRESSION",    INT2NUM(Z_BEST_COMPRESSION));
  rb_define_const(ZipRuby, "DEFAULT_COMPRESSION", INT2NUM(Z_DEFAULT_COMPRESSION));
}
