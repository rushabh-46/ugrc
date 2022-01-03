/*************************************************/
/* START of TestClass */
#include <TestClass.h>

#include <x10/lang/Long.h>
#include <x10/regionarray/DistArray.h>
#include <Node.h>
#include <x10/regionarray/Region.h>
#include <x10/regionarray/Dist.h>
#include <x10/lang/Rail.h>
#include <x10/lang/String.h>
#include <x10/lang/Exception.h>
#include <x10/lang/Boolean.h>
#include <x10/io/Printer.h>
#include <x10/io/Console.h>
#include <x10/lang/Any.h>
#include <x10/xrx/Runtime.h>
#include <x10/xrx/FinishState.h>
#include <x10/lang/Iterator.h>
#include <x10/lang/Point.h>
#include <x10/lang/VoidFun_0_0.h>
#include <x10/lang/FailedDynamicCheckException.h>
#include <x10/lang/Place.h>
#include <x10/xrx/Runtime__Profile.h>
#include <x10/compiler/AsyncClosure.h>
#include <x10/lang/CheckedThrowable.h>
#include <x10/compiler/Synthetic.h>
#include <x10/lang/String.h>
#ifndef TESTCLASS__CLOSURE__26_CLOSURE
#define TESTCLASS__CLOSURE__26_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class TestClass__closure__26 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<TestClass__closure__26> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 37 "/home/rushhub/ugrc/common/TestClass.x10"
        x10_long index =   /* (1) After temp setup, funName = operator() */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10aux::nullCheck(i)->x10::lang::Point::__apply(
                                                                                                                                ((x10_long)0ll))  /* (3) doremon funName = operator() */   ;
        
        //#line 38 "/home/rushhub/ugrc/common/TestClass.x10"
        if ((::x10aux::struct_equals(::x10aux::nullCheck((__extension__ ({
                                         ::x10::regionarray::DistArray< ::Node*>* t__227 =
                                           saved_this->FMGL(nodeSet);
                                         ::x10::lang::Point* pt__228 =
                                           i;
                                         if (  /* (1) After temp setup, funName = operator! */     /* (2.1) doremon */   !((::x10aux::struct_equals(::x10aux::nullCheck(pt__228)->FMGL(rank),
                                                                                                                                                    ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(t__227)->FMGL(dist))->FMGL(region))->FMGL(rank)))))
                                         {
                                             ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::TestClass_Strings::sl__390))));
                                         }
                                           /* (1) After temp setup, funName = operator() */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10aux::nullCheck(t__227)->x10::regionarray::DistArray< ::Node*>::__apply(
                                                                                                                                                pt__228)  /* (3) doremon funName = operator() */   ;
                                     }))
                                     )->FMGL(committee), ((x10_long)-1ll))))
        {
            
            //#line 39 "/home/rushhub/ugrc/common/TestClass.x10"
            ::x10aux::nullCheck((__extension__ ({
                ::x10::regionarray::DistArray< ::Node*>* t__237 =
                  saved_this->FMGL(nodeSet);
                ::x10::lang::Point* pt__238 = i;
                if (  /* (1) After temp setup, funName = operator! */     /* (2.1) doremon */   !((::x10aux::struct_equals(::x10aux::nullCheck(pt__238)->FMGL(rank),
                                                                                                                           ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(t__237)->FMGL(dist))->FMGL(region))->FMGL(rank)))))
                {
                    ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::TestClass_Strings::sl__391))));
                }
                  /* (1) After temp setup, funName = operator() */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10aux::nullCheck(t__237)->x10::regionarray::DistArray< ::Node*>::__apply(
                                                                                                                       pt__238)  /* (3) doremon funName = operator() */   ;
            }))
            )->FMGL(committee) = index;
        }
        
          ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(                          reinterpret_cast< ::x10::lang::Any*>(  /* (1) After temp setup, funName = operator+ */     /* (2.1) doremon */   ::x10::lang::String::__plus(::x10::lang::String::__plus(    
            ::x10::lang::Place::_make(::x10aux::here), (&::TestClass_Strings::sl__392)), index)))  /* (3) doremon funName = println */   ;
    }
    
    // captured environment
    ::x10::lang::Point* i;
    ::TestClass* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->i);
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        TestClass__closure__26* storage = ::x10aux::alloc_z<TestClass__closure__26>();
        buf.record_reference(storage);
        ::x10::lang::Point* that_i = buf.read< ::x10::lang::Point*>();
        ::TestClass* that_saved_this = buf.read< ::TestClass*>();
        TestClass__closure__26* this_ = new (storage) TestClass__closure__26(that_i, that_saved_this);
        return this_;
    }
    
    TestClass__closure__26(::x10::lang::Point* i, ::TestClass* saved_this) : i(i), saved_this(saved_this) { }
    
    TestClass__closure__26(::x10::lang::Point* i, ::x10::regionarray::Dist* zztemp2, ::x10::regionarray::DistArray< ::Node*>* zztemp3){ 
                                                                                                                                      this->i = i;
                                                                                                                                      this->saved_this = ::TestClass::_make();
                                                                                                                                      this->saved_this->FMGL(D) = zztemp2;
                                                                                                                                      this->saved_this->FMGL(nodeSet) = zztemp3;
                                                                                                                                       }
                                                                                                                                      
                                                                                                                                      static const ::x10aux::serialization_id_t _serialization_id;
                                                                                                                                      
                                                                                                                                      static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
                                                                                                                                      virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
                                                                                                                                      
                                                                                                                                      const char* toNativeString() {
                                                                                                                                          return "/home/rushhub/ugrc/common/TestClass.x10:36-41";
                                                                                                                                      }
    
    };
    
    #endif // TESTCLASS__CLOSURE__26_CLOSURE
    #ifndef TESTCLASS__CLOSURE__25_CLOSURE
