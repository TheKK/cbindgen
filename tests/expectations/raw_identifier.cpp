#include <cstdarg>
#include <cstdint>
#include <cstdlib>
#include <new>

static const int32_t CONST_RAW_ID = 42;

enum class Foo {
  Bar,
};

template<typename T>
struct Node;

struct TaggedUnion {
  enum class Tag {
    A,
    B,
    C,
  };

  struct A_Body {
    Foo _0;
  };

  struct C_Body {
    Foo c_a;
    int32_t c_b;
  };

  Tag tag;
  union {
    A_Body a;
    C_Body c;
  };
};

struct RawIdentStruct {
  Foo raw_ident_field_x;
};

using OtherFoo = Foo;

union RawIdentUnion {
  Foo raw_ident_union_field_a;
  Foo raw_ident_union_field_b;
};

extern "C" {

extern const Foo GLOBAL_RAW_IDENT;

extern Foo MUT_GLOBAL_RAW_IDENT;

extern void async();

void enum_root(Foo foo, TaggedUnion tagged);

void generic_path_root(const Node<Foo> *node);

void raw_ident_function();

void raw_ident_function_argument(int32_t param);

void struct_root(const RawIdentStruct *s);

void typedef_root(OtherFoo t);

void union_root(RawIdentUnion u);

} // extern "C"
