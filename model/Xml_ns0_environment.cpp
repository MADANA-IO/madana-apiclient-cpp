/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.5.0-master.14
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0-beta3.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Xml_ns0_environment.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {




Xml_ns0_environment::Xml_ns0_environment()
{
}

Xml_ns0_environment::~Xml_ns0_environment()
{
}

void Xml_ns0_environment::validate()
{
    // TODO: implement validation
}

web::json::value Xml_ns0_environment::toJson() const
{
    web::json::value val = this->Xml_ns0_environment_allOf::toJson();
    

    return val;
}

bool Xml_ns0_environment::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->Xml_ns0_environment_allOf::fromJson(val);
    
    return ok;
}

void Xml_ns0_environment::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ContentIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("content"), m_Content));
    }
    if(m_DefaultRunConfigurationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("defaultRunConfiguration"), m_DefaultRunConfiguration));
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("description"), m_Description));
    }
    if(m_IpfsHashIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ipfsHash"), m_IpfsHash));
    }
    if(m_NameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("name"), m_Name));
    }
    if(m_PackagesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("packages"), m_Packages));
    }
    if(m_PublishedIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("published"), m_Published));
    }
    if(m_RootHashOffsetIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("rootHashOffset"), m_RootHashOffset));
    }
    if(m_RoothashIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("roothash"), m_Roothash));
    }
    if(m_SizeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("size"), m_Size));
    }
    if(m_UuidIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("uuid"), m_Uuid));
    }
}

bool Xml_ns0_environment::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("content")))
    {
        std::vector<utility::string_t> refVal_content;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("content")), refVal_content );
        setContent(refVal_content);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("defaultRunConfiguration")))
    {
        std::shared_ptr<Xml_ns0_runConfig> refVal_defaultRunConfiguration;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("defaultRunConfiguration")), refVal_defaultRunConfiguration );
        setDefaultRunConfiguration(refVal_defaultRunConfiguration);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("description")))
    {
        utility::string_t refVal_description;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("description")), refVal_description );
        setDescription(refVal_description);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ipfsHash")))
    {
        utility::string_t refVal_ipfsHash;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("ipfsHash")), refVal_ipfsHash );
        setIpfsHash(refVal_ipfsHash);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("name")))
    {
        utility::string_t refVal_name;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("name")), refVal_name );
        setName(refVal_name);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("packages")))
    {
        std::vector<utility::string_t> refVal_packages;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("packages")), refVal_packages );
        setPackages(refVal_packages);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("published")))
    {
        bool refVal_published;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("published")), refVal_published );
        setPublished(refVal_published);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("rootHashOffset")))
    {
        utility::string_t refVal_rootHashOffset;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("rootHashOffset")), refVal_rootHashOffset );
        setRootHashOffset(refVal_rootHashOffset);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("roothash")))
    {
        utility::string_t refVal_roothash;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("roothash")), refVal_roothash );
        setRoothash(refVal_roothash);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("size")))
    {
        utility::string_t refVal_size;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("size")), refVal_size );
        setSize(refVal_size);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("uuid")))
    {
        utility::string_t refVal_uuid;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("uuid")), refVal_uuid );
        setUuid(refVal_uuid);
    }
    return ok;
}

}
}
}
}


