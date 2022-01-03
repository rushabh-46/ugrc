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
        
        //#line 25 "/home/rushhub/ugrc/common/SimpleAT.x10"
        saved_this->FMGL(x) = ((x10_long)0ll);
        
        //#line 26 "/home/rushhub/ugrc/common/SimpleAT.x10"
          /* (1) After temp setup, funName = println */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println( /* printing actuals funName = println */  
                                                                                                            reinterpret_cast< ::x10::lang::Any*>(  /* (1) After temp setup, funName = operator+ */     /* (2.1) doremon */   ::x10::lang::String::__plus(  /* (1) After temp setup, funName = home */     /* (2.1) doremon */   ::x10::lang::Place::_make(::x10aux::here), (&::SimpleAT_Strings::sl__90))))  /* (3) doremon funName = println */   ;
        
        //#line 27 "/home/rushhub/ugrc/common/SimpleAT.x10"
          /* (1) After temp setup, funName = println */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println( /* printing actuals funName = println */  
                                                                                                            reinterpret_cast< ::x10::lang::Any*>(  /* (1) After temp setup, funName = operator+ */     /* (2.1) doremon */   ::x10::lang::String::__plus((&::SimpleAT_Strings::sl__91), saved_this->FMGL(x))))  /* (3) doremon funName = println */   ;
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
    
    SimpleAT__closure__7(::x10::lang::PlaceGroup* zztemp0, x10_long zztemp1){ 
                                                                            this->saved_this = ::SimpleAT::_make();
                                                                            this->saved_this->FMGL(D) = zztemp0;
                                                                            this->saved_this->FMGL(x) = zztemp1;
                                                                             }
                                                                            
                                                                            static const ::x10aux::serialization_id_t _serialization_id;
                                                                            
                                                                            static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
                                                                            virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
                                                                            
                                                                            const char* toNativeString() {
                                                                                return "/home/rushhub/ugrc/common/SimpleAT.x10:24-28";
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
      /* (1) After temp setup, funName = println */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println( /* printing actuals funName = println */  
                                                                                                        reinterpret_cast< ::x10::lang::Any*>(  /* (1) After temp setup, funName = operator+ */     /* (2.1) doremon */   ::x10::lang::String::__plus((&::SimpleAT_Strings::sl__88), ::x10aux::nullCheck(temp)->FMGL(x))))  /* (3) doremon funName = println */   ;
    
    //#line 16 "/home/rushhub/ugrc/common/SimpleAT.x10"
      /* (1) After temp setup, funName = setZeroUsingAT */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10aux::nullCheck(temp)->setZeroUsingAT( /* printing actuals funName = setZeroUsingAT */  )  /* (3) doremon funName = setZeroUsingAT */   ;
    
    //#line 18 "/home/rushhub/ugrc/common/SimpleAT.x10"
      /* (1) After temp setup, funName = println */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println( /* printing actuals funName = println */  
                                                                                                        reinterpret_cast< ::x10::lang::Any*>(  /* (1) After temp setup, funName = operator+ */     /* (2.1) doremon */   ::x10::lang::String::__plus((&::SimpleAT_Strings::sl__89), ::x10aux::nullCheck(temp)->FMGL(x))))  /* (3) doremon funName = println */   ;
}

