#ifndef __NESTEDAT_H
#define __NESTEDAT_H

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

class NestedAT_Strings {
  public:
    static ::x10::lang::String sl__709;
    static ::x10::lang::String sl__712;
    static ::x10::lang::String sl__715;
    static ::x10::lang::String sl__714;
    static ::x10::lang::String sl__710;
    static ::x10::lang::String sl__718;
    static ::x10::lang::String sl__711;
    static ::x10::lang::String sl__716;
    static ::x10::lang::String sl__713;
    static ::x10::lang::String sl__717;
};

class NestedAT : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(x);
    
    ::x10::lang::PlaceGroup* FMGL(D);
    
    static void main(::x10::lang::Rail< ::x10::lang::String* >* args);
    virtual void divide();
    virtual ::NestedAT* NestedAT____this__NestedAT();
    void _constructor();
    
    static ::NestedAT* _make();
    
    virtual void __fieldInitializers_NestedAT();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

#endif // NESTEDAT_H

class NestedAT;

#ifndef NESTEDAT_H_NODEPS
#define NESTEDAT_H_NODEPS
#ifndef NESTEDAT_H_GENERICS
#define NESTEDAT_H_GENERICS
#endif // NESTEDAT_H_GENERICS
#endif // __NESTEDAT_H_NODEPS
