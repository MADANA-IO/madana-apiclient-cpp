/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.5.0-master.48
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Json_EnclaveRunRequest.h
 *
 * 
 */

#ifndef COM_MADANA_APICLIENT_MODEL_Json_EnclaveRunRequest_H_
#define COM_MADANA_APICLIENT_MODEL_Json_EnclaveRunRequest_H_


#include "../ModelBase.h"

#include "Json_EnclavePort.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace com {
namespace madana {
namespace apiclient {
namespace model {


/// <summary>
/// 
/// </summary>
class  Json_EnclaveRunRequest
    : public ModelBase
{
public:
    Json_EnclaveRunRequest();
    virtual ~Json_EnclaveRunRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Json_EnclaveRunRequest members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getWireguardPublicKey() const;
    bool wireguardPublicKeyIsSet() const;
    void unsetWireguardPublicKey();

    void setWireguardPublicKey(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<Json_EnclavePort>>& getPorts();
    bool portsIsSet() const;
    void unsetPorts();

    void setPorts(const std::vector<std::shared_ptr<Json_EnclavePort>>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getEnvironmentUUID() const;
    bool environmentUUIDIsSet() const;
    void unsetEnvironmentUUID();

    void setEnvironmentUUID(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getEnclaveExecutionType() const;
    bool enclaveExecutionTypeIsSet() const;
    void unsetEnclaveExecutionType();

    void setEnclaveExecutionType(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    bool isUsingDefaultRunConfig() const;
    bool usingDefaultRunConfigIsSet() const;
    void unsetUsingDefaultRunConfig();

    void setUsingDefaultRunConfig(bool value);


protected:
    utility::string_t m_WireguardPublicKey;
    bool m_WireguardPublicKeyIsSet;
    std::vector<std::shared_ptr<Json_EnclavePort>> m_Ports;
    bool m_PortsIsSet;
    utility::string_t m_EnvironmentUUID;
    bool m_EnvironmentUUIDIsSet;
    utility::string_t m_EnclaveExecutionType;
    bool m_EnclaveExecutionTypeIsSet;
    bool m_UsingDefaultRunConfig;
    bool m_UsingDefaultRunConfigIsSet;
};


}
}
}
}

#endif /* COM_MADANA_APICLIENT_MODEL_Json_EnclaveRunRequest_H_ */