#define TESTCLASS__CLOSURE__25_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class TestClass__closure__25 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<TestClass__closure__25> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        {
              /*  current class: TestClass, current method: selfCommittee  */  ::x10::regionarray::Dist* zztemp2 = saved_this->FMGL(D);
            ::x10::regionarray::DistArray< ::Node*>* zztemp3 = saved_this->FMGL(nodeSet);
              /* (1) After temp setup, funName = runAt */     /*  zztemp2, zztemp3  id = 25  */  if (true) { 
              /* (2.1) doremon */     /* (2.2) doremon */   ::x10::xrx::Runtime::runAt(
                                                              (__extension__ ({
                                                                  ::x10::regionarray::Dist* t__217 =
                                                                    saved_this->FMGL(D);
                                                                  ::x10::lang::Point* pt__218 =
                                                                    i;
                                                                  if (  /* (1) After temp setup, funName = operator! */     /* (2.1) doremon */   !((::x10aux::struct_equals(::x10aux::nullCheck(pt__218)->FMGL(rank),
                                                                                                                                                                             ::x10aux::nullCheck(::x10aux::nullCheck(t__217)->FMGL(region))->FMGL(rank)))))
                                                                  {
                                                                      ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::TestClass_Strings::sl__389))));
                                                                  }
                                                                    /* (1) After temp setup, funName = operator() */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10aux::nullCheck(t__217)->__apply(
                                                                                                                                                                         pt__218)  /* (3) doremon funName = operator() */   ;
                                                              }))
                                                              ,
                                                               /* Into Closure_c !!  */   /* streams popped  */   /*  Creating closure instantiations ... ? */    /* template arguments =   */reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(TestClass__closure__26)))TestClass__closure__26(  /* cname = TestClass__closure__26 */  i, zztemp2, zztemp3))),
                                                              ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))  /* (3) doremon funName = runAt */   ;
              } else { 
            TestClass__closure__26* sampleTemp = new TestClass__closure__26(i, zztemp2, zztemp3);
            sampleTemp->__apply(); 
            }
            ;
        }
    }
    
    // captured environment
    ::x10::lang::Point* i;
    ::TestClass* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->i);
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        TestClass__closure__25* storage = ::x10aux::alloc_z<TestClass__closure__25>();
        buf.record_reference(storage);
        ::x10::lang::Point* that_i = buf.read< ::x10::lang::Point*>();
        ::TestClass* that_saved_this = buf.read< ::TestClass*>();
        TestClass__closure__25* this_ = new (storage) TestClass__closure__25(that_i, that_saved_this);
        return this_;
    }
    
    TestClass__closure__25(::x10::lang::Point* i, ::TestClass* saved_this) : i(i), saved_this(saved_this) { }
    
    TestClass__closure__25(::x10::lang::Point* i, ::TestClass* saved_this,x10_long zzztemp){ 
                                                                                           this->i = i;
                                                                                           this->saved_this = saved_this;
                                                                                            }
                                                                                           
                                                                                           static const ::x10aux::serialization_id_t _serialization_id;
                                                                                           
                                                                                           static const ::x10aux::serialization_id_t _network_id;
                                                                                           
                                                                                           static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
                                                                                           virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
                                                                                           
                                                                                           const char* toNativeString() {
                                                                                               return "/home/rushhub/ugrc/common/TestClass.x10:36-41";
                                                                                           }
    
    };
    
    #endif // TESTCLASS__CLOSURE__25_CLOSURE
    #ifndef TESTCLASS__CLOSURE__28_CLOSURE
