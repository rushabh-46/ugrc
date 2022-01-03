#ifndef __PAPEREG__B_H
#define __PAPEREG__B_H

#include <x10rt.h>


#define PAPEREG__A_H_NODEPS
#include <PaperEG__A.h>
#undef PAPEREG__A_H_NODEPS
class PaperEG;
namespace x10 { namespace compiler { 
class Synthetic;
} } 

class PaperEG__B : public ::PaperEG__A   {
    public:
    RTT_H_DECLS_CLASS
    
    ::PaperEG* FMGL(out__);
    
    ::PaperEG__A* FMGL(r3);
    
    virtual ::PaperEG__B* PaperEG__B____this__PaperEG__B();
    virtual ::PaperEG* PaperEG__B____this__PaperEG();
    void _constructor(::PaperEG* out__);
    
    static ::PaperEG__B* _make(::PaperEG* out__);
    
    virtual void __fieldInitializers_PaperEG_B();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

#endif // PAPEREG__B_H

class PaperEG__B;

#ifndef PAPEREG__B_H_NODEPS
#define PAPEREG__B_H_NODEPS
#ifndef PAPEREG__B_H_GENERICS
#define PAPEREG__B_H_GENERICS
#endif // PAPEREG__B_H_GENERICS
#endif // __PAPEREG__B_H_NODEPS
