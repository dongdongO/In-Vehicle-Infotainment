/*
 * This file was generated by the CommonAPI Generators.
 * Used org.genivi.commonapi.someip 3.2.0.v202012010944.
 * Used org.franca.core 0.13.1.201807231814.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
 * If a copy of the MPL was not distributed with this file, You can obtain one at
 * http://mozilla.org/MPL/2.0/.
 */
#ifndef V1_COMMONAPI_INSTRUMENT_CLUSTER_SOMEIP_STUB_ADAPTER_HPP_
#define V1_COMMONAPI_INSTRUMENT_CLUSTER_SOMEIP_STUB_ADAPTER_HPP_

#include <v1/commonapi/InstrumentClusterStub.hpp>

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#define HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

#include <CommonAPI/SomeIP/AddressTranslator.hpp>
#include <CommonAPI/SomeIP/StubAdapterHelper.hpp>
#include <CommonAPI/SomeIP/StubAdapter.hpp>
#include <CommonAPI/SomeIP/Factory.hpp>
#include <CommonAPI/SomeIP/Types.hpp>
#include <CommonAPI/SomeIP/Constants.hpp>

#if defined (HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE)
#undef COMMONAPI_INTERNAL_COMPILATION
#undef HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

namespace v1 {
namespace commonapi {

template <typename _Stub = ::v1::commonapi::InstrumentClusterStub, typename... _Stubs>
class InstrumentClusterSomeIPStubAdapterInternal
    : public virtual InstrumentClusterStubAdapter,
      public CommonAPI::SomeIP::StubAdapterHelper< _Stub, _Stubs...>,
      public std::enable_shared_from_this< InstrumentClusterSomeIPStubAdapterInternal<_Stub, _Stubs...>>
{
public:
    typedef CommonAPI::SomeIP::StubAdapterHelper< _Stub, _Stubs...> InstrumentClusterSomeIPStubAdapterHelper;

    ~InstrumentClusterSomeIPStubAdapterInternal() {
        deactivateManagedInstances();
        InstrumentClusterSomeIPStubAdapterHelper::deinit();
    }

    void deactivateManagedInstances() {}
    
    CommonAPI::SomeIP::GetAttributeStubDispatcher<
        ::v1::commonapi::InstrumentClusterStub,
        CommonAPI::Version
    > getInstrumentClusterInterfaceVersionStubDispatcher;

    CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v1::commonapi::InstrumentClusterStub,
        std::tuple< uint16_t>,
        std::tuple< std::string>,
        std::tuple< CommonAPI::SomeIP::IntegerDeployment<uint16_t>>,
        std::tuple< CommonAPI::SomeIP::StringDeployment>
    > setSpeedRpmStubDispatcher;
    
    CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v1::commonapi::InstrumentClusterStub,
        std::tuple< uint16_t>,
        std::tuple< std::string>,
        std::tuple< CommonAPI::SomeIP::IntegerDeployment<uint16_t>>,
        std::tuple< CommonAPI::SomeIP::StringDeployment>
    > setBatteryStubDispatcher;
    
    CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v1::commonapi::InstrumentClusterStub,
        std::tuple< uint16_t>,
        std::tuple< std::string>,
        std::tuple< CommonAPI::SomeIP::IntegerDeployment<uint16_t>>,
        std::tuple< CommonAPI::SomeIP::StringDeployment>
    > setGearStubDispatcher;
    
    CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v1::commonapi::InstrumentClusterStub,
        std::tuple< uint16_t>,
        std::tuple< std::string>,
        std::tuple< CommonAPI::SomeIP::IntegerDeployment<uint16_t>>,
        std::tuple< CommonAPI::SomeIP::StringDeployment>
    > setDirectionStubDispatcher;
    
    InstrumentClusterSomeIPStubAdapterInternal(
        const CommonAPI::SomeIP::Address &_address,
        const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection,
        const std::shared_ptr<CommonAPI::StubBase> &_stub):
        CommonAPI::SomeIP::StubAdapter(_address, _connection),
        InstrumentClusterSomeIPStubAdapterHelper(
            _address,
            _connection,
            std::dynamic_pointer_cast< InstrumentClusterStub>(_stub)),
        getInstrumentClusterInterfaceVersionStubDispatcher(&InstrumentClusterStub::lockInterfaceVersionAttribute, &InstrumentClusterStub::getInterfaceVersion, false, true),
        setSpeedRpmStubDispatcher(
            &InstrumentClusterStub::setSpeedRpm,
            false,
            _stub->hasElement(0),
            std::make_tuple(static_cast< CommonAPI::SomeIP::IntegerDeployment<uint16_t>* >(nullptr)),
            std::make_tuple(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr)))
        
        ,
        setBatteryStubDispatcher(
            &InstrumentClusterStub::setBattery,
            false,
            _stub->hasElement(1),
            std::make_tuple(static_cast< CommonAPI::SomeIP::IntegerDeployment<uint16_t>* >(nullptr)),
            std::make_tuple(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr)))
        
        ,
        setGearStubDispatcher(
            &InstrumentClusterStub::setGear,
            false,
            _stub->hasElement(2),
            std::make_tuple(static_cast< CommonAPI::SomeIP::IntegerDeployment<uint16_t>* >(nullptr)),
            std::make_tuple(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr)))
        
        ,
        setDirectionStubDispatcher(
            &InstrumentClusterStub::setDirection,
            false,
            _stub->hasElement(3),
            std::make_tuple(static_cast< CommonAPI::SomeIP::IntegerDeployment<uint16_t>* >(nullptr)),
            std::make_tuple(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr)))
        
    {
        InstrumentClusterSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x69) }, &setSpeedRpmStubDispatcher );
        InstrumentClusterSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x6a) }, &setBatteryStubDispatcher );
        InstrumentClusterSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x6b) }, &setGearStubDispatcher );
        InstrumentClusterSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x6c) }, &setDirectionStubDispatcher );
        // Provided events/fields
    }

    // Register/Unregister event handlers for selective broadcasts
    void registerSelectiveEventHandlers();
    void unregisterSelectiveEventHandlers();

};


template <typename _Stub, typename... _Stubs>
void InstrumentClusterSomeIPStubAdapterInternal<_Stub, _Stubs...>::registerSelectiveEventHandlers() {
}

template <typename _Stub, typename... _Stubs>
void InstrumentClusterSomeIPStubAdapterInternal<_Stub, _Stubs...>::unregisterSelectiveEventHandlers() {
}

template <typename _Stub = ::v1::commonapi::InstrumentClusterStub, typename... _Stubs>
class InstrumentClusterSomeIPStubAdapter
    : public InstrumentClusterSomeIPStubAdapterInternal<_Stub, _Stubs...> {
public:
    InstrumentClusterSomeIPStubAdapter(const CommonAPI::SomeIP::Address &_address,
                                            const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection,
                                            const std::shared_ptr<CommonAPI::StubBase> &_stub)
        : CommonAPI::SomeIP::StubAdapter(_address, _connection),
          InstrumentClusterSomeIPStubAdapterInternal<_Stub, _Stubs...>(_address, _connection, _stub) {
    }
};

} // namespace commonapi
} // namespace v1

#endif // V1_COMMONAPI_Instrument_Cluster_SOMEIP_STUB_ADAPTER_HPP_
