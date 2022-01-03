/*************************************************/
/* START of ExtendedAT */
#include <ExtendedAT.h>

#include <x10/lang/Long.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/lang/Rail.h>
#include <x10/lang/String.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/xrx/Runtime.h>
#include <x10/lang/Place.h>
#include <x10/lang/Fun_0_0.h>
#include <x10/xrx/Runtime__Profile.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef EXTENDEDAT__CLOSURE__7_CLOSURE
#define EXTENDEDAT__CLOSURE__7_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/Fun_0_0.h>
class ExtendedAT__closure__7 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::Fun_0_0<x10_long>::itable<ExtendedAT__closure__7> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    x10_long __apply(){
        
        //#line 23 "../ExtendedAT.x10"
        saved_this->FMGL(x) =   /* (1) After temp setup, funName = operator* */     /* (2.1) doremon */   ((saved_this->FMGL(x)) * (((x10_long)2ll)));
        
        //#line 24 "../ExtendedAT.x10"
          /* (1) After temp setup, funName = println */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println( /* printing actuals funName = println */  
                                                                                                            reinterpret_cast< ::x10::lang::Any*>(  /* (1) After temp setup, funName = operator+ */     /* (2.1) doremon */   ::x10::lang::String::__plus(  /* (1) After temp setup, funName = home */     /* (2.1) doremon */   ::x10::lang::Place::_make(::x10aux::here), (&::ExtendedAT_Strings::sl__275))))  /* (3) doremon funName = println */   ;
        
        //#line 25 "../ExtendedAT.x10"
          /* (1) After temp setup, funName = println */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println( /* printing actuals funName = println */  
                                                                                                            reinterpret_cast< ::x10::lang::Any*>(  /* (1) After temp setup, funName = operator+ */     /* (2.1) doremon */   ::x10::lang::String::__plus(  /* (1) After temp setup, funName = operator+ */     /* (2.1) doremon */   ::x10::lang::String::__plus((&::ExtendedAT_Strings::sl__276), saved_this->FMGL(x)), (&::ExtendedAT_Strings::sl__277))))  /* (3) doremon funName = println */   ;
        
        //#line 26 "../ExtendedAT.x10"
        return saved_this->FMGL(x);
        
    }
    
    // captured environment
    ::ExtendedAT* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        ExtendedAT__closure__7* storage = ::x10aux::alloc_z<ExtendedAT__closure__7>();
        buf.record_reference(storage);
        ::ExtendedAT* that_saved_this = buf.read< ::ExtendedAT*>();
        ExtendedAT__closure__7* this_ = new (storage) ExtendedAT__closure__7(that_saved_this);
        return this_;
    }
    
    ExtendedAT__closure__7(::ExtendedAT* saved_this) : saved_this(saved_this) { }
    
    ExtendedAT__closure__7(::x10::lang::PlaceGroup* zztemp0, x10_long zztemp1){ 
                                                                              this->saved_this = ::ExtendedAT::_make();
                                                                              this->saved_this->FMGL(D) = zztemp0;
                                                                              this->saved_this->FMGL(x) = zztemp1;
                                                                               }
                                                                              
                                                                              static const ::x10aux::serialization_id_t _serialization_id;
                                                                              
                                                                              static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_long> >(); }
                                                                              virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_long> >(); }
                                                                              
                                                                              const char* toNativeString() {
                                                                                  return "../ExtendedAT.x10:22-27";
                                                                              }
    
    };
    
    #endif // EXTENDEDAT__CLOSURE__7_CLOSURE
    
//#line 5 "../ExtendedAT.x10"

//#line 6 "../ExtendedAT.x10"

//#line 8 "../ExtendedAT.x10"
void ExtendedAT::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 10 "../ExtendedAT.x10"
    ::ExtendedAT* temp = ::ExtendedAT::_make();
    
    //#line 12 "../ExtendedAT.x10"
    ::x10aux::nullCheck(temp)->FMGL(x) = ((x10_long)100ll);
    
    //#line 14 "../ExtendedAT.x10"
      /* (1) After temp setup, funName = println */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println( /* printing actuals funName = println */  
                                                                                                        reinterpret_cast< ::x10::lang::Any*>(  /* (1) After temp setup, funName = operator+ */     /* (2.1) doremon */   ::x10::lang::String::__plus((&::ExtendedAT_Strings::sl__274), ::x10aux::nullCheck(temp)->FMGL(x))))  /* (3) doremon funName = println */   ;
    
    //#line 16 "../ExtendedAT.x10"
      /* (1) After temp setup, funName = double */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10aux::nullCheck(temp)->_kwd__double( /* printing actuals funName = double */  )  /* (3) doremon funName = double */   ;
}

