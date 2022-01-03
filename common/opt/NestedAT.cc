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
#ifndef NESTEDAT__CLOSURE__21_CLOSURE
#define NESTEDAT__CLOSURE__21_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class NestedAT__closure__21 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<NestedAT__closure__21> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 33 "/home/rushhub/ugrc/common/NestedAT.x10"
        saved_this->FMGL(x) =   /* (1) After temp setup, funName = operator/ */     /* (2.1) doremon */   ((saved_this->FMGL(x)) / ::x10aux::zeroCheck(((x10_long)2ll)));
        
        //#line 34 "/home/rushhub/ugrc/common/NestedAT.x10"
          /* (1) After temp setup, funName = println */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println( /* printing actuals funName = println */  
                                                                                                            reinterpret_cast< ::x10::lang::Any*>(  /* (1) After temp setup, funName = operator+ */     /* (2.1) doremon */   ::x10::lang::String::__plus(  /* (1) After temp setup, funName = home */     /* (2.1) doremon */   ::x10::lang::Place::_make(::x10aux::here), (&::NestedAT_Strings::sl__716))))  /* (3) doremon funName = println */   ;
        
        //#line 35 "/home/rushhub/ugrc/common/NestedAT.x10"
          /* (1) After temp setup, funName = println */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println( /* printing actuals funName = println */  
                                                                                                            reinterpret_cast< ::x10::lang::Any*>(  /* (1) After temp setup, funName = operator+ */     /* (2.1) doremon */   ::x10::lang::String::__plus(  /* (1) After temp setup, funName = operator+ */     /* (2.1) doremon */   ::x10::lang::String::__plus((&::NestedAT_Strings::sl__717), saved_this->FMGL(x)), (&::NestedAT_Strings::sl__718))))  /* (3) doremon funName = println */   ;
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
        NestedAT__closure__21* storage = ::x10aux::alloc_z<NestedAT__closure__21>();
        buf.record_reference(storage);
        ::NestedAT* that_saved_this = buf.read< ::NestedAT*>();
        NestedAT__closure__21* this_ = new (storage) NestedAT__closure__21(that_saved_this);
        return this_;
    }
    
    NestedAT__closure__21(::NestedAT* saved_this) : saved_this(saved_this) { }
    
    NestedAT__closure__21(::x10::lang::PlaceGroup* zztemp4, x10_long zztemp5){ 
                                                                             this->saved_this = ::NestedAT::_make();
                                                                             this->saved_this->FMGL(D) = zztemp4;
                                                                             this->saved_this->FMGL(x) = zztemp5;
                                                                              }
                                                                             
                                                                             static const ::x10aux::serialization_id_t _serialization_id;
                                                                             
                                                                             static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
                                                                             virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
                                                                             
                                                                             const char* toNativeString() {
                                                                                 return "/home/rushhub/ugrc/common/NestedAT.x10:32-36";
                                                                             }
    
    };
    
    #endif // NESTEDAT__CLOSURE__21_CLOSURE
    #ifndef NESTEDAT__CLOSURE__20_CLOSURE
