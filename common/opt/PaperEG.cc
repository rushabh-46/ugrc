/*************************************************/
/* START of PaperEG */
#include <PaperEG.h>

#include <PaperEG__A.h>
#include <x10/lang/Place.h>
#include <x10/xrx/Runtime.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/lang/Long.h>
#include <PaperEG__B.h>
#include <x10/lang/PlaceGroup.h>
#include <x10/lang/Iterator.h>
#include <x10/lang/Iterable.h>
#include <x10/lang/Boolean.h>
#include <x10/xrx/Runtime__Profile.h>
#include <x10/lang/Rail.h>
#include <x10/lang/String.h>
#include <x10/xrx/FinishState.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef PAPEREG__CLOSURE__26_CLOSURE
#define PAPEREG__CLOSURE__26_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class PaperEG__closure__26 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<PaperEG__closure__26> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 37 "/home/rushhub/ugrc/common/PaperEG.x10"
        x10_long y = ::x10aux::nullCheck(b)->FMGL(r1);
        
        //#line 38 "/home/rushhub/ugrc/common/PaperEG.x10"
        ::PaperEG__A* c = a;
        
        //#line 39 "/home/rushhub/ugrc/common/PaperEG.x10"
        ::x10aux::nullCheck(c)->FMGL(r1) = ((x10_long)100ll);
        
        //#line 40 "/home/rushhub/ugrc/common/PaperEG.x10"
        x10_long z = ::x10aux::nullCheck(a)->FMGL(r1);
        
    }
    
    // captured environment
    ::PaperEG__B* b;
    ::PaperEG__A* a;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->b);
        buf.write(this->a);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        PaperEG__closure__26* storage = ::x10aux::alloc_z<PaperEG__closure__26>();
        buf.record_reference(storage);
        ::PaperEG__B* that_b = buf.read< ::PaperEG__B*>();
        ::PaperEG__A* that_a = buf.read< ::PaperEG__A*>();
        PaperEG__closure__26* this_ = new (storage) PaperEG__closure__26(that_b, that_a);
        return this_;
    }
    
    PaperEG__closure__26(::PaperEG__B* b, ::PaperEG__A* a) : b(b), a(a) { }
    
    PaperEG__closure__26(::PaperEG__B* b, ::PaperEG__A* a,x10_long zzztemp){ 
                                                                           this->b = b;
                                                                           this->a = a;
                                                                            }
                                                                           
                                                                           static const ::x10aux::serialization_id_t _serialization_id;
                                                                           
                                                                           static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
                                                                           virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
                                                                           
                                                                           const char* toNativeString() {
                                                                               return "/home/rushhub/ugrc/common/PaperEG.x10:36-41";
                                                                           }
    
    };
    
    #endif // PAPEREG__CLOSURE__26_CLOSURE
    #ifndef PAPEREG__CLOSURE__27_CLOSURE
#define PAPEREG__CLOSURE__27_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class PaperEG__closure__27 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<PaperEG__closure__27> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 47 "/home/rushhub/ugrc/common/PaperEG.x10"
        x10_long xx = ::x10aux::nullCheck(a)->FMGL(r1);
        
        //#line 48 "/home/rushhub/ugrc/common/PaperEG.x10"
        x10_long yy = ::x10aux::nullCheck(a)->FMGL(r2);
        
    }
    
    // captured environment
    ::PaperEG__A* a;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->a);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        PaperEG__closure__27* storage = ::x10aux::alloc_z<PaperEG__closure__27>();
        buf.record_reference(storage);
        ::PaperEG__A* that_a = buf.read< ::PaperEG__A*>();
        PaperEG__closure__27* this_ = new (storage) PaperEG__closure__27(that_a);
        return this_;
    }
    
    PaperEG__closure__27(::PaperEG__A* a) : a(a) { }
    
    PaperEG__closure__27(::PaperEG__A* a,x10_long zzztemp){ 
                                                          this->a = a;
                                                           }
                                                          
                                                          static const ::x10aux::serialization_id_t _serialization_id;
                                                          
                                                          static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
                                                          virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
                                                          
                                                          const char* toNativeString() {
                                                              return "/home/rushhub/ugrc/common/PaperEG.x10:46-49";
                                                          }
    
    };
    
    #endif // PAPEREG__CLOSURE__27_CLOSURE
    #ifndef PAPEREG__CLOSURE__25_CLOSURE