//#line 19 "../ExtendedAT.x10"
void ExtendedAT::_kwd__double() {
    
    //#line 21 "../ExtendedAT.x10"
    ::x10::lang::PlaceGroup* zztemp0 = this->FMGL(D);
    x10_long zztemp1 = this->FMGL(x);

    this->FMGL(x) = this->FMGL(x);


x10::lang::Place tmpPLACE;
        bool flag = false;
        do {
        if (flag) { 
        if (false) {

this->FMGL(x) =   /* (1) After temp setup, funName = evalAt */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::xrx::Runtime::evalAt< x10_long >( /* printing actuals funName = evalAt */  
/* (1) After temp setup, funName = next */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10aux::nullCheck(this->FMGL(D))->next( /* printing actuals funName = next */  
/* (1) After temp setup, funName = next */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10aux::nullCheck(this->FMGL(D))->next( /* printing actuals funName = next */  
/* (1) After temp setup, funName = home */     /* (2.1) doremon */   ::x10::lang::Place::_make(::x10aux::here))  /* (3) doremon funName = next */   )  /* (3) doremon funName = next */   ,
/* Into Closure_c !!  */   /* streams popped  */   /*  Creating closure instantiations ... ? */    /* template arguments =   */reinterpret_cast< ::x10::lang::Fun_0_0<x10_long>*>((new (::x10aux::alloc< ::x10::lang::Fun_0_0<x10_long> >(sizeof(ExtendedAT__closure__7)))ExtendedAT__closure__7(  /* cname = ExtendedAT__closure__7 */  zztemp0, zztemp1))),
::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))  /* (3) doremon funName = evalAt */   ;

        } else {
        this->FMGL(x) =  
        ::x10::lang::Fun_0_0<x10_long>::__apply(::x10aux::nullCheck(   ::x10::xrx::Runtime::deepCopy< ::x10::lang::Fun_0_0<x10_long>* >( 
 reinterpret_cast< ::x10::lang::Fun_0_0<x10_long>*>(new ExtendedAT__closure__7(zztemp0, zztemp1))
         ))); 

        }

        break;

    } else {

        tmpPLACE =                ::x10aux::nullCheck(this->FMGL(D))->next(                  ::x10aux::nullCheck(this->FMGL(D))->next(             ::x10::lang::Place::_make(::x10aux::here))     )     ;
        flag = true;

    }

    } while(true);

    //#line 28 "../ExtendedAT.x10"
      /* (1) After temp setup, funName = println */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println( /* printing actuals funName = println */  
                                                                                                        reinterpret_cast< ::x10::lang::Any*>(  /* (1) After temp setup, funName = operator+ */     /* (2.1) doremon */   ::x10::lang::String::__plus(  /* (1) After temp setup, funName = operator+ */     /* (2.1) doremon */   ::x10::lang::String::__plus((&::ExtendedAT_Strings::sl__278), this->FMGL(x)), (&::ExtendedAT_Strings::sl__277))))  /* (3) doremon funName = println */   ;
}

//#line 3 "../ExtendedAT.x10"
::ExtendedAT* ExtendedAT::ExtendedAT____this__ExtendedAT(
  ) {
    return this;
    
}

//#line 4 "../ExtendedAT.x10"
void ExtendedAT::_constructor() {
    
    //#line 3 "../ExtendedAT.x10"
      /* (1) After temp setup, funName = __fieldInitializers_ExtendedAT */     /* (2.1) doremon */     /* (2.2) doremon */   this->ExtendedAT::__fieldInitializers_ExtendedAT( /* printing actuals funName = __fieldInitializers_ExtendedAT */  )  /* (3) doremon funName = __fieldInitializers_ExtendedAT */   ;
}
::ExtendedAT* ExtendedAT::_make() {
    ::ExtendedAT* this_ = new (::x10aux::alloc_z< ::ExtendedAT>()) ::ExtendedAT();
    this_->_constructor();
    return this_;
}



//#line 3 "../ExtendedAT.x10"
void ExtendedAT::__fieldInitializers_ExtendedAT() {
    this->FMGL(x) = ((x10_long)0ll);
    this->FMGL(D) =   /* (1) After temp setup, funName = places */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::lang::Place::places( /* printing actuals funName = places */  )  /* (3) doremon funName = places */   ;
}
const ::x10aux::serialization_id_t ExtendedAT::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::ExtendedAT::_deserializer);

void ExtendedAT::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(x));
    buf.write(this->FMGL(D));
    
}

::x10::lang::Reference* ::ExtendedAT::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::ExtendedAT* this_ = new (::x10aux::alloc_z< ::ExtendedAT>()) ::ExtendedAT();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void ExtendedAT::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(x) = buf.read<x10_long>();
    FMGL(D) = buf.read< ::x10::lang::PlaceGroup*>();
}

::x10aux::RuntimeType ExtendedAT::rtt;
void ExtendedAT::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("ExtendedAT",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String ExtendedAT_Strings::sl__274("Value before AT (x) = ");
::x10::lang::String ExtendedAT_Strings::sl__278("Value after AT = ");
::x10::lang::String ExtendedAT_Strings::sl__277(" (expected = 2x)");
::x10::lang::String ExtendedAT_Strings::sl__276("Value inside AT = ");
::x10::lang::String ExtendedAT_Strings::sl__275(" says hello");

::x10::lang::Fun_0_0<x10_long>::itable<ExtendedAT__closure__7>ExtendedAT__closure__7::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &ExtendedAT__closure__7::__apply, &ExtendedAT__closure__7::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry ExtendedAT__closure__7::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::Fun_0_0<x10_long> >, &ExtendedAT__closure__7::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t ExtendedAT__closure__7::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(ExtendedAT__closure__7::_deserialize);

/* END of ExtendedAT */
/*************************************************/