#define TESTCLASS__CLOSURE__28_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class TestClass__closure__28 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<TestClass__closure__28> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        
        //#line 50 "/home/rushhub/ugrc/common/TestClass.x10"
        ::x10::regionarray::DistArray< ::Node*>* t__280 = saved_this->FMGL(nodeSet);
        ::x10::lang::Point* pt__281 = i;
        ::Node* v__282 = ::Node::_make();
        if (  /* (1) After temp setup, funName = operator! */     /* (2.1) doremon */   !((::x10aux::struct_equals(::x10aux::nullCheck(pt__281)->FMGL(rank),
                                                                                                                   ::x10aux::nullCheck(::x10aux::nullCheck(::x10aux::nullCheck(t__280)->FMGL(dist))->FMGL(region))->FMGL(rank)))))
        {
            ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::TestClass_Strings::sl__394))));
        }
          /* (1) After temp setup, funName = operator()= */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10aux::nullCheck(t__280)->x10::regionarray::DistArray< ::Node*>::__set(
                                                                                                                pt__281,
                                                                                                                v__282)  /* (3) doremon funName = operator()= */   ;
    }
    
    // captured environment
    ::TestClass* saved_this;
    ::x10::lang::Point* i;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->saved_this);
        buf.write(this->i);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        TestClass__closure__28* storage = ::x10aux::alloc_z<TestClass__closure__28>();
        buf.record_reference(storage);
        ::TestClass* that_saved_this = buf.read< ::TestClass*>();
        ::x10::lang::Point* that_i = buf.read< ::x10::lang::Point*>();
        TestClass__closure__28* this_ = new (storage) TestClass__closure__28(that_saved_this, that_i);
        return this_;
    }
    
    TestClass__closure__28(::TestClass* saved_this, ::x10::lang::Point* i) : saved_this(saved_this), i(i) { }
    
    TestClass__closure__28(::x10::regionarray::Dist* zztemp6, ::x10::regionarray::DistArray< ::Node*>* zztemp7, ::x10::lang::Point* i){ 
                                                                                                                                      this->i = i;
                                                                                                                                      this->saved_this = ::TestClass::_make();
                                                                                                                                      this->saved_this->FMGL(D) = zztemp6;
                                                                                                                                      this->saved_this->FMGL(nodeSet) = zztemp7;
                                                                                                                                       }
                                                                                                                                      
                                                                                                                                      static const ::x10aux::serialization_id_t _serialization_id;
                                                                                                                                      
                                                                                                                                      static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
                                                                                                                                      virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
                                                                                                                                      
                                                                                                                                      const char* toNativeString() {
                                                                                                                                          return "/home/rushhub/ugrc/common/TestClass.x10:49-51";
                                                                                                                                      }
    
    };
    
    #endif // TESTCLASS__CLOSURE__28_CLOSURE
    #ifndef TESTCLASS__CLOSURE__27_CLOSURE
#define TESTCLASS__CLOSURE__27_CLOSURE
#include <x10/lang/Closure.h>
#include <x10/lang/VoidFun_0_0.h>
class TestClass__closure__27 : public ::x10::lang::Closure {
    public:
    
