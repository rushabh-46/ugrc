#ifndef __NODE_H
#define __NODE_H

#include <x10rt.h>


#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
#define X10_LANG_LONG_H_NODEPS
#include <x10/lang/Long.h>
#undef X10_LANG_LONG_H_NODEPS
namespace x10 { namespace compiler { 
class Synthetic;
} } 

class Node : public ::x10::lang::X10Class   {
    public:
    RTT_H_DECLS_CLASS
    
    x10_long FMGL(committee);
    
    virtual ::Node* Node____this__Node();
    void _constructor();
    
    static ::Node* _make();
    
    virtual void __fieldInitializers_Node();
    
    // Serialization
    public: static const ::x10aux::serialization_id_t _serialization_id;
    
    public: virtual ::x10aux::serialization_id_t _get_serialization_id() {
         return _serialization_id;
    }
    
    public: virtual void _serialize_body(::x10aux::serialization_buffer& buf);
    
    public: static ::x10::lang::Reference* _deserializer(::x10aux::deserialization_buffer& buf);
    
    public: void _deserialize_body(::x10aux::deserialization_buffer& buf);
    
};

#endif // NODE_H

class Node;

#ifndef NODE_H_NODEPS
#define NODE_H_NODEPS
#ifndef NODE_H_GENERICS
#define NODE_H_GENERICS
#endif // NODE_H_GENERICS
#endif // __NODE_H_NODEPS
