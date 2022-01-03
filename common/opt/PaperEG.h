#ifndef __PAPEREG_H
#define __PAPEREG_H

#include <x10rt.h>


class PaperEG__A;
namespace x10 { namespace lang { 
class Place;
} } 
namespace x10 { namespace xrx { 
class Runtime;
} } 
namespace x10 { namespace lang { 
class VoidFun_0_0;
} } 
class PaperEG__B;
namespace x10 { namespace lang { 
class PlaceGroup;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterator;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Iterable;
} } 
namespace x10 { namespace xrx { 
class Runtime__Profile;
} } 
namespace x10 { namespace lang { 
template<class TPMGL(T)> class Rail;
} } 
namespace x10 { namespace lang { 
class String;
} } 
namespace x10 { namespace xrx { 
class FinishState;
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
namespace x10 { namespace compiler { 
class AsyncClosure;
} } 
namespace x10 { namespace lang { 
class CheckedThrowable;
} } 
namespace x10 { namespace compiler { 
class Synthetic;
} } 

class PaperEG_Strings {
  public:
    static ::x10::lang::String sl__218;
    static ::x10::lang::String sl__219;
};

class PaperEG : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    virtual void f();
    static void main(::x10::lang::Rail< ::x10::lang::String* >* args);
    virtual ::PaperEG* PaperEG____this__PaperEG();
    void _constructor();
    
    static ::PaperEG* _make();
    
    virtual void __fieldInitializers_PaperEG();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

#endif // PAPEREG_H

class PaperEG;

#ifndef PAPEREG_H_NODEPS
#define PAPEREG_H_NODEPS
#ifndef PAPEREG_H_GENERICS
#define PAPEREG_H_GENERICS
#endif // PAPEREG_H_GENERICS
#endif // __PAPEREG_H_NODEPS
