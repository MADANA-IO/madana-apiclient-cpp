/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.4.15
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0-beta2.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Xml_ns0_nodeInfo.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {




Xml_ns0_nodeInfo::Xml_ns0_nodeInfo()
{
}

Xml_ns0_nodeInfo::~Xml_ns0_nodeInfo()
{
}

void Xml_ns0_nodeInfo::validate()
{
    // TODO: implement validation
}

web::json::value Xml_ns0_nodeInfo::toJson() const
{
    web::json::value val = this->Xml_ns0_nodeInfo_allOf::toJson();
    

    return val;
}

bool Xml_ns0_nodeInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    ok &= this->Xml_ns0_nodeInfo_allOf::fromJson(val);
    
    return ok;
}

void Xml_ns0_nodeInfo::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ConnectionURLIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("connectionURL"), m_ConnectionURL));
    }
    if(m_CpuFamilyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("cpuFamily"), m_CpuFamily));
    }
    if(m_CpuFrequencyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("cpuFrequency"), m_CpuFrequency));
    }
    if(m_CpuLogicalCountIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("cpuLogicalCount"), m_CpuLogicalCount));
    }
    if(m_CpuModelIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("cpuModel"), m_CpuModel));
    }
    if(m_CpuPhysicalCoresIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("cpuPhysicalCores"), m_CpuPhysicalCores));
    }
    if(m_HardwareBaseboardIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("hardwareBaseboard"), m_HardwareBaseboard));
    }
    if(m_HardwareFirmwareIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("hardwareFirmware"), m_HardwareFirmware));
    }
    if(m_IpfsInfoIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("ipfsInfo"), m_IpfsInfo));
    }
    if(m_MemoryIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("memory"), m_Memory));
    }
    if(m_OperatingSystemIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("operatingSystem"), m_OperatingSystem));
    }
    if(m_OperatingSystemUptimeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("operatingSystemUptime"), m_OperatingSystemUptime));
    }
    if(m_OwnerIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("owner"), m_Owner));
    }
    if(m_ProcessorsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("processors"), m_Processors));
    }
    if(m_PublicKeyIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("publicKey"), m_PublicKey));
    }
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("status"), m_Status));
    }
}

bool Xml_ns0_nodeInfo::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("connectionURL")))
    {
        utility::string_t refVal_connectionURL;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("connectionURL")), refVal_connectionURL );
        setConnectionURL(refVal_connectionURL);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("cpuFamily")))
    {
        utility::string_t refVal_cpuFamily;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("cpuFamily")), refVal_cpuFamily );
        setCpuFamily(refVal_cpuFamily);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("cpuFrequency")))
    {
        utility::string_t refVal_cpuFrequency;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("cpuFrequency")), refVal_cpuFrequency );
        setCpuFrequency(refVal_cpuFrequency);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("cpuLogicalCount")))
    {
        int32_t refVal_cpuLogicalCount;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("cpuLogicalCount")), refVal_cpuLogicalCount );
        setCpuLogicalCount(refVal_cpuLogicalCount);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("cpuModel")))
    {
        utility::string_t refVal_cpuModel;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("cpuModel")), refVal_cpuModel );
        setCpuModel(refVal_cpuModel);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("cpuPhysicalCores")))
    {
        int32_t refVal_cpuPhysicalCores;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("cpuPhysicalCores")), refVal_cpuPhysicalCores );
        setCpuPhysicalCores(refVal_cpuPhysicalCores);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("hardwareBaseboard")))
    {
        utility::string_t refVal_hardwareBaseboard;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("hardwareBaseboard")), refVal_hardwareBaseboard );
        setHardwareBaseboard(refVal_hardwareBaseboard);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("hardwareFirmware")))
    {
        utility::string_t refVal_hardwareFirmware;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("hardwareFirmware")), refVal_hardwareFirmware );
        setHardwareFirmware(refVal_hardwareFirmware);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("ipfsInfo")))
    {
        std::shared_ptr<Xml_ns0_IPFSSystemInfo> refVal_ipfsInfo;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("ipfsInfo")), refVal_ipfsInfo );
        setIpfsInfo(refVal_ipfsInfo);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("memory")))
    {
        utility::string_t refVal_memory;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("memory")), refVal_memory );
        setMemory(refVal_memory);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("operatingSystem")))
    {
        utility::string_t refVal_operatingSystem;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("operatingSystem")), refVal_operatingSystem );
        setOperatingSystem(refVal_operatingSystem);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("operatingSystemUptime")))
    {
        int64_t refVal_operatingSystemUptime;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("operatingSystemUptime")), refVal_operatingSystemUptime );
        setOperatingSystemUptime(refVal_operatingSystemUptime);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("owner")))
    {
        utility::string_t refVal_owner;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("owner")), refVal_owner );
        setOwner(refVal_owner);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("processors")))
    {
        std::vector<utility::string_t> refVal_processors;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("processors")), refVal_processors );
        setProcessors(refVal_processors);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("publicKey")))
    {
        utility::string_t refVal_publicKey;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("publicKey")), refVal_publicKey );
        setPublicKey(refVal_publicKey);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("status")))
    {
        utility::string_t refVal_status;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("status")), refVal_status );
        setStatus(refVal_status);
    }
    return ok;
}

}
}
}
}


