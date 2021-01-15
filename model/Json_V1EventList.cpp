/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.5.0-master.33
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Json_V1EventList.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {




Json_V1EventList::Json_V1EventList()
{
    m_Kind = utility::conversions::to_string_t("");
    m_KindIsSet = false;
    m_MetadataIsSet = false;
    m_ItemsIsSet = false;
    m_ApiVersion = utility::conversions::to_string_t("");
    m_ApiVersionIsSet = false;
}

Json_V1EventList::~Json_V1EventList()
{
}

void Json_V1EventList::validate()
{
    // TODO: implement validation
}

web::json::value Json_V1EventList::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_KindIsSet)
    {
        val[utility::conversions::to_string_t("kind")] = ModelBase::toJson(m_Kind);
    }
    if(m_MetadataIsSet)
    {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(m_Metadata);
    }
    if(m_ItemsIsSet)
    {
        val[utility::conversions::to_string_t("items")] = ModelBase::toJson(m_Items);
    }
    if(m_ApiVersionIsSet)
    {
        val[utility::conversions::to_string_t("apiVersion")] = ModelBase::toJson(m_ApiVersion);
    }

    return val;
}

bool Json_V1EventList::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("kind")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kind"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_kind;
            ok &= ModelBase::fromJson(fieldValue, refVal_kind);
            setKind(refVal_kind);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metadata")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Json_V1ListMeta> refVal_metadata;
            ok &= ModelBase::fromJson(fieldValue, refVal_metadata);
            setMetadata(refVal_metadata);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("items")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("items"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Json_V1Event>> refVal_items;
            ok &= ModelBase::fromJson(fieldValue, refVal_items);
            setItems(refVal_items);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("apiVersion")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apiVersion"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_apiVersion;
            ok &= ModelBase::fromJson(fieldValue, refVal_apiVersion);
            setApiVersion(refVal_apiVersion);
        }
    }
    return ok;
}

void Json_V1EventList::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_KindIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("kind"), m_Kind));
    }
    if(m_MetadataIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("metadata"), m_Metadata));
    }
    if(m_ItemsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("items"), m_Items));
    }
    if(m_ApiVersionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("apiVersion"), m_ApiVersion));
    }
}

bool Json_V1EventList::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("kind")))
    {
        utility::string_t refVal_kind;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("kind")), refVal_kind );
        setKind(refVal_kind);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("metadata")))
    {
        std::shared_ptr<Json_V1ListMeta> refVal_metadata;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("metadata")), refVal_metadata );
        setMetadata(refVal_metadata);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("items")))
    {
        std::vector<std::shared_ptr<Json_V1Event>> refVal_items;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("items")), refVal_items );
        setItems(refVal_items);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("apiVersion")))
    {
        utility::string_t refVal_apiVersion;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("apiVersion")), refVal_apiVersion );
        setApiVersion(refVal_apiVersion);
    }
    return ok;
}

utility::string_t Json_V1EventList::getKind() const
{
    return m_Kind;
}

void Json_V1EventList::setKind(const utility::string_t& value)
{
    m_Kind = value;
    m_KindIsSet = true;
}

bool Json_V1EventList::kindIsSet() const
{
    return m_KindIsSet;
}

void Json_V1EventList::unsetKind()
{
    m_KindIsSet = false;
}
std::shared_ptr<Json_V1ListMeta> Json_V1EventList::getMetadata() const
{
    return m_Metadata;
}

void Json_V1EventList::setMetadata(const std::shared_ptr<Json_V1ListMeta>& value)
{
    m_Metadata = value;
    m_MetadataIsSet = true;
}

bool Json_V1EventList::metadataIsSet() const
{
    return m_MetadataIsSet;
}

void Json_V1EventList::unsetMetadata()
{
    m_MetadataIsSet = false;
}
std::vector<std::shared_ptr<Json_V1Event>>& Json_V1EventList::getItems()
{
    return m_Items;
}

void Json_V1EventList::setItems(const std::vector<std::shared_ptr<Json_V1Event>>& value)
{
    m_Items = value;
    m_ItemsIsSet = true;
}

bool Json_V1EventList::itemsIsSet() const
{
    return m_ItemsIsSet;
}

void Json_V1EventList::unsetItems()
{
    m_ItemsIsSet = false;
}
utility::string_t Json_V1EventList::getApiVersion() const
{
    return m_ApiVersion;
}

void Json_V1EventList::setApiVersion(const utility::string_t& value)
{
    m_ApiVersion = value;
    m_ApiVersionIsSet = true;
}

bool Json_V1EventList::apiVersionIsSet() const
{
    return m_ApiVersionIsSet;
}

void Json_V1EventList::unsetApiVersion()
{
    m_ApiVersionIsSet = false;
}
}
}
}
}


