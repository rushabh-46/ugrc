#ifndef __EXTENDEDAT_H
#define __EXTENDEDAT_H

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
template<class TPMGL(U)> class Fun_0_0;
} } 
namespace x10 { namespace xrx { 
class Runtime__Profile;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

class ExtendedAT_Strings {
  public:
    static ::x10::lang::String sl__274;
    static ::x10::lang::String sl__278;
    static ::x10::lang::String sl__277;
    static ::x10::lang::String sl__276;
    static ::x10::lang::String sl__275;
};

class ExtendedAT : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(x);
    
    ::x10::lang::PlaceGroup* FMGL(D);
    
    static void main(::x10::lang::Rail< ::x10::lang::String* >* args);
    virtual void _kwd__double();
    virtual ::ExtendedAT* ExtendedAT____this__ExtendedAT();
    void _constructor();
    
    static ::ExtendedAT* _make();
    
    virtual void __fieldInitializers_ExtendedAT();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

#endif // EXTENDEDAT_H

class ExtendedAT;

#ifndef EXTENDEDAT_H_NODEPS
#define EXTENDEDAT_H_NODEPS
#ifndef EXTENDEDAT_H_GENERICS
#define EXTENDEDAT_H_GENERICS
#endif // EXTENDEDAT_H_GENERICS
#endif // __EXTENDEDAT_H_NODEPS