#define PAPEREG__CLOSURE__25_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class PaperEG__closure__25 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<PaperEG__closure__25> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 24 "/home/rushhub/ugrc/common/PaperEG.x10"
        ::x10aux::nullCheck(a)->FMGL(r2) = ((x10_long)5ll);
        
        //#line 25 "/home/rushhub/ugrc/common/PaperEG.x10"
        x10_long x = ::x10aux::nullCheck(a)->FMGL(r2);
        
        //#line 26 "/home/rushhub/ugrc/common/PaperEG.x10"
        ::PaperEG__B* b = ::PaperEG__B::_make(saved_this);
        
        //#line 27 "/home/rushhub/ugrc/common/PaperEG.x10"
        ::x10aux::nullCheck(b)->FMGL(r1) = ((x10_long)10ll);
        
        //#line 29 "/home/rushhub/ugrc/common/PaperEG.x10"
        ::x10::lang::PlaceGroup* D =   /* (1) After temp setup, funName = places */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::lang::Place::places( /* printing actuals funName = places */  )  /* (3) doremon funName = places */   ;
        
        //#line 31 "/home/rushhub/ugrc/common/PaperEG.x10"
        {
            ::x10::lang::Iterator< ::x10::lang::Place>* i__170;
            for (i__170 =   /* (1) After temp setup, funName = iterator */     /* (2.1) doremon */     /* (2.2) doremon */   D->iterator( /* printing actuals funName = iterator */  )  /* (3) doremon funName = iterator */   ;
                   /* (1) After temp setup, funName = hasNext */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(i__170));
                 ) {
                ::x10::lang::Place i =   /* (1) After temp setup, funName = next */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(i__170));
                
                //#line 33 "/home/rushhub/ugrc/common/PaperEG.x10"
                ::x10aux::nullCheck(b)->FMGL(r3) = a;
                {
                    
                    //#line 35 "/home/rushhub/ugrc/common/PaperEG.x10"
                      /*  current class: PaperEG, current method: f  */    /* (1) After temp setup, funName = runAt */     /*    id = 25  */  
                    x10::lang::Place tmpPLACE;
                    bool flag = false;
                    do {
                    if (flag) { 
                    if (true) { 
                      /* (2.1) doremon */     /* (2.2) doremon */   ::x10::xrx::Runtime::runAt( /* printing actuals funName = runAt */  
                                                                      i,
                                                                       /* Into Closure_c !!  */   /* streams popped  */   /*  Creating closure instantiations ... ? */    /* template arguments =   */reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(PaperEG__closure__26)))PaperEG__closure__26(  /* cname = PaperEG__closure__26 */  b, a))),
                                                                      ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)) /* stopping streaming now */  
                                                                     // i, /* Into Closure_c !!  */  #ifndef PAPEREG__CLOSURE__26_CLOSURE#define PAPEREG__CLOSURE__26_CLOSURE#include <x10/lang/Closure.h>#include <x10/lang/VoidFun_0_0.h>class PaperEG__closure__26 : public ::x10::lang::Closure {public:static ::x10::lang::VoidFun_0_0::itable<PaperEG__closure__26> _itable;static ::x10aux::itable_entry _itables[2];virtual ::x10aux::itable_entry* _getITables() { return _itables; }void __apply(){x10_long y =::x10aux::nullCheck(b)->FMGL(r1);::PaperEG__A* c =a;::x10aux::nullCheck(c)->FMGL(r1) =((x10_long)100ll);x10_long z =::x10aux::nullCheck(a)->FMGL(r1);}// captured environment::PaperEG__B* b;::PaperEG__A* a;::x10aux::serialization_id_t _get_serialization_id() {return _serialization_id;}void _serialize_body(::x10aux::serialization_buffer &buf) {buf.write(this->b);buf.write(this->a);}static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {::PaperEG__B* that_b = buf.read< ::PaperEG__B*>();::PaperEG__A* that_a = buf.read< ::PaperEG__A*>();PaperEG__closure__26* this_ = new (storage) PaperEG__closure__26(that_b, that_a);return this_;}PaperEG__closure__26(::PaperEG__B* b, ::PaperEG__A* a) : b(b), a(a) { }PaperEG__closure__26(::PaperEG__B* b, ::PaperEG__A* a,x10_long zzztemp){ this->b = b;this->a = a; }static const ::x10aux::serialization_id_t _serialization_id;static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }const char* toNativeString() {return "/home/rushhub/ugrc/common/PaperEG.x10:36-41";}};#endif // PAPEREG__CLOSURE__26_CLOSURE /* streams popped  */   /*  Creating closure instantiations ... ? */    /* template arguments =   */reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(PaperEG__closure__26)))PaperEG__closure__26(  /* cname = PaperEG__closure__26 */  b, a))),::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)) /* stopping streaming now */  
                                                                    )  /* (3) doremon funName = runAt */   ;
                      } else { 
                     // PaperEG__closure__26* sampleTemp = new PaperEG__closure__26(b, a);
                     // sampleTemp->__apply(); 
                    ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(   ::x10::xrx::Runtime::deepCopy< ::x10::lang::VoidFun_0_0* >( 
                     reinterpret_cast< ::x10::lang::VoidFun_0_0*>(new PaperEG__closure__26(b, a))
                     ))); 
                    }
                    break;
                    }
                    else { 
                    tmpPLACE = i;
                    flag = true;
                    }
                    } while(true);
                }
            }
        }
        {
            
            //#line 45 "/home/rushhub/ugrc/common/PaperEG.x10"
              /*  current class: PaperEG, current method: f  */    /* (1) After temp setup, funName = runAt */     /*    id = 26  */  
            x10::lang::Place tmpPLACE;
            bool flag = false;
            do {
            if (flag) { 
            if (true) { 
              /* (2.1) doremon */     /* (2.2) doremon */   ::x10::xrx::Runtime::runAt( /* printing actuals funName = runAt */  
                                                                /* (1) After temp setup, funName = next */     /* (2.1) doremon */     /* (2.2) doremon */   D->next( /* printing actuals funName = next */  
                                                                                                                                                               p)  /* (3) doremon funName = next */   ,
                                                               /* Into Closure_c !!  */   /* streams popped  */   /*  Creating closure instantiations ... ? */    /* template arguments =   */reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(PaperEG__closure__27)))PaperEG__closure__27(  /* cname = PaperEG__closure__27 */  a))),
                                                              ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)) /* stopping streaming now */  
                                                             //   /* (1) After temp setup, funName = next */     /* (2.1) doremon */     /* (2.2) doremon */   D->next( /* printing actuals funName = next */  p)  /* (3) doremon funName = next */   , /* Into Closure_c !!  */  #ifndef PAPEREG__CLOSURE__27_CLOSURE#define PAPEREG__CLOSURE__27_CLOSURE#include <x10/lang/Closure.h>#include <x10/lang/VoidFun_0_0.h>class PaperEG__closure__27 : public ::x10::lang::Closure {public:static ::x10::lang::VoidFun_0_0::itable<PaperEG__closure__27> _itable;static ::x10aux::itable_entry _itables[2];virtual ::x10aux::itable_entry* _getITables() { return _itables; }void __apply(){x10_long xx =::x10aux::nullCheck(a)->FMGL(r1);x10_long yy =::x10aux::nullCheck(a)->FMGL(r2);}// captured environment::PaperEG__A* a;::x10aux::serialization_id_t _get_serialization_id() {return _serialization_id;}void _serialize_body(::x10aux::serialization_buffer &buf) {buf.write(this->a);}static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {::PaperEG__A* that_a = buf.read< ::PaperEG__A*>();PaperEG__closure__27* this_ = new (storage) PaperEG__closure__27(that_a);return this_;}PaperEG__closure__27(::PaperEG__A* a) : a(a) { }PaperEG__closure__27(::PaperEG__A* a,x10_long zzztemp){ this->a = a; }static const ::x10aux::serialization_id_t _serialization_id;static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }const char* toNativeString() {return "/home/rushhub/ugrc/common/PaperEG.x10:46-49";}};#endif // PAPEREG__CLOSURE__27_CLOSURE /* streams popped  */   /*  Creating closure instantiations ... ? */    /* template arguments =   */reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(PaperEG__closure__27)))PaperEG__closure__27(  /* cname = PaperEG__closure__27 */  a))),::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)) /* stopping streaming now */  
                                                            )  /* (3) doremon funName = runAt */   ;
              } else { 
             // PaperEG__closure__27* sampleTemp = new PaperEG__closure__27(a);
             // sampleTemp->__apply(); 
            ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(   ::x10::xrx::Runtime::deepCopy< ::x10::lang::VoidFun_0_0* >( 
             reinterpret_cast< ::x10::lang::VoidFun_0_0*>(new PaperEG__closure__27(a))
             ))); 
            }
            break;
            }
            else { 
            tmpPLACE =                D->next(   p)     ;
            flag = true;
            }
            } while(true);
        }
    }
    
    // captured environment
    ::PaperEG__A* a;
    ::PaperEG* saved_this;
    ::x10::lang::Place p;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->a);
        buf.write(this->saved_this);
        buf.write(this->p);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        PaperEG__closure__25* storage = ::x10aux::alloc_z<PaperEG__closure__25>();
        buf.record_reference(storage);
        ::PaperEG__A* that_a = buf.read< ::PaperEG__A*>();
        ::PaperEG* that_saved_this = buf.read< ::PaperEG*>();
        ::x10::lang::Place that_p = buf.read< ::x10::lang::Place>();
        PaperEG__closure__25* this_ = new (storage) PaperEG__closure__25(that_a, that_saved_this, that_p);
        return this_;
    }
    
    PaperEG__closure__25(::PaperEG__A* a, ::PaperEG* saved_this, ::x10::lang::Place p) : a(a), saved_this(saved_this), p(p) { }
    
    PaperEG__closure__25(::PaperEG__A* a, ::PaperEG* saved_this, ::x10::lang::Place p,x10_long zzztemp){ 
                                                                                                       this->a = a;
                                                                                                       this->saved_this = saved_this;
                                                                                                       this->p = p;
                                                                                                        }
                                                                                                       
                                                                                                       static const ::x10aux::serialization_id_t _serialization_id;
                                                                                                       
                                                                                                       static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
                                                                                                       virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
                                                                                                       
                                                                                                       const char* toNativeString() {
                                                                                                           return "/home/rushhub/ugrc/common/PaperEG.x10:23-51";
                                                                                                       }
    
    };
    
    #endif // PAPEREG__CLOSURE__25_CLOSURE
    #ifndef PAPEREG__CLOSURE__28_CLOSURE
