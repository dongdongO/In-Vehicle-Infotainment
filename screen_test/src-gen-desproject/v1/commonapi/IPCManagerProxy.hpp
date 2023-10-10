/*
* This file was generated by the CommonAPI Generators.
* Used org.genivi.commonapi.core 3.2.0.v202012010850.
* Used org.franca.core 0.13.1.201807231814.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef V1_COMMONAPI_IPC_Manager_PROXY_HPP_
#define V1_COMMONAPI_IPC_Manager_PROXY_HPP_

#include <v1/commonapi/IPCManagerProxyBase.hpp>


#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#define HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif


#if defined (HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE)
#undef COMMONAPI_INTERNAL_COMPILATION
#undef HAS_DEFINED_COMMONAPI_INTERNAL_COMPILATION_HERE
#endif

namespace v1 {
namespace commonapi {

template <typename ... _AttributeExtensions>
class IPCManagerProxy
    : virtual public IPCManager,
      virtual public IPCManagerProxyBase,
      virtual public _AttributeExtensions... {
public:
    IPCManagerProxy(std::shared_ptr<CommonAPI::Proxy> delegate);
    ~IPCManagerProxy();

    typedef IPCManager InterfaceType;


    /**
     * Returns the CommonAPI address of the remote partner this proxy communicates with.
     */
    virtual const CommonAPI::Address &getAddress() const;

    /**
     * Returns true if the remote partner for this proxy is currently known to be available.
     */
    virtual bool isAvailable() const;

    /**
     * Returns true if the remote partner for this proxy is available.
     */
    virtual bool isAvailableBlocking() const;

    /**
     * Returns the wrapper class that is used to (de-)register for notifications about
     * the availability of the remote partner of this proxy.
     */
    virtual CommonAPI::ProxyStatusEvent& getProxyStatusEvent();

    /**
     * Returns the wrapper class that is used to access version information of the remote
     * partner of this proxy.
     */
    virtual CommonAPI::InterfaceVersionAttribute& getInterfaceVersionAttribute();

    virtual std::future<void> getCompletionFuture();

    /**
     * Calls setSensorRpm with synchronous semantics.
     *
     * All const parameters are input parameters to this method.
     * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void setSensorRpm(uint16_t _SensorRpm, CommonAPI::CallStatus &_internalCallStatus, std::string &_message, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls setSensorRpm with asynchronous semantics.
     *
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> setSensorRpmAsync(const uint16_t &_SensorRpm, SetSensorRpmAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls setBatteryLevel with synchronous semantics.
     *
     * All const parameters are input parameters to this method.
     * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void setBatteryLevel(uint16_t _BatteryLevel, CommonAPI::CallStatus &_internalCallStatus, std::string &_message, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls setBatteryLevel with asynchronous semantics.
     *
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> setBatteryLevelAsync(const uint16_t &_BatteryLevel, SetBatteryLevelAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls setGearMode with synchronous semantics.
     *
     * All const parameters are input parameters to this method.
     * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void setGearMode(uint16_t _GearMode, CommonAPI::CallStatus &_internalCallStatus, std::string &_message, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls setGearMode with asynchronous semantics.
     *
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> setGearModeAsync(const uint16_t &_GearMode, SetGearModeAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls setDirection with synchronous semantics.
     *
     * All const parameters are input parameters to this method.
     * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void setDirection(uint16_t _Direction, CommonAPI::CallStatus &_internalCallStatus, std::string &_message, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls setDirection with asynchronous semantics.
     *
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> setDirectionAsync(const uint16_t &_Direction, SetDirectionAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls setLight with synchronous semantics.
     *
     * All const parameters are input parameters to this method.
     * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     */
    virtual void setLight(std::string _light, CommonAPI::CallStatus &_internalCallStatus, std::string &_message, const CommonAPI::CallInfo *_info = nullptr);
    /**
     * Calls setLight with asynchronous semantics.
     *
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> setLightAsync(const std::string &_light, SetLightAsyncCallback _callback = nullptr, const CommonAPI::CallInfo *_info = nullptr);



 private:
    std::shared_ptr< IPCManagerProxyBase> delegate_;
};

typedef IPCManagerProxy<> IPCManagerProxyDefault;


//
// IPCManagerProxy Implementation
//
template <typename ... _AttributeExtensions>
IPCManagerProxy<_AttributeExtensions...>::IPCManagerProxy(std::shared_ptr<CommonAPI::Proxy> delegate):
        _AttributeExtensions(*(std::dynamic_pointer_cast< IPCManagerProxyBase>(delegate)))...,
        delegate_(std::dynamic_pointer_cast< IPCManagerProxyBase>(delegate)) {
}

template <typename ... _AttributeExtensions>
IPCManagerProxy<_AttributeExtensions...>::~IPCManagerProxy() {
}

template <typename ... _AttributeExtensions>
void IPCManagerProxy<_AttributeExtensions...>::setSensorRpm(uint16_t _SensorRpm, CommonAPI::CallStatus &_internalCallStatus, std::string &_message, const CommonAPI::CallInfo *_info) {
    delegate_->setSensorRpm(_SensorRpm, _internalCallStatus, _message, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> IPCManagerProxy<_AttributeExtensions...>::setSensorRpmAsync(const uint16_t &_SensorRpm, SetSensorRpmAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->setSensorRpmAsync(_SensorRpm, _callback, _info);
}
template <typename ... _AttributeExtensions>
void IPCManagerProxy<_AttributeExtensions...>::setBatteryLevel(uint16_t _BatteryLevel, CommonAPI::CallStatus &_internalCallStatus, std::string &_message, const CommonAPI::CallInfo *_info) {
    delegate_->setBatteryLevel(_BatteryLevel, _internalCallStatus, _message, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> IPCManagerProxy<_AttributeExtensions...>::setBatteryLevelAsync(const uint16_t &_BatteryLevel, SetBatteryLevelAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->setBatteryLevelAsync(_BatteryLevel, _callback, _info);
}
template <typename ... _AttributeExtensions>
void IPCManagerProxy<_AttributeExtensions...>::setGearMode(uint16_t _GearMode, CommonAPI::CallStatus &_internalCallStatus, std::string &_message, const CommonAPI::CallInfo *_info) {
    delegate_->setGearMode(_GearMode, _internalCallStatus, _message, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> IPCManagerProxy<_AttributeExtensions...>::setGearModeAsync(const uint16_t &_GearMode, SetGearModeAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->setGearModeAsync(_GearMode, _callback, _info);
}
template <typename ... _AttributeExtensions>
void IPCManagerProxy<_AttributeExtensions...>::setDirection(uint16_t _Direction, CommonAPI::CallStatus &_internalCallStatus, std::string &_message, const CommonAPI::CallInfo *_info) {
    delegate_->setDirection(_Direction, _internalCallStatus, _message, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> IPCManagerProxy<_AttributeExtensions...>::setDirectionAsync(const uint16_t &_Direction, SetDirectionAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->setDirectionAsync(_Direction, _callback, _info);
}
template <typename ... _AttributeExtensions>
void IPCManagerProxy<_AttributeExtensions...>::setLight(std::string _light, CommonAPI::CallStatus &_internalCallStatus, std::string &_message, const CommonAPI::CallInfo *_info) {
    delegate_->setLight(_light, _internalCallStatus, _message, _info);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> IPCManagerProxy<_AttributeExtensions...>::setLightAsync(const std::string &_light, SetLightAsyncCallback _callback, const CommonAPI::CallInfo *_info) {
    return delegate_->setLightAsync(_light, _callback, _info);
}

template <typename ... _AttributeExtensions>
const CommonAPI::Address &IPCManagerProxy<_AttributeExtensions...>::getAddress() const {
    return delegate_->getAddress();
}

template <typename ... _AttributeExtensions>
bool IPCManagerProxy<_AttributeExtensions...>::isAvailable() const {
    return delegate_->isAvailable();
}

template <typename ... _AttributeExtensions>
bool IPCManagerProxy<_AttributeExtensions...>::isAvailableBlocking() const {
    return delegate_->isAvailableBlocking();
}

template <typename ... _AttributeExtensions>
CommonAPI::ProxyStatusEvent& IPCManagerProxy<_AttributeExtensions...>::getProxyStatusEvent() {
    return delegate_->getProxyStatusEvent();
}

template <typename ... _AttributeExtensions>
CommonAPI::InterfaceVersionAttribute& IPCManagerProxy<_AttributeExtensions...>::getInterfaceVersionAttribute() {
    return delegate_->getInterfaceVersionAttribute();
}


template <typename ... _AttributeExtensions>
std::future<void> IPCManagerProxy<_AttributeExtensions...>::getCompletionFuture() {
    return delegate_->getCompletionFuture();
}

} // namespace commonapi
} // namespace v1



// Compatibility
namespace v1_0 = v1;

#endif // V1_COMMONAPI_IPC_Manager_PROXY_HPP_