#define NESTEDAT__CLOSURE__20_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class NestedAT__closure__20 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<NestedAT__closure__20> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 29 "/home/rushhub/ugrc/common/NestedAT.x10"
        saved_this->FMGL(x) =   /* (1) After temp setup, funName = operator/ */     /* (2.1) doremon */   ((saved_this->FMGL(x)) / ::x10aux::zeroCheck(((x10_long)2ll)));
        
        //#line 30 "/home/rushhub/ugrc/common/NestedAT.x10"
          /* (1) After temp setup, funName = println */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println( /* printing actuals funName = println */  
                                                                                                            reinterpret_cast< ::x10::lang::Any*>(  /* (1) After temp setup, funName = operator+ */     /* (2.1) doremon */   ::x10::lang::String::__plus(  /* (1) After temp setup, funName = operator+ */     /* (2.1) doremon */   ::x10::lang::String::__plus((&::NestedAT_Strings::sl__714), saved_this->FMGL(x)), (&::NestedAT_Strings::sl__715))))  /* (3) doremon funName = println */   ;
        {
            
            //#line 31 "/home/rushhub/ugrc/common/NestedAT.x10"
              /*  current class: NestedAT, current method: divide  */  ::x10::lang::PlaceGroup* zztemp4 = saved_this->FMGL(D);
            x10_long zztemp5 = saved_this->FMGL(x);
              /* (1) After temp setup, funName = runAt */     /*  zztemp4, zztemp5  id = 20  */  
            x10::lang::Place tmpPLACE;
            bool flag = false;
            do {
            if (flag) { 
            if (true) { 
              /* (2.1) doremon */     /* (2.2) doremon */   ::x10::xrx::Runtime::runAt( /* printing actuals funName = runAt */  
                                                                /* (1) After temp setup, funName = next */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10aux::nullCheck(saved_this->FMGL(D))->next( /* printing actuals funName = next */  
                                                                                                                                                                 /* (1) After temp setup, funName = home */     /* (2.1) doremon */   ::x10::lang::Place::_make(::x10aux::here))  /* (3) doremon funName = next */   ,
                                                               /* Into Closure_c !!  */   /* streams popped  */   /*  Creating closure instantiations ... ? */    /* template arguments =   */reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(NestedAT__closure__21)))NestedAT__closure__21(  /* cname = NestedAT__closure__21 */  zztemp4, zztemp5))),
                                                              ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)) /* stopping streaming now */  
                                                             //   /* (1) After temp setup, funName = next */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10aux::nullCheck(saved_this->FMGL(D))->next( /* printing actuals funName = next */    /* (1) After temp setup, funName = home */     /* (2.1) doremon */   ::x10::lang::Place::_make(::x10aux::here))  /* (3) doremon funName = next */   , /* Into Closure_c !!  */  #ifndef NESTEDAT__CLOSURE__21_CLOSURE#define NESTEDAT__CLOSURE__21_CLOSURE#include <x10/lang/Closure.h>#include <x10/lang/VoidFun_0_0.h>class NestedAT__closure__21 : public ::x10::lang::Closure {public:static ::x10::lang::VoidFun_0_0::itable<NestedAT__closure__21> _itable;static ::x10aux::itable_entry _itables[2];virtual ::x10aux::itable_entry* _getITables() { return _itables; }void __apply(){saved_this->FMGL(x) =  /* (1) After temp setup, funName = operator/ */     /* (2.1) doremon */   ((saved_this->FMGL(x)) / ::x10aux::zeroCheck(((x10_long)2ll)));  /* (1) After temp setup, funName = println */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println( /* printing actuals funName = println */  reinterpret_cast< ::x10::lang::Any*>(  /* (1) After temp setup, funName = operator+ */     /* (2.1) doremon */   ::x10::lang::String::__plus(  /* (1) After temp setup, funName = home */     /* (2.1) doremon */   ::x10::lang::Place::_make(::x10aux::here), (&::NestedAT_Strings::sl__716))))  /* (3) doremon funName = println */   ;  /* (1) After temp setup, funName = println */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println( /* printing actuals funName = println */  reinterpret_cast< ::x10::lang::Any*>(  /* (1) After temp setup, funName = operator+ */     /* (2.1) doremon */   ::x10::lang::String::__plus(  /* (1) After temp setup, funName = operator+ */     /* (2.1) doremon */   ::x10::lang::String::__plus((&::NestedAT_Strings::sl__717), saved_this->FMGL(x)), (&::NestedAT_Strings::sl__718))))  /* (3) doremon funName = println */   ;}// captured environment::NestedAT* saved_this;::x10aux::serialization_id_t _get_serialization_id() {return _serialization_id;}void _serialize_body(::x10aux::serialization_buffer &buf) {buf.write(this->saved_this);}static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {::NestedAT* that_saved_this = buf.read< ::NestedAT*>();NestedAT__closure__21* this_ = new (storage) NestedAT__closure__21(that_saved_this);return this_;}NestedAT__closure__21(::NestedAT* saved_this) : saved_this(saved_this) { }NestedAT__closure__21(::x10::lang::PlaceGroup* zztemp4, x10_long zztemp5){ this->saved_this = ::NestedAT::_make();this->saved_this->FMGL(D) = zztemp4;this->saved_this->FMGL(x) = zztemp5; }static const ::x10aux::serialization_id_t _serialization_id;static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }const char* toNativeString() {return "/home/rushhub/ugrc/common/NestedAT.x10:32-36";}};#endif // NESTEDAT__CLOSURE__21_CLOSURE /* streams popped  */   /*  Creating closure instantiations ... ? */    /* template arguments =   */reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(NestedAT__closure__21)))NestedAT__closure__21(  /* cname = NestedAT__closure__21 */  zztemp4, zztemp5))),::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)) /* stopping streaming now */  
                                                            )  /* (3) doremon funName = runAt */   ;
              } else { 
             // NestedAT__closure__21* sampleTemp = new NestedAT__closure__21(zztemp4, zztemp5);
             // sampleTemp->__apply(); 
            ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(   ::x10::xrx::Runtime::deepCopy< ::x10::lang::VoidFun_0_0* >( 
             reinterpret_cast< ::x10::lang::VoidFun_0_0*>(new NestedAT__closure__21(zztemp4, zztemp5))
             ))); 
            }
            break;
            }
            else { 
            tmpPLACE =                ::x10aux::nullCheck(saved_this->FMGL(D))->next(             ::x10::lang::Place::_make(::x10aux::here))     ;
            flag = true;
            }
            } while(true);
        }
        
        //#line 37 "/home/rushhub/ugrc/common/NestedAT.x10"
          /* (1) After temp setup, funName = println */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println( /* printing actuals funName = println */  
                                                                                                            reinterpret_cast< ::x10::lang::Any*>(  /* (1) After temp setup, funName = operator+ */     /* (2.1) doremon */   ::x10::lang::String::__plus(  /* (1) After temp setup, funName = operator+ */     /* (2.1) doremon */   ::x10::lang::String::__plus((&::NestedAT_Strings::sl__714), saved_this->FMGL(x)), (&::NestedAT_Strings::sl__715))))  /* (3) doremon funName = println */   ;
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
        NestedAT__closure__20* storage = ::x10aux::alloc_z<NestedAT__closure__20>();
        buf.record_reference(storage);
        ::NestedAT* that_saved_this = buf.read< ::NestedAT*>();
        NestedAT__closure__20* this_ = new (storage) NestedAT__closure__20(that_saved_this);
        return this_;
    }
    
    NestedAT__closure__20(::NestedAT* saved_this) : saved_this(saved_this) { }
    
    NestedAT__closure__20(::NestedAT* saved_this,x10_long zzztemp){ 
                                                                  this->saved_this = saved_this;
                                                                   }
                                                                  
                                                                  static const ::x10aux::serialization_id_t _serialization_id;
                                                                  
                                                                  static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
                                                                  virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
                                                                  
                                                                  const char* toNativeString() {
                                                                      return "/home/rushhub/ugrc/common/NestedAT.x10:28-38";
                                                                  }
    
    };
    
    #endif // NESTEDAT__CLOSURE__20_CLOSURE
    #ifndef NESTEDAT__CLOSURE__19_CLOSURE