#define PAPEREG__CLOSURE__28_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class PaperEG__closure__28 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<PaperEG__closure__28> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 59 "/home/rushhub/ugrc/common/PaperEG.x10"
          /* (1) After temp setup, funName = println */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println( /* printing actuals funName = println */  
                                                                                                            reinterpret_cast< ::x10::lang::Any*>(  /* (1) After temp setup, funName = operator+ */     /* (2.1) doremon */   ::x10::lang::String::__plus(  /* (1) After temp setup, funName = operator+ */     /* (2.1) doremon */   ::x10::lang::String::__plus(  /* (1) After temp setup, funName = home */     /* (2.1) doremon */   ::x10::lang::Place::_make(::x10aux::here), (&::PaperEG_Strings::sl__218)),   /* (1) After temp setup, funName = operator() */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply( /* printing actuals funName = operator() */  
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          ((x10_long)0ll))  /* (3) doremon funName = operator() */   )))  /* (3) doremon funName = println */   ;
    }
    
    // captured environment
    ::x10::lang::Rail< ::x10::lang::String* >* args;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->args);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        PaperEG__closure__28* storage = ::x10aux::alloc_z<PaperEG__closure__28>();
        buf.record_reference(storage);
        ::x10::lang::Rail< ::x10::lang::String* >* that_args = buf.read< ::x10::lang::Rail< ::x10::lang::String* >*>();
        PaperEG__closure__28* this_ = new (storage) PaperEG__closure__28(that_args);
        return this_;
    }
    
    PaperEG__closure__28(::x10::lang::Rail< ::x10::lang::String* >* args) : args(args) { }
    
    PaperEG__closure__28(::x10::lang::Rail< ::x10::lang::String* >* args,x10_long zzztemp){ 
                                                                                          this->args = args;
                                                                                           }
                                                                                          
                                                                                          static const ::x10aux::serialization_id_t _serialization_id;
                                                                                          
                                                                                          static const ::x10aux::serialization_id_t _network_id;
                                                                                          
                                                                                          static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
                                                                                          virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
                                                                                          
                                                                                          const char* toNativeString() {
                                                                                              return "/home/rushhub/ugrc/common/PaperEG.x10:58-60";
                                                                                          }
    
    };
    
    #endif // PAPEREG__CLOSURE__28_CLOSURE
    
