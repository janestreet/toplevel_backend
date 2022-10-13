#include <caml/mlvalues.h>
#include <caml/memory.h>
#include <caml/alloc.h>

/* This allows the current library to link as a self-contained unit. Jenga will require
that property of every library with an "external" declaration. This symbol is a bit of an
edge case, but it's easy enough to give a placeholder definition which will be overridden
by the symbol provided by jenga, as with version-util or ocaml-plugin. */
CAMLprim CAMLweakdef value generated_toplevel_info (value unit __attribute__ ((unused)))
{
  return(caml_copy_string(""));
}