#define NESTEDAT__CLOSURE__19_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class NestedAT__closure__19 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<NestedAT__closure__19> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 25 "/home/rushhub/ugrc/common/NestedAT.x10"
        saved_this->FMGL(x) =   /* (1) After temp setup, funName = operator/ */     /* (2.1) doremon */   ((saved_this->FMGL(x)) / ::x10aux::zeroCheck(((x10_long)2ll)));
        
        //#line 26 "/home/rushhub/ugrc/common/NestedAT.x10"
          /* (1) After temp setup, funName = println */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println( /* printing actuals funName = println */  
                                                                                                            reinterpret_cast< ::x10::lang::Any*>(  /* (1) After temp setup, funName = operator+ */     /* (2.1) doremon */   ::x10::lang::String::__plus(  /* (1) After temp setup, funName = operator+ */     /* (2.1) doremon */   ::x10::lang::String::__plus((&::NestedAT_Strings::sl__712), saved_this->FMGL(x)), (&::NestedAT_Strings::sl__713))))  /* (3) doremon funName = println */   ;
        {
            
            //#line 27 "/home/rushhub/ugrc/common/NestedAT.x10"
              /*  current class: NestedAT, current method: divide  */  ::x10::lang::PlaceGroup* zztemp2 = saved_this->FMGL(D);
            x10_long zztemp3 = saved_this->FMGL(x);
              /* (1) After temp setup, funName = runAt */     /*  zztemp2, zztemp3  id = 19  */  
            x10::lang::Place tmpPLACE;
            bool flag = false;
            do {
            if (flag) { 
            if (true) { 
              /* (2.1) doremon */     /* (2.2) doremon */   ::x10::xrx::Runtime::runAt( /* printing actuals funName = runAt */  
                                                                /* (1) After temp setup, funName = next */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10aux::nullCheck(saved_this->FMGL(D))->next( /* printing actuals funName = next */  
                                                                                                                                                                 /* (1) After temp setup, funName = home */     /* (2.1) doremon */   ::x10::lang::Place::_make(::x10aux::here))  /* (3) doremon funName = next */   ,
                                                               /* Into Closure_c !!  */   /* streams popped  */   /*  Creating closure instantiations ... ? */    /* template arguments =   */reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(NestedAT__closure__20)))NestedAT__closure__20(  /* cname = NestedAT__closure__20 */  saved_this))),
                                                              ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)) /* stopping streaming now */  
                                                             //   /* (1) After temp setup, funName = next */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10aux::nullCheck(saved_this->FMGL(D))->next( /* printing actuals funName = next */    /* (1) After temp setup, funName = home */     /* (2.1) doremon */   ::x10::lang::Place::_make(::x10aux::here))  /* (3) doremon funName = next */   , /* Into Closure_c !!  */  #ifndef NESTEDAT__CLOSURE__20_CLOSURE#define NESTEDAT__CLOSURE__20_CLOSURE#include <x10/lang/Closure.h>#include <x10/lang/VoidFun_0_0.h>class NestedAT__closure__20 : public ::x10::lang::Closure {public:static ::x10::lang::VoidFun_0_0::itable<NestedAT__closure__20> _itable;static ::x10aux::itable_entry _itables[2];virtual ::x10aux::itable_entry* _getITables() { return _itables; }void __apply(){saved_this->FMGL(x) =  /* (1) After temp setup, funName = operator/ */     /* (2.1) doremon */   ((saved_this->FMGL(x)) / ::x10aux::zeroCheck(((x10_long)2ll)));  /* (1) After temp setup, funName = println */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println( /* printing actuals funName = println */  reinterpret_cast< ::x10::lang::Any*>(  /* (1) After temp setup, funName = operator+ */     /* (2.1) doremon */   ::x10::lang::String::__plus(  /* (1) After temp setup, funName = operator+ */     /* (2.1) doremon */   ::x10::lang::String::__plus((&::NestedAT_Strings::sl__714), saved_this->FMGL(x)), (&::NestedAT_Strings::sl__715))))  /* (3) doremon funName = println */   ;{  /*  current class: NestedAT, current method: divide  */  ::x10::lang::PlaceGroup* zztemp4 = saved_this->FMGL(D);x10_long zztemp5 = saved_this->FMGL(x);  /* (1) After temp setup, funName = runAt */     /*  zztemp4, zztemp5  id = 20  */  x10::lang::Place tmpPLACE;bool flag = false;do {if (flag) { if (true) {   /* (2.1) doremon */     /* (2.2) doremon */   ::x10::xrx::Runtime::runAt( /* printing actuals funName = runAt */  
                                                            )  /* (3) doremon funName = runAt */   ;
              } else { 
             // NestedAT__closure__20* sampleTemp = new NestedAT__closure__20(saved_this);
             // sampleTemp->__apply(); 
            ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(   ::x10::xrx::Runtime::deepCopy< ::x10::lang::VoidFun_0_0* >( 
             reinterpret_cast< ::x10::lang::VoidFun_0_0*>(new NestedAT__closure__20(saved_this))
             ))); 
            }
            break;
            }
            else { 
            tmpPLACE =                ::x10aux::nullCheck(saved_this->FMGL(D))->next(             ::x10::lang::Place::_make(::x10aux::here))     ;
            flag = true;
            }
            } while(true);
        }
        
        //#line 39 "/home/rushhub/ugrc/common/NestedAT.x10"
          /* (1) After temp setup, funName = println */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println( /* printing actuals funName = println */  
                                                                                                            reinterpret_cast< ::x10::lang::Any*>(  /* (1) After temp setup, funName = operator+ */     /* (2.1) doremon */   ::x10::lang::String::__plus(  /* (1) After temp setup, funName = operator+ */     /* (2.1) doremon */   ::x10::lang::String::__plus((&::NestedAT_Strings::sl__712), saved_this->FMGL(x)), (&::NestedAT_Strings::sl__713))))  /* (3) doremon funName = println */   ;
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
        NestedAT__closure__19* storage = ::x10aux::alloc_z<NestedAT__closure__19>();
        buf.record_reference(storage);
        ::NestedAT* that_saved_this = buf.read< ::NestedAT*>();
        NestedAT__closure__19* this_ = new (storage) NestedAT__closure__19(that_saved_this);
        return this_;
    }
    
    NestedAT__closure__19(::NestedAT* saved_this) : saved_this(saved_this) { }
    
    NestedAT__closure__19(::NestedAT* saved_this,x10_long zzztemp){ 
                                                                  this->saved_this = saved_this;
                                                                   }
                                                                  
                                                                  static const ::x10aux::serialization_id_t _serialization_id;
                                                                  
                                                                  static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
                                                                  virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
                                                                  
                                                                  const char* toNativeString() {
                                                                      return "/home/rushhub/ugrc/common/NestedAT.x10:24-40";
                                                                  }
    
    };
    
    #endif // NESTEDAT__CLOSURE__19_CLOSURE
    
