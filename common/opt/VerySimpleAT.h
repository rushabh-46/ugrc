#ifndef __VERYSIMPLEAT_H
#define __VERYSIMPLEAT_H

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
namespace x10 { namespace compiler { 
class Synthetic;
} } 

class VerySimpleAT_Strings {
  public:
    static ::x10::lang::String sl__68;
    static ::x10::lang::String sl__67;
    static ::x10::lang::String sl__66;
};

class VerySimpleAT : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(x);
    
    ::x10::lang::PlaceGroup* FMGL(D);
    
    static void main(::x10::lang::Rail< ::x10::lang::String* >* args);
    virtual void setZero();
    virtual ::VerySimpleAT* VerySimpleAT____this__VerySimpleAT();
    void _constructor();
    
    static ::VerySimpleAT* _make();
    
    virtual void __fieldInitializers_VerySimpleAT();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

#endif // VERYSIMPLEAT_H

class VerySimpleAT;

#ifndef VERYSIMPLEAT_H_NODEPS
#define VERYSIMPLEAT_H_NODEPS
#ifndef VERYSIMPLEAT_H_GENERICS
#define VERYSIMPLEAT_H_GENERICS
#endif // VERYSIMPLEAT_H_GENERICS
#endif // __VERYSIMPLEAT_H_NODEPS
