#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

#define CONST_RAW_ID 42

typedef enum {
  r#Bar,
} Foo;

typedef struct Node_Foo Node_Foo;

typedef struct {
  Foo r#raw_ident_field_x;
} RawIdentStruct;

typedef Foo OtherFoo;

typedef union {
  Foo r#raw_ident_union_field_a;
  Foo r#raw_ident_union_field_b;
} RawIdentUnion;

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

extern const Foo GLOBAL_RAW_IDENT;

extern Foo MUT_GLOBAL_RAW_IDENT;

extern void async(void);

void enum_root(Foo foo);

void generic_path_root(const Node_Foo *node);

void raw_ident_function(void);

void raw_ident_function_argument(int32_t r#param);

void struct_root(const RawIdentStruct *s);

void typedef_root(OtherFoo t);

void union_root(RawIdentUnion u);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus
