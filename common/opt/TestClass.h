#ifndef __TESTCLASS_H
#define __TESTCLASS_H

#include <x10rt.h>


#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace regionarray { 
template<class TPMGL(T)> class DistArray;
} } 
class Node;
namespace x10 { namespace regionarray { 
class Region;
} } 
namespace x10 { namespace regionarray { 
class Dist;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace lang { 
class Exception;
} } 
namespace x10 { namespace io { 
class Printer;
} } 
namespace x10 { namespace io { 
class Console;
} } 
namespace x10 { namespace lang { 
class Any;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace xrx { 
class FinishState;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace lang { 
class Point;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace lang { 
class FailedDynamicCheckException;
} } 
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace xrx { 
class Runtime__Profile;
} } 
namespace x10 { namespace compiler { 
class AsyncClosure;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

class TestClass_Strings {
  public:
    static ::x10::lang::String sl__390;
    static ::x10::lang::String sl__394;
    static ::x10::lang::String sl__389;
    static ::x10::lang::String sl__393;
    static ::x10::lang::String sl__392;
    static ::x10::lang::String sl__391;
    static ::x10::lang::String sl__388;
};

class TestClass : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(nodes);
    
    ::x10::regionarray::DistArray< ::Node*>* FMGL(nodeSet);
    
    ::x10::regionarray::Region* FMGL(R);
    
    ::x10::regionarray::Dist* FMGL(D);
    
    static void main(::x10::lang::Rail< ::x10::lang::String* >* args);
    virtual void selfCommittee();
    virtual void initialize();
    virtual ::TestClass* TestClass____this__TestClass();
    void _constructor();
    
    static ::TestClass* _make();
    
    virtual void __fieldInitializers_TestClass();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

#endif // TESTCLASS_H

class TestClass;

#ifndef TESTCLASS_H_NODEPS
#define TESTCLASS_H_NODEPS
#ifndef TESTCLASS_H_GENERICS
#define TESTCLASS_H_GENERICS
#endif // TESTCLASS_H_GENERICS
#endif // __TESTCLASS_H_NODEPS