    static ::x10::lang::VoidFun_0_0::itable<TestClass__closure__27> _itable;
    static ::x10aux::itable_entry _itables[2];
    
    virtual ::x10aux::itable_entry* _getITables() { return _itables; }
    
    void __apply(){
        {
              /*  current class: TestClass, current method: initialize  */  ::x10::regionarray::Dist* zztemp6 = saved_this->FMGL(D);
            ::x10::regionarray::DistArray< ::Node*>* zztemp7 = saved_this->FMGL(nodeSet);
              /* (1) After temp setup, funName = runAt */     /*  zztemp6, zztemp7  id = 27  */  if (true) { 
              /* (2.1) doremon */     /* (2.2) doremon */   ::x10::xrx::Runtime::runAt(
                                                              (__extension__ ({
                                                                  ::x10::regionarray::Dist* t__259 =
                                                                    saved_this->FMGL(D);
                                                                  ::x10::lang::Point* pt__260 =
                                                                    i;
                                                                  if (  /* (1) After temp setup, funName = operator! */     /* (2.1) doremon */   !((::x10aux::struct_equals(::x10aux::nullCheck(pt__260)->FMGL(rank),
                                                                                                                                                                             ::x10aux::nullCheck(::x10aux::nullCheck(t__259)->FMGL(region))->FMGL(rank)))))
                                                                  {
                                                                      ::x10aux::throwException(::x10aux::nullCheck(::x10::lang::FailedDynamicCheckException::_make((&::TestClass_Strings::sl__393))));
                                                                  }
                                                                    /* (1) After temp setup, funName = operator() */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10aux::nullCheck(t__259)->__apply(
                                                                                                                                                                         pt__260)  /* (3) doremon funName = operator() */   ;
                                                              }))
                                                              ,
                                                               /* Into Closure_c !!  */   /* streams popped  */   /*  Creating closure instantiations ... ? */    /* template arguments =   */reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(TestClass__closure__28)))TestClass__closure__28(  /* cname = TestClass__closure__28 */  zztemp6, zztemp7, i))),
                                                              ::x10aux::class_cast_unchecked< ::x10::xrx::Runtime__Profile*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)))  /* (3) doremon funName = runAt */   ;
              } else { 
            TestClass__closure__28* sampleTemp = new TestClass__closure__28(zztemp6, zztemp7, i);
            sampleTemp->__apply(); 
            }
            ;
        }
    }
    
    // captured environment
    ::x10::lang::Point* i;
    ::TestClass* saved_this;
    
    ::x10aux::serialization_id_t _get_serialization_id() {
        return _serialization_id;
    }
    
    ::x10aux::serialization_id_t _get_network_id() {
        return _network_id;
    }
    
    void _serialize_body(::x10aux::serialization_buffer &buf) {
        buf.write(this->i);
        buf.write(this->saved_this);
    }
    
    static x10::lang::Reference* _deserialize(::x10aux::deserialization_buffer &buf) {
        TestClass__closure__27* storage = ::x10aux::alloc_z<TestClass__closure__27>();
        buf.record_reference(storage);
        ::x10::lang::Point* that_i = buf.read< ::x10::lang::Point*>();
        ::TestClass* that_saved_this = buf.read< ::TestClass*>();
        TestClass__closure__27* this_ = new (storage) TestClass__closure__27(that_i, that_saved_this);
        return this_;
    }
    
    TestClass__closure__27(::x10::lang::Point* i, ::TestClass* saved_this) : i(i), saved_this(saved_this) { }
    
    TestClass__closure__27(::x10::lang::Point* i, ::TestClass* saved_this,x10_long zzztemp){ 
                                                                                           this->i = i;
                                                                                           this->saved_this = saved_this;
                                                                                            }
                                                                                           
                                                                                           static const ::x10aux::serialization_id_t _serialization_id;
                                                                                           
                                                                                           static const ::x10aux::serialization_id_t _network_id;
                                                                                           
                                                                                           static const ::x10aux::RuntimeType* getRTT() { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
                                                                                           virtual const ::x10aux::RuntimeType *_type() const { return ::x10aux::getRTT< ::x10::lang::VoidFun_0_0>(); }
                                                                                           
                                                                                           const char* toNativeString() {
                                                                                               return "/home/rushhub/ugrc/common/TestClass.x10:49-51";
                                                                                           }
    
    };
    
    #endif // TESTCLASS__CLOSURE__27_CLOSURE
    