//#line 5 "/home/rushhub/ugrc/common/NestedAT.x10"

//#line 6 "/home/rushhub/ugrc/common/NestedAT.x10"

//#line 8 "/home/rushhub/ugrc/common/NestedAT.x10"
void NestedAT::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 10 "/home/rushhub/ugrc/common/NestedAT.x10"
    ::NestedAT* temp = ::NestedAT::_make();
    
    //#line 12 "/home/rushhub/ugrc/common/NestedAT.x10"
    ::x10aux::nullCheck(temp)->FMGL(x) = ((x10_long)1000ll);
    
    //#line 14 "/home/rushhub/ugrc/common/NestedAT.x10"
      /* (1) After temp setup, funName = println */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println( /* printing actuals funName = println */  
                                                                                                        reinterpret_cast< ::x10::lang::Any*>(  /* (1) After temp setup, funName = operator+ */     /* (2.1) doremon */   ::x10::lang::String::__plus((&::NestedAT_Strings::sl__709), ::x10aux::nullCheck(temp)->FMGL(x))))  /* (3) doremon funName = println */   ;
    
    //#line 16 "/home/rushhub/ugrc/common/NestedAT.x10"
      /* (1) After temp setup, funName = divide */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10aux::nullCheck(temp)->divide( /* printing actuals funName = divide */  )  /* (3) doremon funName = divide */   ;
    
    //#line 18 "/home/rushhub/ugrc/common/NestedAT.x10"
      /* (1) After temp setup, funName = println */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println( /* printing actuals funName = println */  
                                                                                                        reinterpret_cast< ::x10::lang::Any*>(  /* (1) After temp setup, funName = operator+ */     /* (2.1) doremon */   ::x10::lang::String::__plus(  /* (1) After temp setup, funName = operator+ */     /* (2.1) doremon */   ::x10::lang::String::__plus((&::NestedAT_Strings::sl__710), ::x10aux::nullCheck(temp)->FMGL(x)), (&::NestedAT_Strings::sl__711))))  /* (3) doremon funName = println */   ;
}