//#line 15 "/home/rushhub/ugrc/common/PaperEG.x10"
void PaperEG::f() {
    
    //#line 17 "/home/rushhub/ugrc/common/PaperEG.x10"
    ::PaperEG__A* a = ::PaperEG__A::_make(this);
    
    //#line 18 "/home/rushhub/ugrc/common/PaperEG.x10"
    ::x10aux::nullCheck(a)->FMGL(r1) = ((x10_long)1ll);
    
    //#line 20 "/home/rushhub/ugrc/common/PaperEG.x10"
    ::x10::lang::Place p =   /* (1) After temp setup, funName = home */     /* (2.1) doremon */   ::x10::lang::Place::_make(::x10aux::here);
    {
        
        //#line 22 "/home/rushhub/ugrc/common/PaperEG.x10"
          /*  current class: PaperEG, current method: f  */    /* (1) After temp setup, funName = runAt */     /*    id = 24  */  
        x10::lang::Place tmpPLACE;
        bool flag = false;
        do {
        if (flag) { 
        if (true) { 
          /* (2.1) doremon */     /* (2.2) doremon */   ::x10::xrx::Runtime::runAt( /* printing actuals funName = runAt */  
                                                          p,  /* Into Closure_c !!  */   /* streams popped  */   /*  Creating closure instantiations ... ? */    /* template arguments =   */reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(PaperEG__closure__25)))PaperEG__closure__25(  /* cname = PaperEG__closure__25 */  a, this, p))),
                                                          ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)) /* stopping streaming now */  
                                                         // p, /* Into Closure_c !!  */  #ifndef PAPEREG__CLOSURE__25_CLOSURE#define PAPEREG__CLOSURE__25_CLOSURE#include <x10/lang/Closure.h>#include <x10/lang/VoidFun_0_0.h>class PaperEG__closure__25 : public ::x10::lang::Closure {public:static ::x10::lang::VoidFun_0_0::itable<PaperEG__closure__25> _itable;static ::x10aux::itable_entry _itables[2];virtual ::x10aux::itable_entry* _getITables() { return _itables; }void __apply(){::x10aux::nullCheck(a)->FMGL(r2) =((x10_long)5ll);x10_long x =::x10aux::nullCheck(a)->FMGL(r2);::PaperEG__B* b =::PaperEG__B::_make(saved_this);::x10aux::nullCheck(b)->FMGL(r1) =((x10_long)10ll);::x10::lang::PlaceGroup* D =  /* (1) After temp setup, funName = places */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::lang::Place::places( /* printing actuals funName = places */  )  /* (3) doremon funName = places */   ;{::x10::lang::Iterator< ::x10::lang::Place>* i__170;for (i__170 =  /* (1) After temp setup, funName = iterator */     /* (2.1) doremon */     /* (2.2) doremon */   D->iterator( /* printing actuals funName = iterator */  )  /* (3) doremon funName = iterator */   ;  /* (1) After temp setup, funName = hasNext */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(i__170));){::x10::lang::Place i =  /* (1) After temp setup, funName = next */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(i__170));::x10aux::nullCheck(b)->FMGL(r3) =a;{  /*  current class: PaperEG, current method: f  */    /* (1) After temp setup, funName = runAt */     /*    id = 25  */  x10::lang::Place tmpPLACE;bool flag = false;do {if (flag) { if (true) {   /* (2.1) doremon */     /* (2.2) doremon */   ::x10::xrx::Runtime::runAt( /* printing actuals funName = runAt */  
                                                        )  /* (3) doremon funName = runAt */   ;
          } else { 
         // PaperEG__closure__25* sampleTemp = new PaperEG__closure__25(a, this, p);
         // sampleTemp->__apply(); 
        ::x10::lang::VoidFun_0_0::__apply(::x10aux::nullCheck(   ::x10::xrx::Runtime::deepCopy< ::x10::lang::VoidFun_0_0* >( 
         reinterpret_cast< ::x10::lang::VoidFun_0_0*>(new PaperEG__closure__25(a, this, p))
         ))); 
        }
        break;
        }
        else { 
        tmpPLACE = p;
        flag = true;
        }
        } while(true);
    }
}