//#line 9 "/home/rushhub/ugrc/common/TestClass.x10"

//#line 10 "/home/rushhub/ugrc/common/TestClass.x10"

//#line 13 "/home/rushhub/ugrc/common/TestClass.x10"
/** Region and Distribution specification. */

//#line 15 "/home/rushhub/ugrc/common/TestClass.x10"
void TestClass::main(::x10::lang::Rail< ::x10::lang::String* >* args) {
    
    //#line 17 "/home/rushhub/ugrc/common/TestClass.x10"
    ::TestClass* kc = ::TestClass::_make();
    
    //#line 19 "/home/rushhub/ugrc/common/TestClass.x10"
    if (  /* (1) After temp setup, funName = operator> */     /* (2.1) doremon */   (((x10_long)(::x10aux::nullCheck(args)->FMGL(size))) > (((x10_long)0ll))))
    {
        
        //#line 20 "/home/rushhub/ugrc/common/TestClass.x10"
        ::x10aux::nullCheck(kc)->FMGL(nodes) =   /* (1) After temp setup, funName = parse */     /* (2.1) doremon */   ::x10::lang::LongNatives::parseLong(  /* (1) After temp setup, funName = operator() */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10aux::nullCheck(args)->x10::lang::Rail< ::x10::lang::String* >::__apply(
                                                                                                                                                                                                                                                                  ((x10_long)0ll))  /* (3) doremon funName = operator() */   );
    }
    
    //#line 23 "/home/rushhub/ugrc/common/TestClass.x10"
      /* (1) After temp setup, funName = println */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::io::Console::FMGL(OUT__get)()->x10::io::Printer::println(
                                                                                                        reinterpret_cast< ::x10::lang::Any*>(  /* (1) After temp setup, funName = operator+ */     /* (2.1) doremon */   ::x10::lang::String::__plus((&::TestClass_Strings::sl__388), ::x10aux::nullCheck(kc)->FMGL(nodes))))  /* (3) doremon funName = println */   ;
    
    //#line 25 "/home/rushhub/ugrc/common/TestClass.x10"
    ::x10aux::nullCheck(kc)->FMGL(R) =   /* (1) After temp setup, funName = make */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::regionarray::Region::make(
                                                                                                                                        ((x10_long)0ll),
                                                                                                                                          /* (1) After temp setup, funName = operator- */     /* (2.1) doremon */   ((::x10aux::nullCheck(kc)->FMGL(nodes)) - (((x10_long)1ll))))  /* (3) doremon funName = make */   ;
    
    //#line 26 "/home/rushhub/ugrc/common/TestClass.x10"
    ::x10aux::nullCheck(kc)->FMGL(D) =   /* (1) After temp setup, funName = makeBlock */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::regionarray::Dist::makeBlock(
                                                                                                                                             ::x10aux::nullCheck(kc)->FMGL(R))  /* (3) doremon funName = makeBlock */   ;
    
    //#line 28 "/home/rushhub/ugrc/common/TestClass.x10"
    ::x10aux::nullCheck(kc)->FMGL(nodeSet) =   /* (1) After temp setup, funName = make */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::regionarray::DistArray<void>::make< ::Node* >(
                                                                                                                                              ::x10aux::nullCheck(kc)->FMGL(D))  /* (3) doremon funName = make */   ;
    
    //#line 29 "/home/rushhub/ugrc/common/TestClass.x10"
      /* (1) After temp setup, funName = initialize */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10aux::nullCheck(kc)->initialize()  /* (3) doremon funName = initialize */   ;
    
    //#line 30 "/home/rushhub/ugrc/common/TestClass.x10"
      /* (1) After temp setup, funName = selfCommittee */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10aux::nullCheck(kc)->selfCommittee()  /* (3) doremon funName = selfCommittee */   ;
}