//#line 21 "/home/rushhub/ugrc/common/NestedAT.x10"
void NestedAT::divide() {
    {
        
        //#line 23 "/home/rushhub/ugrc/common/NestedAT.x10"
          /*  current class: NestedAT, current method: divide  */  ::x10::lang::PlaceGroup* zztemp0 = this->FMGL(D);
        x10_long zztemp1 = this->FMGL(x);
          /* (1) After temp setup, funName = runAt */     /*  zztemp0, zztemp1  id = 18  */  
        x10::lang::Place tmpPLACE;
        bool flag = false;
        do {
        if (flag) { 
        if (true) { 
          /* (2.1) doremon */     /* (2.2) doremon */   ::x10::xrx::Runtime::runAt( /* printing actuals funName = runAt */  
                                                            /* (1) After temp setup, funName = next */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10aux::nullCheck(this->FMGL(D))->next( /* printing actuals funName = next */  
                                                                                                                                                             /* (1) After temp setup, funName = home */     /* (2.1) doremon */   ::x10::lang::Place::_make(::x10aux::here))  /* (3) doremon funName = next */   ,
                                                           /* Into Closure_c !!  */   /* streams popped  */   /*  Creating closure instantiations ... ? */    /* template arguments =   */reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(NestedAT__closure__19)))NestedAT__closure__19(  /* cname = NestedAT__closure__19 */  this))),
                                                          ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)) /* stopping streaming now */  
                                                         //   /* (1) After temp setup, funName = next */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10aux::nullCheck(this->FMGL(D))->next( /* printing actuals funName = next */    /* (1) After temp setup, funName = home */     /* (2.1) doremon */   ::x10::lang::Place::_make(::x10aux::here))  /* (3) doremon funName = next */   , /* Into Closure_c !!  */  #ifndef NESTEDAT__CLOSURE__19_CLOSURE#define NESTEDAT__CLOSURE__19_CLOSURE#include <x10/lang/Closure.h>#include <x10/lang/VoidFun_0_0.h>class NestedAT__closure__19 : public ::x10::lang::Closure {public:static ::x10::lang::VoidFun_0_0::itable<NestedAT__closure__19> _itable;static ::x10aux::itable_entry _itables[2];virtual ::x10aux::itable_entry* _getITables() { return _itables; }void __apply(){saved_this->FMGL(x) =  /* (1) After temp setup, funName = operator/ */     /* (2.1) doremon */   ((saved_this->FMGL(x)) / ::x10aux::zeroCheck(((x10_long)2ll)));  /* (1) After temp setup, funName = println */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println( /* printing actuals funName = println */  reinterpret_cast< ::x10::lang::Any*>(  /* (1) After temp setup, funName = operator+ */     /* (2.1) doremon */   ::x10::lang::String::__plus(  /* (1) After temp setup, funName = operator+ */     /* (2.1) doremon */   ::x10::lang::String::__plus((&::NestedAT_Strings::sl__712), saved_this->FMGL(x)), (&::NestedAT_Strings::sl__713))))  /* (3) doremon funName = println */   ;{  /*  current class: NestedAT, current method: divide  */  ::x10::lang::PlaceGroup* zztemp2 = saved_this->FMGL(D);x10_long zztemp3 = saved_this->FMGL(x);  /* (1) After temp setup, funName = runAt */     /*  zztemp2, zztemp3  id = 19  */  x10::lang::Place tmpPLACE;bool flag = false;do {if (flag) { if (true) {   /* (2.1) doremon */     /* (2.2) doremon */   ::x10::xrx::Runtime::runAt( /* printing actuals funName = runAt */  
                                                        )  /* (3) doremon funName = runAt */   ;
          } else { 
         // NestedAT__closure__19* sampleTemp = new NestedAT__closure__19(this);
         // sampleTemp->__apply(); 
        ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(   ::x10::xrx::Runtime::deepCopy< ::x10::lang::VoidFun_0_0* >( 
         reinterpret_cast< ::x10::lang::VoidFun_0_0*>(new NestedAT__closure__19(this))
         ))); 
        }
        break;
        }
        else { 
        tmpPLACE =                ::x10aux::nullCheck(this->FMGL(D))->next(             ::x10::lang::Place::_make(::x10aux::here))     ;
        flag = true;
        }
        } while(true);
    }
}