//#line 55 "/home/rushhub/ugrc/common/PaperEG.x10"
void PaperEG::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    {
        
        //#line 57 "/home/rushhub/ugrc/common/PaperEG.x10"
          /* (1) After temp setup, funName = ensureNotInAtomic */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::xrx::Runtime::ensureNotInAtomic( /* printing actuals funName = ensureNotInAtomic */  )  /* (3) doremon funName = ensureNotInAtomic */   ;
        ::x10::xrx::FinishState* fs__187 =   /* (1) After temp setup, funName = startFinish */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::xrx::Runtime::startFinish( /* printing actuals funName = startFinish */  )  /* (3) doremon funName = startFinish */   ;
        try {
            {
                {
                    ::x10::lang::Iterator< ::x10::lang::Place>* p__172;
                    for (p__172 =   /* (1) After temp setup, funName = iterator */     /* (2.1) doremon */     /* (2.2) doremon */     /* (1) After temp setup, funName = places */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::lang::Place::places( /* printing actuals funName = places */  )  /* (3) doremon funName = places */   ->iterator( /* printing actuals funName = iterator */  )  /* (3) doremon funName = iterator */   ;
                           /* (1) After temp setup, funName = hasNext */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::lang::Iterator< ::x10::lang::Place>::hasNext(::x10aux::nullCheck(p__172));
                         ) {
                        ::x10::lang::Place p =   /* (1) After temp setup, funName = next */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::lang::Iterator< ::x10::lang::Place>::next(::x10aux::nullCheck(p__172));
                        
                        //#line 58 "/home/rushhub/ugrc/common/PaperEG.x10"
                          /*  current class: PaperEG, current method: main  */    /* (1) After temp setup, funName = runAsync */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::xrx::Runtime::runAsync( /* printing actuals funName = runAsync */  
                                                                                                                                                                                       /* (1) After temp setup, funName = home */     /* (2.1) doremon */   ::x10::lang::Place::_make(::x10aux::here),
                                                                                                                                                                                      /* Into Closure_c !!  */   /* streams popped  */   /*  Creating closure instantiations ... ? */    /* template arguments =   */reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(PaperEG__closure__28)))PaperEG__closure__28(  /* cname = PaperEG__closure__28 */  args))),
                                                                                                                                                                                     ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))  /* (3) doremon funName = runAsync */   ;
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc68) {
            {
                ::x10::lang::CheckedThrowable* ct__185 = __exc68;
                {
                      /* (1) After temp setup, funName = pushException */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::xrx::Runtime::pushException( /* printing actuals funName = pushException */  
                                                                                                                              ct__185)  /* (3) doremon funName = pushException */   ;
                }
            }
        }
          /* (1) After temp setup, funName = stopFinish */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::xrx::Runtime::stopFinish( /* printing actuals funName = stopFinish */  
                                                                                                               fs__187)  /* (3) doremon funName = stopFinish */   ;
    }
    
    //#line 63 "/home/rushhub/ugrc/common/PaperEG.x10"
    ::PaperEG* temp = ::PaperEG::_make();
    
    //#line 64 "/home/rushhub/ugrc/common/PaperEG.x10"
      /* (1) After temp setup, funName = f */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10aux::nullCheck(temp)->f( /* printing actuals funName = f */  )  /* (3) doremon funName = f */   ;
    
    //#line 66 "/home/rushhub/ugrc/common/PaperEG.x10"
      /* (1) After temp setup, funName = println */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println( /* printing actuals funName = println */  
                                                                                                        reinterpret_cast< ::x10::lang::Any*>((&::PaperEG_Strings::sl__219)))  /* (3) doremon funName = println */   ;
}

