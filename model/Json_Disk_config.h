/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.5.0-master.16
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0-beta3.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Json_Disk_config.h
 *
 * 
 */

#ifndef COM_MADANA_APICLIENT_MODEL_Json_Disk_config_H_
#define COM_MADANA_APICLIENT_MODEL_Json_Disk_config_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace madana {
namespace apiclient {
namespace model {


/// <summary>
/// 
/// </summary>
class  Json_Disk_config
    : public ModelBase
{
public:
    Json_Disk_config();
    virtual ~Json_Disk_config();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Json_Disk_config members

    /// <summary>
    /// 
    /// </summary>
    bool isReadonly() const;
    bool readonlyIsSet() const;
    void unsetReadonly();

    void setReadonly(bool value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDisk() const;
    bool diskIsSet() const;
    void unsetDisk();

    void setDisk(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getRoothashOffset() const;
    bool roothashOffsetIsSet() const;
    void unsetRoothash_offset();

    void setRoothashOffset(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getRoothash() const;
    bool roothashIsSet() const;
    void unsetRoothash();

    void setRoothash(const utility::string_t& value);


protected:
    bool m_Readonly;
    bool m_ReadonlyIsSet;
    utility::string_t m_Disk;
    bool m_DiskIsSet;
    int32_t m_Roothash_offset;
    bool m_Roothash_offsetIsSet;
    utility::string_t m_Roothash;
    bool m_RoothashIsSet;
};


}
}
}
}

#endif /* COM_MADANA_APICLIENT_MODEL_Json_Disk_config_H_ */
