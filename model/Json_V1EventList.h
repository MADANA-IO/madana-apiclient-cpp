/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.0.1-master.3
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Json_V1EventList.h
 *
 * 
 */

#ifndef COM_MADANA_APICLIENT_MODEL_Json_V1EventList_H_
#define COM_MADANA_APICLIENT_MODEL_Json_V1EventList_H_


#include "../ModelBase.h"

#include "Json_V1ListMeta.h"
#include "Json_V1Event.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace com {
namespace madana {
namespace apiclient {
namespace model {


/// <summary>
/// 
/// </summary>
class  Json_V1EventList
    : public ModelBase
{
public:
    Json_V1EventList();
    virtual ~Json_V1EventList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Json_V1EventList members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getApiVersion() const;
    bool apiVersionIsSet() const;
    void unsetApiVersion();

    void setApiVersion(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<Json_V1Event>>& getItems();
    bool itemsIsSet() const;
    void unsetItems();

    void setItems(const std::vector<std::shared_ptr<Json_V1Event>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Json_V1ListMeta> getMetadata() const;
    bool metadataIsSet() const;
    void unsetMetadata();

    void setMetadata(const std::shared_ptr<Json_V1ListMeta>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getKind() const;
    bool kindIsSet() const;
    void unsetKind();

    void setKind(const utility::string_t& value);


protected:
    utility::string_t m_ApiVersion;
    bool m_ApiVersionIsSet;
    std::vector<std::shared_ptr<Json_V1Event>> m_Items;
    bool m_ItemsIsSet;
    std::shared_ptr<Json_V1ListMeta> m_Metadata;
    bool m_MetadataIsSet;
    utility::string_t m_Kind;
    bool m_KindIsSet;
};


}
}
}
}

#endif /* COM_MADANA_APICLIENT_MODEL_Json_V1EventList_H_ */