//#line 3 "/home/rushhub/ugrc/common/PaperEG.x10"
::PaperEG* PaperEG::PaperEG____this__PaperEG() {
    return this;
    
}
void PaperEG::_constructor() {
      /* (1) After temp setup, funName = __fieldInitializers_PaperEG */     /* (2.1) doremon */     /* (2.2) doremon */   this->PaperEG::__fieldInitializers_PaperEG( /* printing actuals funName = __fieldInitializers_PaperEG */  )  /* (3) doremon funName = __fieldInitializers_PaperEG */   ;
}
::PaperEG* PaperEG::_make() {
    ::PaperEG* this_ = new (::x10aux::alloc_z< ::PaperEG>()) ::PaperEG();
    this_->_constructor();
    return this_;
}


void PaperEG::__fieldInitializers_PaperEG() {
 
}
const ::x10aux::serialization_id_t PaperEG::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::PaperEG::_deserializer);

void PaperEG::_serialize_body(::x10aux::serialization_buffer& buf) {
    
}

::x10::lang::Reference* ::PaperEG::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::PaperEG* this_ = new (::x10aux::alloc_z< ::PaperEG>()) ::PaperEG();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void PaperEG::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    
}

::x10aux::RuntimeType PaperEG::rtt;
void PaperEG::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("PaperEG",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String PaperEG_Strings::sl__218(" says hello and ");
::x10::lang::String PaperEG_Strings::sl__219("Goodbye");

::x10::lang::VoidFun_0_0::itable<PaperEG__closure__26>PaperEG__closure__26::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &PaperEG__closure__26::__apply, &PaperEG__closure__26::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry PaperEG__closure__26::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &PaperEG__closure__26::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t PaperEG__closure__26::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(PaperEG__closure__26::_deserialize);

::x10::lang::VoidFun_0_0::itable<PaperEG__closure__27>PaperEG__closure__27::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &PaperEG__closure__27::__apply, &PaperEG__closure__27::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry PaperEG__closure__27::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &PaperEG__closure__27::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t PaperEG__closure__27::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(PaperEG__closure__27::_deserialize);

::x10::lang::VoidFun_0_0::itable<PaperEG__closure__25>PaperEG__closure__25::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &PaperEG__closure__25::__apply, &PaperEG__closure__25::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry PaperEG__closure__25::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &PaperEG__closure__25::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t PaperEG__closure__25::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(PaperEG__closure__25::_deserialize);

::x10::lang::VoidFun_0_0::itable<PaperEG__closure__28>PaperEG__closure__28::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &PaperEG__closure__28::__apply, &PaperEG__closure__28::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry PaperEG__closure__28::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &PaperEG__closure__28::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t PaperEG__closure__28::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(PaperEG__closure__28::_deserialize);
const ::x10aux::serialization_id_t PaperEG__closure__28::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(PaperEG__closure__28::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

/* END of PaperEG */
/*************************************************/
/*************************************************/
/* START of PaperEG$A */
#include <PaperEG__A.h>

#include <x10/lang/Long.h>
#include <PaperEG.h>
#include <x10/compiler/Synthetic.h>

//#line 3 "/home/rushhub/ugrc/common/PaperEG.x10"

//#line 6 "/home/rushhub/ugrc/common/PaperEG.x10"

//#line 7 "/home/rushhub/ugrc/common/PaperEG.x10"

//#line 5 "/home/rushhub/ugrc/common/PaperEG.x10"
::PaperEG__A* PaperEG__A::PaperEG__A____this__PaperEG__A() {
    return this;
    
}
::PaperEG* PaperEG__A::PaperEG__A____this__PaperEG() {
    return this->FMGL(out__);
    
}
void PaperEG__A::_constructor(::PaperEG* out__) {
    
    //#line 3 "/home/rushhub/ugrc/common/PaperEG.x10"
    this->FMGL(out__) = out__;
    
    //#line 5 "/home/rushhub/ugrc/common/PaperEG.x10"
      /* (1) After temp setup, funName = __fieldInitializers_PaperEG_A */     /* (2.1) doremon */     /* (2.2) doremon */   this->PaperEG__A::__fieldInitializers_PaperEG_A( /* printing actuals funName = __fieldInitializers_PaperEG_A */  )  /* (3) doremon funName = __fieldInitializers_PaperEG_A */   ;
}
::PaperEG__A* PaperEG__A::_make(::PaperEG* out__) {
    ::PaperEG__A* this_ = new (::x10aux::alloc_z< ::PaperEG__A>()) ::PaperEG__A();
    this_->_constructor(out__);
    return this_;
}


void PaperEG__A::__fieldInitializers_PaperEG_A() {
    this->FMGL(r1) = ((x10_long)0ll);
    this->FMGL(r2) = ((x10_long)0ll);
}
const ::x10aux::serialization_id_t PaperEG__A::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::PaperEG__A::_deserializer);

void PaperEG__A::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(r1));
    buf.write(this->FMGL(r2));
    buf.write(this->FMGL(out__));
    
}

