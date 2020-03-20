#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

#define CONST_RAW_ID 42

enum Foo {
  Bar,
};

struct Node_Foo;

enum TaggedUnion_Tag {
  A,
  B,
  C,
};

struct A_Body {
  enum Foo _0;
};

struct C_Body {
  enum Foo c_a;
  int32_t c_b;
};

struct TaggedUnion {
  enum TaggedUnion_Tag tag;
  union {
    struct A_Body a;
    struct C_Body c;
  };
};

struct RawIdentStruct {
  enum Foo raw_ident_field_x;
};

typedef enum Foo OtherFoo;

union RawIdentUnion {
  enum Foo raw_ident_union_field_a;
  enum Foo raw_ident_union_field_b;
};

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

extern const enum Foo GLOBAL_RAW_IDENT;

extern enum Foo MUT_GLOBAL_RAW_IDENT;

extern void async(void);

void enum_root(enum Foo foo, struct TaggedUnion tagged);

void generic_path_root(const struct Node_Foo *node);

void raw_ident_function(void);

void raw_ident_function_argument(int32_t param);

void struct_root(const struct RawIdentStruct *s);

void typedef_root(OtherFoo t);

void union_root(union RawIdentUnion u);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus
