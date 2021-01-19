/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.5.0-master.37
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0.
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
    m_ContentIsSet = false;
    m_DefaultRunConfigurationIsSet = false;
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
    m_IpfsHash = utility::conversions::to_string_t("");
    m_IpfsHashIsSet = false;
    m_Name = utility::conversions::to_string_t("");
    m_NameIsSet = false;
    m_PackagesIsSet = false;
    m_Published = false;
    m_PublishedIsSet = false;
    m_RootHashOffset = utility::conversions::to_string_t("");
    m_RootHashOffsetIsSet = false;
    m_Roothash = utility::conversions::to_string_t("");
    m_RoothashIsSet = false;
    m_Size = utility::conversions::to_string_t("");
    m_SizeIsSet = false;
    m_Uuid = utility::conversions::to_string_t("");
    m_UuidIsSet = false;
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

    web::json::value val = web::json::value::object();
    
    if(m_ContentIsSet)
    {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(m_Content);
    }
    if(m_DefaultRunConfigurationIsSet)
    {
        val[utility::conversions::to_string_t("defaultRunConfiguration")] = ModelBase::toJson(m_DefaultRunConfiguration);
    }
    if(m_DescriptionIsSet)
    {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(m_Description);
    }
    if(m_IpfsHashIsSet)
    {
        val[utility::conversions::to_string_t("ipfsHash")] = ModelBase::toJson(m_IpfsHash);
    }
    if(m_NameIsSet)
    {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(m_Name);
    }
    if(m_PackagesIsSet)
    {
        val[utility::conversions::to_string_t("packages")] = ModelBase::toJson(m_Packages);
    }
    if(m_PublishedIsSet)
    {
        val[utility::conversions::to_string_t("published")] = ModelBase::toJson(m_Published);
    }
    if(m_RootHashOffsetIsSet)
    {
        val[utility::conversions::to_string_t("rootHashOffset")] = ModelBase::toJson(m_RootHashOffset);
    }
    if(m_RoothashIsSet)
    {
        val[utility::conversions::to_string_t("roothash")] = ModelBase::toJson(m_Roothash);
    }
    if(m_SizeIsSet)
    {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(m_Size);
    }
    if(m_UuidIsSet)
    {
        val[utility::conversions::to_string_t("uuid")] = ModelBase::toJson(m_Uuid);
    }

    return val;
}

bool Xml_ns0_environment::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("content")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_content;
            ok &= ModelBase::fromJson(fieldValue, refVal_content);
            setContent(refVal_content);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("defaultRunConfiguration")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defaultRunConfiguration"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Xml_ns0_runConfig> refVal_defaultRunConfiguration;
            ok &= ModelBase::fromJson(fieldValue, refVal_defaultRunConfiguration);
            setDefaultRunConfiguration(refVal_defaultRunConfiguration);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_description;
            ok &= ModelBase::fromJson(fieldValue, refVal_description);
            setDescription(refVal_description);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ipfsHash")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ipfsHash"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_ipfsHash;
            ok &= ModelBase::fromJson(fieldValue, refVal_ipfsHash);
            setIpfsHash(refVal_ipfsHash);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_name;
            ok &= ModelBase::fromJson(fieldValue, refVal_name);
            setName(refVal_name);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("packages")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("packages"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_packages;
            ok &= ModelBase::fromJson(fieldValue, refVal_packages);
            setPackages(refVal_packages);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("published")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("published"));
        if(!fieldValue.is_null())
        {
            bool refVal_published;
            ok &= ModelBase::fromJson(fieldValue, refVal_published);
            setPublished(refVal_published);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rootHashOffset")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rootHashOffset"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_rootHashOffset;
            ok &= ModelBase::fromJson(fieldValue, refVal_rootHashOffset);
            setRootHashOffset(refVal_rootHashOffset);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("roothash")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("roothash"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_roothash;
            ok &= ModelBase::fromJson(fieldValue, refVal_roothash);
            setRoothash(refVal_roothash);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_size;
            ok &= ModelBase::fromJson(fieldValue, refVal_size);
            setSize(refVal_size);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("uuid")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uuid"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_uuid;
            ok &= ModelBase::fromJson(fieldValue, refVal_uuid);
            setUuid(refVal_uuid);
        }
    }
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

std::vector<utility::string_t>& Xml_ns0_environment::getContent()
{
    return m_Content;
}

void Xml_ns0_environment::setContent(const std::vector<utility::string_t>& value)
{
    m_Content = value;
    m_ContentIsSet = true;
}

bool Xml_ns0_environment::contentIsSet() const
{
    return m_ContentIsSet;
}

void Xml_ns0_environment::unsetContent()
{
    m_ContentIsSet = false;
}
std::shared_ptr<Xml_ns0_runConfig> Xml_ns0_environment::getDefaultRunConfiguration() const
{
    return m_DefaultRunConfiguration;
}

void Xml_ns0_environment::setDefaultRunConfiguration(const std::shared_ptr<Xml_ns0_runConfig>& value)
{
    m_DefaultRunConfiguration = value;
    m_DefaultRunConfigurationIsSet = true;
}

bool Xml_ns0_environment::defaultRunConfigurationIsSet() const
{
    return m_DefaultRunConfigurationIsSet;
}

void Xml_ns0_environment::unsetDefaultRunConfiguration()
{
    m_DefaultRunConfigurationIsSet = false;
}
utility::string_t Xml_ns0_environment::getDescription() const
{
    return m_Description;
}

void Xml_ns0_environment::setDescription(const utility::string_t& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}

bool Xml_ns0_environment::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}

void Xml_ns0_environment::unsetDescription()
{
    m_DescriptionIsSet = false;
}
utility::string_t Xml_ns0_environment::getIpfsHash() const
{
    return m_IpfsHash;
}

void Xml_ns0_environment::setIpfsHash(const utility::string_t& value)
{
    m_IpfsHash = value;
    m_IpfsHashIsSet = true;
}

bool Xml_ns0_environment::ipfsHashIsSet() const
{
    return m_IpfsHashIsSet;
}

void Xml_ns0_environment::unsetIpfsHash()
{
    m_IpfsHashIsSet = false;
}
utility::string_t Xml_ns0_environment::getName() const
{
    return m_Name;
}

void Xml_ns0_environment::setName(const utility::string_t& value)
{
    m_Name = value;
    m_NameIsSet = true;
}

bool Xml_ns0_environment::nameIsSet() const
{
    return m_NameIsSet;
}

void Xml_ns0_environment::unsetName()
{
    m_NameIsSet = false;
}
std::vector<utility::string_t>& Xml_ns0_environment::getPackages()
{
    return m_Packages;
}

void Xml_ns0_environment::setPackages(const std::vector<utility::string_t>& value)
{
    m_Packages = value;
    m_PackagesIsSet = true;
}

bool Xml_ns0_environment::packagesIsSet() const
{
    return m_PackagesIsSet;
}

void Xml_ns0_environment::unsetPackages()
{
    m_PackagesIsSet = false;
}
bool Xml_ns0_environment::isPublished() const
{
    return m_Published;
}

void Xml_ns0_environment::setPublished(bool value)
{
    m_Published = value;
    m_PublishedIsSet = true;
}

bool Xml_ns0_environment::publishedIsSet() const
{
    return m_PublishedIsSet;
}

void Xml_ns0_environment::unsetPublished()
{
    m_PublishedIsSet = false;
}
utility::string_t Xml_ns0_environment::getRootHashOffset() const
{
    return m_RootHashOffset;
}

void Xml_ns0_environment::setRootHashOffset(const utility::string_t& value)
{
    m_RootHashOffset = value;
    m_RootHashOffsetIsSet = true;
}

bool Xml_ns0_environment::rootHashOffsetIsSet() const
{
    return m_RootHashOffsetIsSet;
}

void Xml_ns0_environment::unsetRootHashOffset()
{
    m_RootHashOffsetIsSet = false;
}
utility::string_t Xml_ns0_environment::getRoothash() const
{
    return m_Roothash;
}

void Xml_ns0_environment::setRoothash(const utility::string_t& value)
{
    m_Roothash = value;
    m_RoothashIsSet = true;
}

bool Xml_ns0_environment::roothashIsSet() const
{
    return m_RoothashIsSet;
}

void Xml_ns0_environment::unsetRoothash()
{
    m_RoothashIsSet = false;
}
utility::string_t Xml_ns0_environment::getSize() const
{
    return m_Size;
}

void Xml_ns0_environment::setSize(const utility::string_t& value)
{
    m_Size = value;
    m_SizeIsSet = true;
}

bool Xml_ns0_environment::sizeIsSet() const
{
    return m_SizeIsSet;
}

void Xml_ns0_environment::unsetSize()
{
    m_SizeIsSet = false;
}
utility::string_t Xml_ns0_environment::getUuid() const
{
    return m_Uuid;
}

void Xml_ns0_environment::setUuid(const utility::string_t& value)
{
    m_Uuid = value;
    m_UuidIsSet = true;
}

bool Xml_ns0_environment::uuidIsSet() const
{
    return m_UuidIsSet;
}

void Xml_ns0_environment::unsetUuid()
{
    m_UuidIsSet = false;
}
}
}
}
}


