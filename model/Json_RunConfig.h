/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.5.0-master.31
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Json_RunConfig.h
 *
 * 
 */

#ifndef COM_MADANA_APICLIENT_MODEL_Json_RunConfig_H_
#define COM_MADANA_APICLIENT_MODEL_Json_RunConfig_H_


#include "../ModelBase.h"

#include "Json_Disk_config.h"
#include <cpprest/details/basic_types.h>
#include <map>
#include <vector>

namespace com {
namespace madana {
namespace apiclient {
namespace model {


/// <summary>
/// 
/// </summary>
class  Json_RunConfig
    : public ModelBase
{
public:
    Json_RunConfig();
    virtual ~Json_RunConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Json_RunConfig members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<Json_Disk_config>>& getDiskConfig();
    bool diskConfigIsSet() const;
    void unsetDisk_config();

    void setDiskConfig(const std::vector<std::shared_ptr<Json_Disk_config>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::map<utility::string_t, utility::string_t>& getEnvironment();
    bool environmentIsSet() const;
    void unsetEnvironment();

    void setEnvironment(const std::map<utility::string_t, utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getArgs();
    bool argsIsSet() const;
    void unsetArgs();

    void setArgs(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getRun() const;
    bool runIsSet() const;
    void unsetRun();

    void setRun(const utility::string_t& value);


protected:
    std::vector<std::shared_ptr<Json_Disk_config>> m_Disk_config;
    bool m_Disk_configIsSet;
    std::map<utility::string_t, utility::string_t> m_Environment;
    bool m_EnvironmentIsSet;
    std::vector<utility::string_t> m_Args;
    bool m_ArgsIsSet;
    utility::string_t m_Run;
    bool m_RunIsSet;
};


}
}
}
}

#endif /* COM_MADANA_APICLIENT_MODEL_Json_RunConfig_H_ */
