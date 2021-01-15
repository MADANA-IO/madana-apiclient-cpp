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
 * Json_Environment.h
 *
 * 
 */

#ifndef COM_MADANA_APICLIENT_MODEL_Json_Environment_H_
#define COM_MADANA_APICLIENT_MODEL_Json_Environment_H_


#include "../ModelBase.h"

#include "Json_RunConfig.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace com {
namespace madana {
namespace apiclient {
namespace model {


/// <summary>
/// 
/// </summary>
class  Json_Environment
    : public ModelBase
{
public:
    Json_Environment();
    virtual ~Json_Environment();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Json_Environment members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getRootHashOffset() const;
    bool rootHashOffsetIsSet() const;
    void unsetRootHashOffset();

    void setRootHashOffset(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getPackages();
    bool packagesIsSet() const;
    void unsetPackages();

    void setPackages(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getRoothash() const;
    bool roothashIsSet() const;
    void unsetRoothash();

    void setRoothash(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getUuid() const;
    bool uuidIsSet() const;
    void unsetUuid();

    void setUuid(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getName() const;
    bool nameIsSet() const;
    void unsetName();

    void setName(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Json_RunConfig> getDefaultRunConfiguration() const;
    bool defaultRunConfigurationIsSet() const;
    void unsetDefaultRunConfiguration();

    void setDefaultRunConfiguration(const std::shared_ptr<Json_RunConfig>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDescription() const;
    bool descriptionIsSet() const;
    void unsetDescription();

    void setDescription(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    bool isPublished() const;
    bool publishedIsSet() const;
    void unsetPublished();

    void setPublished(bool value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSize() const;
    bool sizeIsSet() const;
    void unsetSize();

    void setSize(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getContent();
    bool contentIsSet() const;
    void unsetContent();

    void setContent(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getIpfsHash() const;
    bool ipfsHashIsSet() const;
    void unsetIpfsHash();

    void setIpfsHash(const utility::string_t& value);


protected:
    utility::string_t m_RootHashOffset;
    bool m_RootHashOffsetIsSet;
    std::vector<utility::string_t> m_Packages;
    bool m_PackagesIsSet;
    utility::string_t m_Roothash;
    bool m_RoothashIsSet;
    utility::string_t m_Uuid;
    bool m_UuidIsSet;
    utility::string_t m_Name;
    bool m_NameIsSet;
    std::shared_ptr<Json_RunConfig> m_DefaultRunConfiguration;
    bool m_DefaultRunConfigurationIsSet;
    utility::string_t m_Description;
    bool m_DescriptionIsSet;
    bool m_Published;
    bool m_PublishedIsSet;
    utility::string_t m_Size;
    bool m_SizeIsSet;
    std::vector<utility::string_t> m_Content;
    bool m_ContentIsSet;
    utility::string_t m_IpfsHash;
    bool m_IpfsHashIsSet;
};


}
}
}
}

#endif /* COM_MADANA_APICLIENT_MODEL_Json_Environment_H_ */
