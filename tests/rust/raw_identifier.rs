// Global
#[no_mangle]
pub static mut r#MUT_GLOBAL_RAW_IDENT: r#Foo = r#Foo::r#Bar;

#[no_mangle]
pub static r#GLOBAL_RAW_IDENT: r#Foo = r#Foo::r#Bar;

// Constant
pub const r#CONST_RAW_ID: i32 = 42;
pub const r#CONST_FOO: r#FOO = r#FOO::r#Bar;

// Structure
#[repr(C)]
pub struct r#RawIdentStruct {
	r#raw_ident_field_x: r#Foo,
}

#[no_mangle]
pub extern "C" fn r#struct_root(s: &r#RawIdentStruct) {}

// Enumeration
#[repr(C)]
pub enum r#Foo {
	r#Bar,
}

#[no_mangle]
pub extern "C" fn r#enum_root(foo: r#Foo) {}

// Function
#[no_mangle]
pub extern "C" fn r#raw_ident_function() {}

#[no_mangle]
pub extern "C" fn r#raw_ident_function_argument(r#param: i32) {}

// Extern function
extern "C" {
    fn r#async();
}

// Generic path
struct Node<T> {
	t: t,
}

#[no_mangle]
pub extern "C" fn r#generic_path_root(node: &Node<r#Foo>) {}

// Union
#[repr(C)]
union r#RawIdentUnion {
    r#raw_ident_union_field_a: r#Foo,
    r#raw_ident_union_field_b: r#Foo,
}

#[no_mangle]
pub extern "C" fn r#union_root(u: r#RawIdentUnion) {}

// Typedef
pub type r#OtherFoo = r#Foo;

#[no_mangle]
pub extern "C" fn r#typedef_root(t: r#OtherFoo) {}