//#line 33 "/home/rushhub/ugrc/common/TestClass.x10"
void TestClass::selfCommittee() {
    {
        
        //#line 34 "/home/rushhub/ugrc/common/TestClass.x10"
          /* (1) After temp setup, funName = ensureNotInAtomic */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::xrx::Runtime::ensureNotInAtomic()  /* (3) doremon funName = ensureNotInAtomic */   ;
        ::x10::xrx::FinishState* fs__289 =   /* (1) After temp setup, funName = startFinish */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::xrx::Runtime::startFinish()  /* (3) doremon funName = startFinish */   ;
        try {
            {
                
                //#line 35 "/home/rushhub/ugrc/common/TestClass.x10"
                {
                    ::x10::lang::Iterator< ::x10::lang::Point*>* i__276;
                    for (i__276 =   /* (1) After temp setup, funName = iterator */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(D))->FMGL(region))->iterator()  /* (3) doremon funName = iterator */   ;
                           /* (1) After temp setup, funName = hasNext */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(i__276));
                         ) {
                        ::x10::lang::Point* i =   /* (1) After temp setup, funName = next */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(i__276));
                        
                        //#line 36 "/home/rushhub/ugrc/common/TestClass.x10"
                          /*  current class: TestClass, current method: selfCommittee  */  ::x10::regionarray::Dist* zztemp0 = this->FMGL(D);
                        ::x10::regionarray::DistArray< ::Node*>* zztemp1 = this->FMGL(nodeSet);
                          /* (1) After temp setup, funName = runAsync */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::xrx::Runtime::runAsync(
                                                                                                                              /* Into Closure_c !!  */   /* streams popped  */   /*  Creating closure instantiations ... ? */    /* template arguments =   */reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(TestClass__closure__25)))TestClass__closure__25(  /* cname = TestClass__closure__25 */  i, this))))  /* (3) doremon funName = runAsync */   ;
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc56) {
            {
                ::x10::lang::CheckedThrowable* ct__287 = __exc56;
                {
                      /* (1) After temp setup, funName = pushException */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::xrx::Runtime::pushException(
                                                                                                                              ct__287)  /* (3) doremon funName = pushException */   ;
                }
            }
        }
          /* (1) After temp setup, funName = stopFinish */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::xrx::Runtime::stopFinish(
                                                                                                               fs__289)  /* (3) doremon funName = stopFinish */   ;
    }
}

//#line 46 "/home/rushhub/ugrc/common/TestClass.x10"
void TestClass::initialize() {
    {
        
        //#line 47 "/home/rushhub/ugrc/common/TestClass.x10"
          /* (1) After temp setup, funName = ensureNotInAtomic */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::xrx::Runtime::ensureNotInAtomic()  /* (3) doremon funName = ensureNotInAtomic */   ;
        ::x10::xrx::FinishState* fs__297 =   /* (1) After temp setup, funName = startFinish */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::xrx::Runtime::startFinish()  /* (3) doremon funName = startFinish */   ;
        try {
            {
                
                //#line 48 "/home/rushhub/ugrc/common/TestClass.x10"
                {
                    ::x10::lang::Iterator< ::x10::lang::Point*>* i__279;
                    for (i__279 =   /* (1) After temp setup, funName = iterator */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10aux::nullCheck(::x10aux::nullCheck(this->FMGL(D))->FMGL(region))->iterator()  /* (3) doremon funName = iterator */   ;
                           /* (1) After temp setup, funName = hasNext */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::lang::Iterator< ::x10::lang::Point*>::hasNext(::x10aux::nullCheck(i__279));
                         ) {
                        ::x10::lang::Point* i =   /* (1) After temp setup, funName = next */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::lang::Iterator< ::x10::lang::Point*>::next(::x10aux::nullCheck(i__279));
                        
                        //#line 49 "/home/rushhub/ugrc/common/TestClass.x10"
                          /*  current class: TestClass, current method: initialize  */  ::x10::regionarray::Dist* zztemp4 = this->FMGL(D);
                        ::x10::regionarray::DistArray< ::Node*>* zztemp5 = this->FMGL(nodeSet);
                          /* (1) After temp setup, funName = runAsync */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::xrx::Runtime::runAsync(
                                                                                                                              /* Into Closure_c !!  */   /* streams popped  */   /*  Creating closure instantiations ... ? */    /* template arguments =   */reinterpret_cast< ::x10::lang::VoidFun_0_0*>((new (::x10aux::alloc< ::x10::lang::VoidFun_0_0>(sizeof(TestClass__closure__27)))TestClass__closure__27(  /* cname = TestClass__closure__27 */  i, this))))  /* (3) doremon funName = runAsync */   ;
                    }
                }
                
            }
        }
        catch (::x10::lang::CheckedThrowable* __exc58) {
            {
                ::x10::lang::CheckedThrowable* ct__295 = __exc58;
                {
                      /* (1) After temp setup, funName = pushException */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::xrx::Runtime::pushException(
                                                                                                                              ct__295)  /* (3) doremon funName = pushException */   ;
                }
            }
        }
          /* (1) After temp setup, funName = stopFinish */     /* (2.1) doremon */     /* (2.2) doremon */   ::x10::xrx::Runtime::stopFinish(
                                                                                                               fs__297)  /* (3) doremon funName = stopFinish */   ;
    }
}

