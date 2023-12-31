/*
 * This file was generated by the CommonAPI Generators.
 * Used org.genivi.commonapi.someip 3.2.0.v202012010944.
 * Used org.franca.core 0.13.1.201807231814.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
 * If a copy of the MPL was not distributed with this file, You can obtain one at
 * http://mozilla.org/MPL/2.0/.
 */
#ifndef V1_COMMONAPI_REMOTE_SPEAKER_SOMEIP_STUB_ADAPTER_HPP_
#define V1_COMMONAPI_REMOTE_SPEAKER_SOMEIP_STUB_ADAPTER_HPP_

#include <v1/commonapi/RemoteSpeakerStub.hpp>

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

template <typename _Stub = ::v1::commonapi::RemoteSpeakerStub, typename... _Stubs>
class RemoteSpeakerSomeIPStubAdapterInternal
    : public virtual RemoteSpeakerStubAdapter,
      public CommonAPI::SomeIP::StubAdapterHelper< _Stub, _Stubs...>,
      public std::enable_shared_from_this< RemoteSpeakerSomeIPStubAdapterInternal<_Stub, _Stubs...>>
{
public:
    typedef CommonAPI::SomeIP::StubAdapterHelper< _Stub, _Stubs...> RemoteSpeakerSomeIPStubAdapterHelper;

    ~RemoteSpeakerSomeIPStubAdapterInternal() {
        deactivateManagedInstances();
        RemoteSpeakerSomeIPStubAdapterHelper::deinit();
    }

    void deactivateManagedInstances() {}
    
    CommonAPI::SomeIP::GetAttributeStubDispatcher<
        ::v1::commonapi::RemoteSpeakerStub,
        CommonAPI::Version
    > getRemoteSpeakerInterfaceVersionStubDispatcher;

    CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v1::commonapi::RemoteSpeakerStub,
        std::tuple< uint16_t>,
        std::tuple< std::string>,
        std::tuple< CommonAPI::SomeIP::IntegerDeployment<uint16_t>>,
        std::tuple< CommonAPI::SomeIP::StringDeployment>
    > setGearStubDispatcher;
    
    CommonAPI::SomeIP::MethodWithReplyStubDispatcher<
        ::v1::commonapi::RemoteSpeakerStub,
        std::tuple< uint16_t>,
        std::tuple< std::string>,
        std::tuple< CommonAPI::SomeIP::IntegerDeployment<uint16_t>>,
        std::tuple< CommonAPI::SomeIP::StringDeployment>
    > setDistanceStubDispatcher;
    
    RemoteSpeakerSomeIPStubAdapterInternal(
        const CommonAPI::SomeIP::Address &_address,
        const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection,
        const std::shared_ptr<CommonAPI::StubBase> &_stub):
        CommonAPI::SomeIP::StubAdapter(_address, _connection),
        RemoteSpeakerSomeIPStubAdapterHelper(
            _address,
            _connection,
            std::dynamic_pointer_cast< RemoteSpeakerStub>(_stub)),
        getRemoteSpeakerInterfaceVersionStubDispatcher(&RemoteSpeakerStub::lockInterfaceVersionAttribute, &RemoteSpeakerStub::getInterfaceVersion, false, true),
        setGearStubDispatcher(
            &RemoteSpeakerStub::setGear,
            false,
            _stub->hasElement(0),
            std::make_tuple(static_cast< CommonAPI::SomeIP::IntegerDeployment<uint16_t>* >(nullptr)),
            std::make_tuple(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr)))
        
        ,
        setDistanceStubDispatcher(
            &RemoteSpeakerStub::setDistance,
            false,
            _stub->hasElement(1),
            std::make_tuple(static_cast< CommonAPI::SomeIP::IntegerDeployment<uint16_t>* >(nullptr)),
            std::make_tuple(static_cast< CommonAPI::SomeIP::StringDeployment* >(nullptr)))
        
    {
        RemoteSpeakerSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x384) }, &setGearStubDispatcher );
        RemoteSpeakerSomeIPStubAdapterHelper::addStubDispatcher( { CommonAPI::SomeIP::method_id_t(0x385) }, &setDistanceStubDispatcher );
        // Provided events/fields
    }

    // Register/Unregister event handlers for selective broadcasts
    void registerSelectiveEventHandlers();
    void unregisterSelectiveEventHandlers();

};


template <typename _Stub, typename... _Stubs>
void RemoteSpeakerSomeIPStubAdapterInternal<_Stub, _Stubs...>::registerSelectiveEventHandlers() {
}

template <typename _Stub, typename... _Stubs>
void RemoteSpeakerSomeIPStubAdapterInternal<_Stub, _Stubs...>::unregisterSelectiveEventHandlers() {
}

template <typename _Stub = ::v1::commonapi::RemoteSpeakerStub, typename... _Stubs>
class RemoteSpeakerSomeIPStubAdapter
    : public RemoteSpeakerSomeIPStubAdapterInternal<_Stub, _Stubs...> {
public:
    RemoteSpeakerSomeIPStubAdapter(const CommonAPI::SomeIP::Address &_address,
                                            const std::shared_ptr<CommonAPI::SomeIP::ProxyConnection> &_connection,
                                            const std::shared_ptr<CommonAPI::StubBase> &_stub)
        : CommonAPI::SomeIP::StubAdapter(_address, _connection),
          RemoteSpeakerSomeIPStubAdapterInternal<_Stub, _Stubs...>(_address, _connection, _stub) {
    }
};

} // namespace commonapi
} // namespace v1

#endif // V1_COMMONAPI_Remote_Speaker_SOMEIP_STUB_ADAPTER_HPP_