//#line 3 "/home/rushhub/ugrc/common/NestedAT.x10"
::NestedAT* NestedAT::NestedAT____this__NestedAT() {
    return this;
    
}

//#line 4 "/home/rushhub/ugrc/common/NestedAT.x10"
void NestedAT::_constructor() {
    
    //#line 3 "/home/rushhub/ugrc/common/NestedAT.x10"
      /* (1) After temp setup, funName = __fieldInitializers_NestedAT */     /* (2.1) doremon */     /* (2.2) doremon */   this->NestedAT::__fieldInitializers_NestedAT( /* printing actuals funName = __fieldInitializers_NestedAT */  )  /* (3) doremon funName = __fieldInitializers_NestedAT */   ;
}
::NestedAT* NestedAT::_make() {
    ::NestedAT* this_ = new (::x10aux::alloc_z< ::NestedAT>()) ::NestedAT();
    this_->_constructor();
    return this_;
}



//#line 3 "/home/rushhub/ugrc/common/NestedAT.x10"
void NestedAT::__fieldInitializers_NestedAT() {
    this->FMGL(x) = ((x10_long)0ll);
    this->FMGL(D) =   /* (1) After temp setup, funName = places */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::lang::Place::places( /* printing actuals funName = places */  )  /* (3) doremon funName = places */   ;
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

::x10::lang::String NestedAT_Strings::sl__709("Value before AT (x) = ");
::x10::lang::String NestedAT_Strings::sl__712("Value in L1-nested AT = ");
::x10::lang::String NestedAT_Strings::sl__715(" (expected = x/4)");
::x10::lang::String NestedAT_Strings::sl__714("Value in L2-nested AT = ");
::x10::lang::String NestedAT_Strings::sl__710("Value after AT = ");
::x10::lang::String NestedAT_Strings::sl__718(" (expected = x/8)");
::x10::lang::String NestedAT_Strings::sl__711(" (expected = x)");
::x10::lang::String NestedAT_Strings::sl__716(" says hello");
::x10::lang::String NestedAT_Strings::sl__713(" (expected = x/2)");
::x10::lang::String NestedAT_Strings::sl__717("Value in L3-nested AT = ");

::x10::lang::VoidFun_0_0::itable<NestedAT__closure__21>NestedAT__closure__21::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &NestedAT__closure__21::__apply, &NestedAT__closure__21::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry NestedAT__closure__21::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &NestedAT__closure__21::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t NestedAT__closure__21::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(NestedAT__closure__21::_deserialize);

::x10::lang::VoidFun_0_0::itable<NestedAT__closure__20>NestedAT__closure__20::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &NestedAT__closure__20::__apply, &NestedAT__closure__20::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry NestedAT__closure__20::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &NestedAT__closure__20::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t NestedAT__closure__20::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(NestedAT__closure__20::_deserialize);

::x10::lang::VoidFun_0_0::itable<NestedAT__closure__19>NestedAT__closure__19::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &NestedAT__closure__19::__apply, &NestedAT__closure__19::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry NestedAT__closure__19::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &NestedAT__closure__19::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t NestedAT__closure__19::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(NestedAT__closure__19::_deserialize);

/* END of NestedAT */
/*************************************************/