//#line 7 "/home/rushhub/ugrc/common/TestClass.x10"
::TestClass* TestClass::TestClass____this__TestClass() {
    return this;
    
}

//#line 8 "/home/rushhub/ugrc/common/TestClass.x10"
void TestClass::_constructor() {
    
    //#line 7 "/home/rushhub/ugrc/common/TestClass.x10"
      /* (1) After temp setup, funName = __fieldInitializers_TestClass */     /* (2.1) doremon */     /* (2.2) doremon */   this->TestClass::__fieldInitializers_TestClass()  /* (3) doremon funName = __fieldInitializers_TestClass */   ;
}
::TestClass* TestClass::_make() {
    ::TestClass* this_ = new (::x10aux::alloc_z< ::TestClass>()) ::TestClass();
    this_->_constructor();
    return this_;
}



//#line 7 "/home/rushhub/ugrc/common/TestClass.x10"
void TestClass::__fieldInitializers_TestClass() {
    this->FMGL(nodes) = ((x10_long)5ll);
    this->FMGL(nodeSet) = (::x10aux::class_cast_unchecked< ::x10::regionarray::DistArray< ::Node*>*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(R) = (::x10aux::class_cast_unchecked< ::x10::regionarray::Region*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
    this->FMGL(D) = (::x10aux::class_cast_unchecked< ::x10::regionarray::Dist*>(reinterpret_cast< ::x10::lang::NullType*>(X10_NULL)));
}
const ::x10aux::serialization_id_t TestClass::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::TestClass::_deserializer);

void TestClass::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(nodes));
    buf.write(this->FMGL(nodeSet));
    buf.write(this->FMGL(R));
    buf.write(this->FMGL(D));
    
}

::x10::lang::Reference* ::TestClass::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::TestClass* this_ = new (::x10aux::alloc_z< ::TestClass>()) ::TestClass();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void TestClass::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(nodes) = buf.read<x10_long>();
    FMGL(nodeSet) = buf.read< ::x10::regionarray::DistArray< ::Node*>*>();
    FMGL(R) = buf.read< ::x10::regionarray::Region*>();
    FMGL(D) = buf.read< ::x10::regionarray::Dist*>();
}

