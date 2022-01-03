#ifndef __PAPEREG__A_H
#define __PAPEREG__A_H

#include <x10rt.h>


#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
class PaperEG;
namespace x10 { namespace compiler { 
class Synthetic;
} } 

class PaperEG__A : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    ::PaperEG* FMGL(out__);
    
    x10_long FMGL(r1);
    
    x10_long FMGL(r2);
    
    virtual ::PaperEG__A* PaperEG__A____this__PaperEG__A();
    virtual ::PaperEG* PaperEG__A____this__PaperEG();
    void _constructor(::PaperEG* out__);
    
    static ::PaperEG__A* _make(::PaperEG* out__);
    
    virtual void __fieldInitializers_PaperEG_A();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

#endif // PAPEREG__A_H

class PaperEG__A;

#ifndef PAPEREG__A_H_NODEPS
#define PAPEREG__A_H_NODEPS
#ifndef PAPEREG__A_H_GENERICS
#define PAPEREG__A_H_GENERICS
#endif // PAPEREG__A_H_GENERICS
#endif // __PAPEREG__A_H_NODEPS
