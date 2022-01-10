#ifndef __SIMPLEAT_H
#define __SIMPLEAT_H

#include <x10rt.h>


#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class String;
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
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
namespace x10 { namespace xrx { 
class Runtime__Profile;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

class SimpleAT_Strings {
  public:
    static ::x10::lang::String sl__262;
    static ::x10::lang::String sl__267;
    static ::x10::lang::String sl__263;
    static ::x10::lang::String sl__264;
    static ::x10::lang::String sl__266;
    static ::x10::lang::String sl__265;
};

class SimpleAT : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(x);
    
    ::x10::lang::PlaceGroup* FMGL(D);
    
    static void main(::x10::lang::Rail< ::x10::lang::String* >* args);
    virtual void setZeroUsingAT();
    virtual ::SimpleAT* SimpleAT____this__SimpleAT();
    void _constructor();
    
    static ::SimpleAT* _make();
    
    virtual void __fieldInitializers_SimpleAT();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

#endif // SIMPLEAT_H

class SimpleAT;

#ifndef SIMPLEAT_H_NODEPS
#define SIMPLEAT_H_NODEPS
#ifndef SIMPLEAT_H_GENERICS
#define SIMPLEAT_H_GENERICS
#endif // SIMPLEAT_H_GENERICS
#endif // __SIMPLEAT_H_NODEPS