::x10aux::RuntimeType TestClass::rtt;
void TestClass::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("TestClass",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

::x10::lang::String TestClass_Strings::sl__390("!(pt$228.rank == t$227.dist.region.rank)");
::x10::lang::String TestClass_Strings::sl__394("!(pt$270.rank == t$269.dist.region.rank)");
::x10::lang::String TestClass_Strings::sl__389("!(pt$218.rank == t$217.region.rank)");
::x10::lang::String TestClass_Strings::sl__393("!(pt$260.rank == t$259.region.rank)");
::x10::lang::String TestClass_Strings::sl__392(" says hello for index = ");
::x10::lang::String TestClass_Strings::sl__391("!(pt$238.rank == t$237.dist.region.rank)");
::x10::lang::String TestClass_Strings::sl__388("Total nodes = ");

::x10::lang::VoidFun_0_0::itable<TestClass__closure__26>TestClass__closure__26::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &TestClass__closure__26::__apply, &TestClass__closure__26::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry TestClass__closure__26::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &TestClass__closure__26::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t TestClass__closure__26::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(TestClass__closure__26::_deserialize);

::x10::lang::VoidFun_0_0::itable<TestClass__closure__25>TestClass__closure__25::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &TestClass__closure__25::__apply, &TestClass__closure__25::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry TestClass__closure__25::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &TestClass__closure__25::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t TestClass__closure__25::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(TestClass__closure__25::_deserialize);
const ::x10aux::serialization_id_t TestClass__closure__25::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(TestClass__closure__25::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

::x10::lang::VoidFun_0_0::itable<TestClass__closure__28>TestClass__closure__28::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &TestClass__closure__28::__apply, &TestClass__closure__28::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry TestClass__closure__28::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &TestClass__closure__28::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t TestClass__closure__28::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(TestClass__closure__28::_deserialize);

::x10::lang::VoidFun_0_0::itable<TestClass__closure__27>TestClass__closure__27::_itable(&::x10::lang::Reference::equals, &::x10::lang::Closure::hashCode, &TestClass__closure__27::__apply, &TestClass__closure__27::toString, &::x10::lang::Closure::typeName);
::x10aux::itable_entry TestClass__closure__27::_itables[2] = {::x10aux::itable_entry(&::x10aux::getRTT< ::x10::lang::VoidFun_0_0>, &TestClass__closure__27::_itable),::x10aux::itable_entry(NULL, NULL)};

const ::x10aux::serialization_id_t TestClass__closure__27::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(TestClass__closure__27::_deserialize);
const ::x10aux::serialization_id_t TestClass__closure__27::_network_id = 
    ::x10aux::NetworkDispatcher::addNetworkDeserializer(TestClass__closure__27::_deserialize,::x10aux::CLOSURE_KIND_ASYNC_CLOSURE);

/* END of TestClass */
/*************************************************/
/*************************************************/
/* START of Node */
#include <Node.h>

#include <x10/lang/Long.h>
#include <x10/compiler/Synthetic.h>

//#line 60 "/home/rushhub/ugrc/common/TestClass.x10"

//#line 58 "/home/rushhub/ugrc/common/TestClass.x10"
::Node* Node::Node____this__Node() {
    return this;
    
}

//#line 59 "/home/rushhub/ugrc/common/TestClass.x10"
void Node::_constructor() {
    
    //#line 58 "/home/rushhub/ugrc/common/TestClass.x10"
      /* (1) After temp setup, funName = __fieldInitializers_Node */     /* (2.1) doremon */     /* (2.2) doremon */   this->Node::__fieldInitializers_Node()  /* (3) doremon funName = __fieldInitializers_Node */   ;
}
::Node* Node::_make() {
    ::Node* this_ = new (::x10aux::alloc_z< ::Node>()) ::Node();
    this_->_constructor();
    return this_;
}



//#line 58 "/home/rushhub/ugrc/common/TestClass.x10"
void Node::__fieldInitializers_Node() {
    this->FMGL(committee) = ((x10_long)-1ll);
}
const ::x10aux::serialization_id_t Node::_serialization_id = 
    ::x10aux::DeserializationDispatcher::addDeserializer(::Node::_deserializer);

void Node::_serialize_body(::x10aux::serialization_buffer& buf) {
    buf.write(this->FMGL(committee));
    
}

::x10::lang::Reference* ::Node::_deserializer(::x10aux::deserialization_buffer& buf) {
    ::Node* this_ = new (::x10aux::alloc_z< ::Node>()) ::Node();
    buf.record_reference(this_);
    this_->_deserialize_body(buf);
    return this_;
}

void Node::_deserialize_body(::x10aux::deserialization_buffer& buf) {
    FMGL(committee) = buf.read<x10_long>();
}

::x10aux::RuntimeType Node::rtt;
void Node::_initRTT() {
    if (rtt.initStageOne(&rtt)) return;
    const ::x10aux::RuntimeType** parents = NULL; 
    rtt.initStageTwo("Node",::x10aux::RuntimeType::class_kind, 0, parents, 0, NULL, NULL);
}

/* END of Node */
/*************************************************/
