#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

#define r#CONST_RAW_ID 42

typedef enum {
  r#Bar,
} r#Foo;

typedef struct Node_r#Foo Node_r#Foo;

typedef struct {
  r#Foo r#raw_ident_field_x;
} r#RawIdentStruct;

typedef r#Foo r#OtherFoo;

typedef union {
  r#Foo r#raw_ident_union_field_a;
  r#Foo r#raw_ident_union_field_b;
} r#RawIdentUnion;

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

extern const r#Foo r#GLOBAL_RAW_IDENT;

extern r#Foo r#MUT_GLOBAL_RAW_IDENT;

extern void async(void);

void enum_root(Foo foo);

void generic_path_root(const Node_r#Foo *node);

void raw_ident_function(void);

void raw_ident_function_argument(int32_t r#param);

void struct_root(const r#RawIdentStruct *s);

void typedef_root(r#OtherFoo t);

void union_root(r#RawIdentUnion u);

#ifdef __cplusplus
} // extern "C"
#endif // __cplusplus