//#line 21 "/home/rushhub/ugrc/common/SimpleAT.x10"
void SimpleAT::setZeroUsingAT() {
    {
        
        //#line 23 "/home/rushhub/ugrc/common/SimpleAT.x10"
          /*  current class: SimpleAT, current method: setZeroUsingAT  */  ::x10::lang::PlaceGroup* zztemp0 = this->FMGL(D);
        x10_long zztemp1 = this->FMGL(x);
          /* (1) After temp setup, funName = runAt */     /*  zztemp0, zztemp1  id = 6  */  
        x10::lang::Place tmpPLACE;
        bool flag = false;
        do {
        if (flag) { 
        if (true) { 
    /* (2.1) doremon */     /* (2.2) doremon */   ::x10::xrx::Runtime::runAt( /* printing actuals funName = runAt */  
    /* (1) After temp setup, funName = next */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10aux::nullCheck(this->FMGL(D))->next( /* printing actuals funName = next */  
    /* (1) After temp setup, funName = next */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10aux::nullCheck(this->FMGL(D))->next( /* printing actuals funName = next */  
    /* (1) After temp setup, funName = home */     /* (2.1) doremon */   ::x10::lang::Place::_make(::x10aux::here))  /* (3) doremon funName = next */   )  /* (3) doremon funName = next */   ,
    /* Into Closure_c !!  */   /* streams popped  */   /*  Creating closure instantiations ... ? */    /* template arguments =   */reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(SimpleAT__closure__7)))SimpleAT__closure__7(  /* cname = SimpleAT__closure__7 */  zztemp0, zztemp1))),
    ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)) /* stopping streaming now */  
    //   /* (1) After temp setup, funName = next */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10aux::nullCheck(this->FMGL(D))->next( /* printing actuals funName = next */    /* (1) After temp setup, funName = next */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10aux::nullCheck(this->FMGL(D))->next( /* printing actuals funName = next */    /* (1) After temp setup, funName = home */     /* (2.1) doremon */   ::x10::lang::Place::_make(::x10aux::here))  /* (3) doremon funName = next */   )  /* (3) doremon funName = next */   , /* Into Closure_c !!  */  #ifndef SIMPLEAT__CLOSURE__7_CLOSURE#define SIMPLEAT__CLOSURE__7_CLOSURE#include <x10/lang/Closure.h>#include <x10/lang/VoidFun_0_0.h>class SimpleAT__closure__7 : public ::x10::lang::Closure {public:static ::x10::lang::VoidFun_0_0::itable<SimpleAT__closure__7> _itable;static ::x10aux::itable_entry _itables[2];virtual ::x10aux::itable_entry* _getITables() { return _itables; }void __apply(){saved_this->FMGL(x) =((x10_long)0ll);  /* (1) After temp setup, funName = println */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println( /* printing actuals funName = println */  reinterpret_cast< ::x10::lang::Any*>(  /* (1) After temp setup, funName = operator+ */     /* (2.1) doremon */   ::x10::lang::String::__plus(  /* (1) After temp setup, funName = home */     /* (2.1) doremon */   ::x10::lang::Place::_make(::x10aux::here), (&::SimpleAT_Strings::sl__90))))  /* (3) doremon funName = println */   ;  /* (1) After temp setup, funName = println */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println( /* printing actuals funName = println */  reinterpret_cast< ::x10::lang::Any*>(  /* (1) After temp setup, funName = operator+ */     /* (2.1) doremon */   ::x10::lang::String::__plus((&::SimpleAT_Strings::sl__91), saved_this->FMGL(x))))  /* (3) doremon funName = println */   ;}// captured environment::SimpleAT* saved_this;::x10aux::serialization_id_t _get_serialization_id() {return _serialization_id;}void _serialize_body(::x10aux::serialization_buffer &buf) {buf.write(this->saved_this);}static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {::SimpleAT* that_saved_this = buf.read< ::SimpleAT*>();SimpleAT__closure__7* this_ = new (storage) SimpleAT__closure__7(that_saved_this);return this_;}SimpleAT__closure__7(::SimpleAT* saved_this) : saved_this(saved_this) { }SimpleAT__closure__7(::x10::lang::PlaceGroup* zztemp0, x10_long zztemp1){ this->saved_this = ::SimpleAT::_make();this->saved_this->FMGL(D) = zztemp0;this->saved_this->FMGL(x) = zztemp1; }static const ::x10aux::serialization_id_t _serialization_id;static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }const char* toNativeString() {return "/home/rushhub/ugrc/common/SimpleAT.x10:24-28";}};#endif // SIMPLEAT__CLOSURE__7_CLOSURE /* streams popped  */   /*  Creating closure instantiations ... ? */    /* template arguments =   */reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(SimpleAT__closure__7)))SimpleAT__closure__7(  /* cname = SimpleAT__closure__7 */  zztemp0, zztemp1))),::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)) /* stopping streaming now */  
    )  /* (3) doremon funName = runAt */   ;
          } else { 
         // SimpleAT__closure__7* sampleTemp = new SimpleAT__closure__7(zztemp0, zztemp1);
         // sampleTemp->__apply(); 
        ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(   ::x10::xrx::Runtime::deepCopy< ::x10::lang::VoidFun_0_0* >( 
         reinterpret_cast< ::x10::lang::VoidFun_0_0*>(new SimpleAT__closure__7(zztemp0, zztemp1))
         ))); 
        }
        break;
        }
        else { 
        tmpPLACE =                ::x10aux::nullCheck(this->FMGL(D))->next(                  ::x10aux::nullCheck(this->FMGL(D))->next(             ::x10::lang::Place::_make(::x10aux::here))     )     ;
        flag = true;
        }
        } while(true);
    }
}

//#line 3 "/home/rushhub/ugrc/common/SimpleAT.x10"
::SimpleAT* SimpleAT::SimpleAT____this__SimpleAT() {
    return this;
    
}

//#line 4 "/home/rushhub/ugrc/common/SimpleAT.x10"
void SimpleAT::_constructor() {
    
    //#line 3 "/home/rushhub/ugrc/common/SimpleAT.x10"
      /* (1) After temp setup, funName = __fieldInitializers_SimpleAT */     /* (2.1) doremon */     /* (2.2) doremon */   this->SimpleAT::__fieldInitializers_SimpleAT( /* printing actuals funName = __fieldInitializers_SimpleAT */  )  /* (3) doremon funName = __fieldInitializers_SimpleAT */   ;
}
::SimpleAT* SimpleAT::_make() {
    ::SimpleAT* this_ = new (::x10aux::alloc_z< ::SimpleAT>()) ::SimpleAT();
    this_->_constructor();
    return this_;
}



//#line 3 "/home/rushhub/ugrc/common/SimpleAT.x10"
void SimpleAT::__fieldInitializers_SimpleAT() {
    this->FMGL(x) = ((x10_long)0ll);
    this->FMGL(D) =   /* (1) After temp setup, funName = places */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::lang::Place::places( /* printing actuals funName = places */  )  /* (3) doremon funName = places */   ;
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

::x10::lang::String SimpleAT_Strings::sl__88("Value before AT = ");
::x10::lang::String SimpleAT_Strings::sl__89("Value after AT = ");
::x10::lang::String SimpleAT_Strings::sl__91("Value inside AT = ");
::x10::lang::String SimpleAT_Strings::sl__90(" says hello");

::x10::lang::VoidFun_0_0::itable<SimpleAT__closure__7>SimpleAT__closure__7::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &SimpleAT__closure__7::__apply, &SimpleAT__closure__7::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry SimpleAT__closure__7::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &SimpleAT__closure__7::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t SimpleAT__closure__7::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(SimpleAT__closure__7::_deserialize);

/* END of SimpleAT */
/*************************************************/
