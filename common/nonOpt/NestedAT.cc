/*************************************************/
/* START of NestedAT */
#include <NestedAT.h>

#include <x10/lang/Long.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/lang/Rail.h>
#include <x10/lang/String.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/xrx/Runtime.h>
#include <x10/lang/Place.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/xrx/Runtime__Profile.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef NESTEDAT__CLOSURE__2_CLOSURE
#define NESTEDAT__CLOSURE__2_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class NestedAT__closure__2 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<NestedAT__closure__2> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 29 "/home/rushhub/ugrc/common/NestedAT.x10"
        saved_this->FMGL(x) = ((saved_this->FMGL(x)) / ::x10aux::zeroCheck(((x10_long)2ll)));
        
        //#line 30 "/home/rushhub/ugrc/common/NestedAT.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here), (&::NestedAT_Strings::sl__120))));
        
        //#line 31 "/home/rushhub/ugrc/common/NestedAT.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::NestedAT_Strings::sl__121), saved_this->FMGL(x))));
    }
    
    // captured environment
    ::NestedAT* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        NestedAT__closure__2* storage = ::x10aux::alloc_z<NestedAT__closure__2>();
        buf.record_reference(storage);
        ::NestedAT* that_saved_this = buf.read< ::NestedAT*>();
        NestedAT__closure__2* this_ = new (storage) NestedAT__closure__2(that_saved_this);
        return this_;
    }
    
    NestedAT__closure__2(::NestedAT* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/home/rushhub/ugrc/common/NestedAT.x10:28-32";
    }

};

#endif // NESTEDAT__CLOSURE__2_CLOSURE
#ifndef NESTEDAT__CLOSURE__1_CLOSURE
#define NESTEDAT__CLOSURE__1_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class NestedAT__closure__1 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<NestedAT__closure__1> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 25 "/home/rushhub/ugrc/common/NestedAT.x10"
        saved_this->FMGL(x) = ((saved_this->FMGL(x)) / ::x10aux::zeroCheck(((x10_long)2ll)));
        
        //#line 26 "/home/rushhub/ugrc/common/NestedAT.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::NestedAT_Strings::sl__119), saved_this->FMGL(x))));
        {
            
            //#line 27 "/home/rushhub/ugrc/common/NestedAT.x10"
            ::x10::xrx::Runtime::runAt(::x10aux::nullCheck(saved_this->FMGL(D))->next(
                                         ::x10::lang::Place::_make(::x10aux::here)),
                                       reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(NestedAT__closure__2)))NestedAT__closure__2(saved_this))),
                                       ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
        }
        
        //#line 33 "/home/rushhub/ugrc/common/NestedAT.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
          reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::NestedAT_Strings::sl__122), saved_this->FMGL(x))));
    }
    
    // captured environment
    ::NestedAT* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        NestedAT__closure__1* storage = ::x10aux::alloc_z<NestedAT__closure__1>();
        buf.record_reference(storage);
        ::NestedAT* that_saved_this = buf.read< ::NestedAT*>();
        NestedAT__closure__1* this_ = new (storage) NestedAT__closure__1(that_saved_this);
        return this_;
    }
    
    NestedAT__closure__1(::NestedAT* saved_this) : saved_this(saved_this) { }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/home/rushhub/ugrc/common/NestedAT.x10:24-34";
    }

};

#endif // NESTEDAT__CLOSURE__1_CLOSURE

//#line 5 "/home/rushhub/ugrc/common/NestedAT.x10"

//#line 6 "/home/rushhub/ugrc/common/NestedAT.x10"

//#line 8 "/home/rushhub/ugrc/common/NestedAT.x10"
void NestedAT::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 10 "/home/rushhub/ugrc/common/NestedAT.x10"
    ::NestedAT* temp = ::NestedAT::_make();
    
    //#line 12 "/home/rushhub/ugrc/common/NestedAT.x10"
    ::x10aux::nullCheck(temp)->FMGL(x) = ((x10_long)100ll);
    
    //#line 14 "/home/rushhub/ugrc/common/NestedAT.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::NestedAT_Strings::sl__117), ::x10aux::nullCheck(temp)->FMGL(x))));
    
    //#line 16 "/home/rushhub/ugrc/common/NestedAT.x10"
    ::x10aux::nullCheck(temp)->divide();
    
    //#line 18 "/home/rushhub/ugrc/common/NestedAT.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::NestedAT_Strings::sl__118), ::x10aux::nullCheck(temp)->FMGL(x))));
}

//#line 21 "/home/rushhub/ugrc/common/NestedAT.x10"
void NestedAT::divide() {
    {
        
        //#line 23 "/home/rushhub/ugrc/common/NestedAT.x10"
        ::x10::xrx::Runtime::runAt(::x10aux::nullCheck(this->FMGL(D))->next(
                                     ::x10::lang::Place::_make(::x10aux::here)),
                                   reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(NestedAT__closure__1)))NestedAT__closure__1(this))),
                                   ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    }
}

//#line 3 "/home/rushhub/ugrc/common/NestedAT.x10"
::NestedAT* NestedAT::NestedAT____this__NestedAT() {
    return this;
    
}

//#line 4 "/home/rushhub/ugrc/common/NestedAT.x10"
void NestedAT::_constructor() {
    
    //#line 3 "/home/rushhub/ugrc/common/NestedAT.x10"
    this->NestedAT::__fieldInitializers_NestedAT();
}
::NestedAT* NestedAT::_make() {
    ::NestedAT* this_ = new (::x10aux::alloc_z< ::NestedAT>()) ::NestedAT();
    this_->_constructor();
    return this_;
}



//#line 3 "/home/rushhub/ugrc/common/NestedAT.x10"
void NestedAT::__fieldInitializers_NestedAT() {
    this->FMGL(x) = ((x10_long)0ll);
    this->FMGL(D) = ::x10::lang::Place::places();
}
const ::x10aux::serialization_id_t NestedAT::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::NestedAT::_deserializer);

void NestedAT::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(x));
    buf.write(this->FMGL(D));
    
}

::x10::lang::Reference* ::NestedAT::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::NestedAT* this_ = new (::x10aux::alloc_z< ::NestedAT>()) ::NestedAT();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void NestedAT::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(x) = buf.read<x10_long>();
    FMGL(D) = buf.read< ::x10::lang::PlaceGroup*>();
}

::x10aux::RuntimeType NestedAT::rtt;
void NestedAT::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("NestedAT",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String NestedAT_Strings::sl__122("Value after nested AT = ");
::x10::lang::String NestedAT_Strings::sl__117("Value before AT = ");
::x10::lang::String NestedAT_Strings::sl__118("Value after AT = ");
::x10::lang::String NestedAT_Strings::sl__121("Value inside nested AT = ");
::x10::lang::String NestedAT_Strings::sl__120(" says hello");
::x10::lang::String NestedAT_Strings::sl__119("Value before nested AT = ");

::x10::lang::VoidFun_0_0::itable<NestedAT__closure__2>NestedAT__closure__2::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &NestedAT__closure__2::__apply, &NestedAT__closure__2::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry NestedAT__closure__2::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &NestedAT__closure__2::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t NestedAT__closure__2::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(NestedAT__closure__2::_deserialize);

::x10::lang::VoidFun_0_0::itable<NestedAT__closure__1>NestedAT__closure__1::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &NestedAT__closure__1::__apply, &NestedAT__closure__1::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry NestedAT__closure__1::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &NestedAT__closure__1::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t NestedAT__closure__1::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(NestedAT__closure__1::_deserialize);

/* END of NestedAT */
/*************************************************/
