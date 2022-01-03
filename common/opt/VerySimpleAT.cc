/*************************************************/
/* START of VerySimpleAT */
#include <VerySimpleAT.h>

#include <x10/lang/Long.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/lang/Rail.h>
#include <x10/lang/String.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/xrx/Runtime.h>
#include <x10/lang/Place.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>

//#line 5 "/home/rushhub/ugrc/common/VerySimpleAT.x10"

//#line 6 "/home/rushhub/ugrc/common/VerySimpleAT.x10"

//#line 8 "/home/rushhub/ugrc/common/VerySimpleAT.x10"
void VerySimpleAT::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 10 "/home/rushhub/ugrc/common/VerySimpleAT.x10"
    ::VerySimpleAT* temp = ::VerySimpleAT::_make();
    
    //#line 12 "/home/rushhub/ugrc/common/VerySimpleAT.x10"
    ::x10aux::nullCheck(temp)->FMGL(x) = ((x10_long)100ll);
    
    //#line 13 "/home/rushhub/ugrc/common/VerySimpleAT.x10"
    ::x10aux::nullCheck(temp)->setZero();
    
    //#line 14 "/home/rushhub/ugrc/common/VerySimpleAT.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(reinterpret_cast< ::x10::lang::Any*>(::x10::lang::String::__plus((&::VerySimpleAT_Strings::sl__66), ::x10aux::nullCheck(temp)->FMGL(x))));
}

//#line 17 "/home/rushhub/ugrc/common/VerySimpleAT.x10"
void VerySimpleAT::setZero() {
    
    //#line 20 "/home/rushhub/ugrc/common/VerySimpleAT.x10"
    this->FMGL(x) = ((x10_long)0ll);
    
    //#line 21 "/home/rushhub/ugrc/common/VerySimpleAT.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
        reinterpret_cast< ::x10::lang::Any*>(
            ::x10::lang::String::__plus(::x10::lang::Place::_make(::x10aux::here),
                                            (&::VerySimpleAT_Strings::sl__67)
                                        )));
    
    //#line 22 "/home/rushhub/ugrc/common/VerySimpleAT.x10"
    ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
        reinterpret_cast< ::x10::lang::Any*>(
            ::x10::lang::String::__plus((&::VerySimpleAT_Strings::sl__68), 
                                            this->FMGL(x)
                                        )));
}

//#line 3 "/home/rushhub/ugrc/common/VerySimpleAT.x10"
::VerySimpleAT* VerySimpleAT::VerySimpleAT____this__VerySimpleAT() {
    return this;
    
}
void VerySimpleAT::_constructor() {
    this->VerySimpleAT::__fieldInitializers_VerySimpleAT();
}
::VerySimpleAT* VerySimpleAT::_make() {
    ::VerySimpleAT* this_ = new (::x10aux::alloc_z< ::VerySimpleAT>()) ::VerySimpleAT();
    this_->_constructor();
    return this_;
}


void VerySimpleAT::__fieldInitializers_VerySimpleAT() {
    this->FMGL(x) = ((x10_long)0ll);
    this->FMGL(D) = ::x10::lang::Place::places();
}
const ::x10aux::serialization_id_t VerySimpleAT::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::VerySimpleAT::_deserializer);

void VerySimpleAT::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(x));
    buf.write(this->FMGL(D));
    
}

::x10::lang::Reference* ::VerySimpleAT::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::VerySimpleAT* this_ = new (::x10aux::alloc_z< ::VerySimpleAT>()) ::VerySimpleAT();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void VerySimpleAT::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(x) = buf.read<x10_long>();
    FMGL(D) = buf.read< ::x10::lang::PlaceGroup*>();
}

::x10aux::RuntimeType VerySimpleAT::rtt;
void VerySimpleAT::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("VerySimpleAT",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String VerySimpleAT_Strings::sl__68("Value inside = ");
::x10::lang::String VerySimpleAT_Strings::sl__67(" says hello");
::x10::lang::String VerySimpleAT_Strings::sl__66("Value after = ");

/* END of VerySimpleAT */
/*************************************************/