::x10::lang::Reference* ::PaperEG__A::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::PaperEG__A* this_ = new (::x10aux::alloc_z< ::PaperEG__A>()) ::PaperEG__A();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void PaperEG__A::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(r1) = buf.read<x10_long>();
    FMGL(r2) = buf.read<x10_long>();
    FMGL(out__) = buf.read< ::PaperEG*>();
}

::x10aux::RuntimeType PaperEG__A::rtt;
void PaperEG__A::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("PaperEG.A",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of PaperEG$A */
/*************************************************/
/*************************************************/
/* START of PaperEG$B */
#include <PaperEG__B.h>

#include <PaperEG__A.h>
#include <PaperEG.h>
#include <x10/compiler/Synthetic.h>

//#line 3 "/home/rushhub/ugrc/common/PaperEG.x10"

//#line 12 "/home/rushhub/ugrc/common/PaperEG.x10"

//#line 10 "/home/rushhub/ugrc/common/PaperEG.x10"
::PaperEG__B* PaperEG__B::PaperEG__B____this__PaperEG__B() {
    return this;
    
}
::PaperEG* PaperEG__B::PaperEG__B____this__PaperEG() {
    return this->FMGL(out__);
    
}

//#line 11 "/home/rushhub/ugrc/common/PaperEG.x10"
void PaperEG__B::_constructor(::PaperEG* out__) {
    (this)->::PaperEG__A::_constructor(out__);
    
    //#line 3 "/home/rushhub/ugrc/common/PaperEG.x10"
    this->FMGL(out__) = out__;
    
    //#line 11 "/home/rushhub/ugrc/common/PaperEG.x10"
    
    //#line 10 "/home/rushhub/ugrc/common/PaperEG.x10"
      /* (1) After temp setup, funName = __fieldInitializers_PaperEG_B */     /* (2.1) doremon */     /* (2.2) doremon */   this->PaperEG__B::__fieldInitializers_PaperEG_B( /* printing actuals funName = __fieldInitializers_PaperEG_B */  )  /* (3) doremon funName = __fieldInitializers_PaperEG_B */   ;
}
::PaperEG__B* PaperEG__B::_make(::PaperEG* out__) {
    ::PaperEG__B* this_ = new (::x10aux::alloc_z< ::PaperEG__B>()) ::PaperEG__B();
    this_->_constructor(out__);
    return this_;
}



//#line 10 "/home/rushhub/ugrc/common/PaperEG.x10"
void PaperEG__B::__fieldInitializers_PaperEG_B() {
    this->FMGL(r3) = (::x10aux::class_cast_unchecked< ::PaperEG__A*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
const ::x10aux::serialization_id_t PaperEG__B::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::PaperEG__B::_deserializer);

void PaperEG__B::_serialize_body(::x10aux::serialization_buffer& buf) {
    ::PaperEG__A::_serialize_body(buf);
    buf.write(this->FMGL(r3));
    buf.write(this->FMGL(out__));
    
}

::x10::lang::Reference* ::PaperEG__B::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::PaperEG__B* this_ = new (::x10aux::alloc_z< ::PaperEG__B>()) ::PaperEG__B();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void PaperEG__B::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    ::PaperEG__A::_deserialize_body(buf);
    FMGL(r3) = buf.read< ::PaperEG__A*>();
    FMGL(out__) = buf.read< ::PaperEG*>();
}

::x10aux::RuntimeType PaperEG__B::rtt;
void PaperEG__B::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType* parents[1] = { ::x10aux::getRTT< ::PaperEG__A>()};
    rtt.initStageTwo("PaperEG.B",::x10aux::RuntimeType::class_kind, 1, parents, 0, NULL, NULL);
}

/* END of PaperEG$B */
/*************************************************/
