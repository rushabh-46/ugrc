/*************************************************/
/* START of SimpleAT */
#include <SimpleAT.h>

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
#ifndef SIMPLEAT__CLOSURE__7_CLOSURE
#define SIMPLEAT__CLOSURE__7_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class SimpleAT__closure__7 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<SimpleAT__closure__7> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 23 "/home/rushhub/ugrc/common/SimpleAT.x10"
        saved_this->FMGL(x) = ((x10_long)0ll);
        
        //#line 24 "/home/rushhub/ugrc/common/SimpleAT.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
            reinterpret_cast< ::x10::lang::Any*>(
                ::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here),
                                             (&::SimpleAT_Strings::sl__72)
                                            )));
        
        //#line 25 "/home/rushhub/ugrc/common/SimpleAT.x10"
        ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
            reinterpret_cast< ::x10::lang::Any*>(
                ::x10::lang::String::__plus((&::SimpleAT_Strings::sl__73), 
                                            saved_this->FMGL(x)
                                            )));
    }
    
    // captured environment
    ::SimpleAT* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        SimpleAT__closure__7* storage = ::x10aux::alloc_z<SimpleAT__closure__7>();
        buf.record_reference(storage);
        ::SimpleAT* that_saved_this = buf.read< ::SimpleAT*>();
        SimpleAT__closure__7* this_ = new (storage) SimpleAT__closure__7(that_saved_this);
        return this_;
    }
    
    SimpleAT__closure__7(::SimpleAT* saved_this) : saved_this(saved_this) { }
    
    SimpleAT__closure__7(::x10::lang::PlaceGroup* zztemp0, x10_long zztemp1) { 
        this->saved_this = ::SimpleAT::_make();
        this->saved_this->FMGL(D) = zztemp0;
        this->saved_this->FMGL(x) = zztemp1;
    }
    
    static const ::x10aux::serialization_id_t _serialization_id;
    
    static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
    
    const char* toNativeString() {
        return "/home/rushhub/ugrc/common/SimpleAT.x10:22-26";
    }

};

#endif // SIMPLEAT__CLOSURE__7_CLOSURE
    
//#line 5 "/home/rushhub/ugrc/common/SimpleAT.x10"

//#line 6 "/home/rushhub/ugrc/common/SimpleAT.x10"

//#line 8 "/home/rushhub/ugrc/common/SimpleAT.x10"
void SimpleAT::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 10 "/home/rushhub/ugrc/common/SimpleAT.x10"
    ::SimpleAT* temp = ::SimpleAT::_make();
    
    //#line 12 "/home/rushhub/ugrc/common/SimpleAT.x10"
    ::x10aux::nullCheck(temp)->FMGL(x) = ((x10_long)100ll);
    
    //#line 14 "/home/rushhub/ugrc/common/SimpleAT.x10"
    ::x10aux::nullCheck(temp)->setZeroUsingAT();
    
    //#line 16 "/home/rushhub/ugrc/common/SimpleAT.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::SimpleAT_Strings::sl__71), ::x10aux::nullCheck(temp)->FMGL(x))));
}

//#line 19 "/home/rushhub/ugrc/common/SimpleAT.x10"
void SimpleAT::setZeroUsingAT() {
    {
        //#line 21 "/home/rushhub/ugrc/common/SimpleAT.x10"
        ::x10::lang::PlaceGroup* zztemp0 = this->FMGL(D);
        x10_long zztemp1 = this->FMGL(x);
        
        ::x10::xrx::Runtime::runAt((::x10::lang::Place *) q,
                                                new (sizeof(SimpleAT__closure__7))
                                                    SimpleAT__closure__7(zztemp0, zztemp1)
        );
    
    
    }
}


    //#line 19 "/home/rushhub/ugrc/common/SimpleAT.x10"
    void SimpleAT::setZeroUsingAT() {
    {
        //#line 21 "/home/rushhub/ugrc/common/SimpleAT.x10"
        ::x10::lang::PlaceGroup* zztemp0 = this->FMGL(D);
        x10_long zztemp1 = this->FMGL(x);

        x10:lang::Place * p = null;
        bool flag = false;
        do {
            if(flag) {
                if (p.UsefulPlace() != here().UsefulPlace()) 
                {   
                    // If useful places are different, execute the code as per generated by default
                    ::x10::xrx::Runtime::runAt((::x10::lang::Place *) q,
                                                new (sizeof(SimpleAT__closure__7))
                                                    SimpleAT__closure__7(zztemp0, zztemp1)
                    );
                } 
                else 
                {
                    // If Useful place maps to same place, then use temporary and invoke __apply()
                    SimpleAT__closure__7* sampleTemp = new SimpleAT__closure__7(zztemp0, zztemp1);
                    sampleTemp->__apply(); 
                }
                break;
            } 
            else
            {   // first capture the place argument in the closure in 'p' and set flag to true
                p = (::x10::lang::Place *) q;
                flag = true;
            }
        } while(true)    
    }
}
}

//#line 3 "/home/rushhub/ugrc/common/SimpleAT.x10"
::SimpleAT* SimpleAT::SimpleAT____this__SimpleAT() {
    return this;
    
}

//#line 4 "/home/rushhub/ugrc/common/SimpleAT.x10"
void SimpleAT::_constructor() {
    
    //#line 3 "/home/rushhub/ugrc/common/SimpleAT.x10"
    this->SimpleAT::__fieldInitializers_SimpleAT();
}
::SimpleAT* SimpleAT::_make() {
    ::SimpleAT* this_ = new (::x10aux::alloc_z< ::SimpleAT>()) ::SimpleAT();
    this_->_constructor();
    return this_;
}



//#line 3 "/home/rushhub/ugrc/common/SimpleAT.x10"
void SimpleAT::__fieldInitializers_SimpleAT() {
    this->FMGL(x) = ((x10_long)0ll);
    this->FMGL(D) = ::x10::lang::Place::places();
}
const ::x10aux::serialization_id_t SimpleAT::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::SimpleAT::_deserializer);

void SimpleAT::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(x));
    buf.write(this->FMGL(D));
    
}

::x10::lang::Reference* ::SimpleAT::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::SimpleAT* this_ = new (::x10aux::alloc_z< ::SimpleAT>()) ::SimpleAT();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void SimpleAT::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(x) = buf.read<x10_long>();
    FMGL(D) = buf.read< ::x10::lang::PlaceGroup*>();
}

::x10aux::RuntimeType SimpleAT::rtt;
void SimpleAT::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("SimpleAT",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String SimpleAT_Strings::sl__73("Value inside = ");
::x10::lang::String SimpleAT_Strings::sl__72(" says hello");
::x10::lang::String SimpleAT_Strings::sl__71("Value after = ");

::x10::lang::VoidFun_0_0::itable<SimpleAT__closure__7>SimpleAT__closure__7::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &SimpleAT__closure__7::__apply, &SimpleAT__closure__7::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry SimpleAT__closure__7::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &SimpleAT__closure__7::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t SimpleAT__closure__7::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(SimpleAT__closure__7::_deserialize);

/* END of SimpleAT */
/*************************************************/
