/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.5.0-master.56
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "Xml_ns0_nodeInfo_allOf.h"

namespace com {
namespace madana {
namespace apiclient {
namespace model {




Xml_ns0_nodeInfo_allOf::Xml_ns0_nodeInfo_allOf()
{
    m_ConnectionURL = utility::conversions::to_string_t("");
    m_ConnectionURLIsSet = false;
    m_CpuFamily = utility::conversions::to_string_t("");
    m_CpuFamilyIsSet = false;
    m_CpuFrequency = utility::conversions::to_string_t("");
    m_CpuFrequencyIsSet = false;
    m_CpuLogicalCount = 0;
    m_CpuLogicalCountIsSet = false;
    m_CpuModel = utility::conversions::to_string_t("");
    m_CpuModelIsSet = false;
    m_CpuPhysicalCores = 0;
    m_CpuPhysicalCoresIsSet = false;
    m_HardwareBaseboard = utility::conversions::to_string_t("");
    m_HardwareBaseboardIsSet = false;
    m_HardwareFirmware = utility::conversions::to_string_t("");
    m_HardwareFirmwareIsSet = false;
    m_IpfsInfoIsSet = false;
    m_Memory = utility::conversions::to_string_t("");
    m_MemoryIsSet = false;
    m_OperatingSystem = utility::conversions::to_string_t("");
    m_OperatingSystemIsSet = false;
    m_OperatingSystemUptime = 0L;
    m_OperatingSystemUptimeIsSet = false;
    m_Owner = utility::conversions::to_string_t("");
    m_OwnerIsSet = false;
    m_ProcessorsIsSet = false;
    m_PublicKey = utility::conversions::to_string_t("");
    m_PublicKeyIsSet = false;
    m_SgxInfoIsSet = false;
    m_Status = utility::conversions::to_string_t("");
    m_StatusIsSet = false;
}

Xml_ns0_nodeInfo_allOf::~Xml_ns0_nodeInfo_allOf()
{
}

void Xml_ns0_nodeInfo_allOf::validate()
{
    // TODO: implement validation
}

web::json::value Xml_ns0_nodeInfo_allOf::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ConnectionURLIsSet)
    {
        val[utility::conversions::to_string_t("connectionURL")] = ModelBase::toJson(m_ConnectionURL);
    }
    if(m_CpuFamilyIsSet)
    {
        val[utility::conversions::to_string_t("cpuFamily")] = ModelBase::toJson(m_CpuFamily);
    }
    if(m_CpuFrequencyIsSet)
    {
        val[utility::conversions::to_string_t("cpuFrequency")] = ModelBase::toJson(m_CpuFrequency);
    }
    if(m_CpuLogicalCountIsSet)
    {
        val[utility::conversions::to_string_t("cpuLogicalCount")] = ModelBase::toJson(m_CpuLogicalCount);
    }
    if(m_CpuModelIsSet)
    {
        val[utility::conversions::to_string_t("cpuModel")] = ModelBase::toJson(m_CpuModel);
    }
    if(m_CpuPhysicalCoresIsSet)
    {
        val[utility::conversions::to_string_t("cpuPhysicalCores")] = ModelBase::toJson(m_CpuPhysicalCores);
    }
    if(m_HardwareBaseboardIsSet)
    {
        val[utility::conversions::to_string_t("hardwareBaseboard")] = ModelBase::toJson(m_HardwareBaseboard);
    }
    if(m_HardwareFirmwareIsSet)
    {
        val[utility::conversions::to_string_t("hardwareFirmware")] = ModelBase::toJson(m_HardwareFirmware);
    }
    if(m_IpfsInfoIsSet)
    {
        val[utility::conversions::to_string_t("ipfsInfo")] = ModelBase::toJson(m_IpfsInfo);
    }
    if(m_MemoryIsSet)
    {
        val[utility::conversions::to_string_t("memory")] = ModelBase::toJson(m_Memory);
    }
    if(m_OperatingSystemIsSet)
    {
        val[utility::conversions::to_string_t("operatingSystem")] = ModelBase::toJson(m_OperatingSystem);
    }
    if(m_OperatingSystemUptimeIsSet)
    {
        val[utility::conversions::to_string_t("operatingSystemUptime")] = ModelBase::toJson(m_OperatingSystemUptime);
    }
    if(m_OwnerIsSet)
    {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(m_Owner);
    }
    if(m_ProcessorsIsSet)
    {
        val[utility::conversions::to_string_t("processors")] = ModelBase::toJson(m_Processors);
    }
    if(m_PublicKeyIsSet)
    {
        val[utility::conversions::to_string_t("publicKey")] = ModelBase::toJson(m_PublicKey);
    }
    if(m_SgxInfoIsSet)
    {
        val[utility::conversions::to_string_t("sgxInfo")] = ModelBase::toJson(m_SgxInfo);
    }
    if(m_StatusIsSet)
    {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(m_Status);
    }

    return val;
}

bool Xml_ns0_nodeInfo_allOf::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("connectionURL")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("connectionURL"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_connectionURL;
            ok &= ModelBase::fromJson(fieldValue, refVal_connectionURL);
            setConnectionURL(refVal_connectionURL);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpuFamily")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpuFamily"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_cpuFamily;
            ok &= ModelBase::fromJson(fieldValue, refVal_cpuFamily);
            setCpuFamily(refVal_cpuFamily);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpuFrequency")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpuFrequency"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_cpuFrequency;
            ok &= ModelBase::fromJson(fieldValue, refVal_cpuFrequency);
            setCpuFrequency(refVal_cpuFrequency);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpuLogicalCount")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpuLogicalCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_cpuLogicalCount;
            ok &= ModelBase::fromJson(fieldValue, refVal_cpuLogicalCount);
            setCpuLogicalCount(refVal_cpuLogicalCount);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpuModel")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpuModel"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_cpuModel;
            ok &= ModelBase::fromJson(fieldValue, refVal_cpuModel);
            setCpuModel(refVal_cpuModel);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpuPhysicalCores")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpuPhysicalCores"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_cpuPhysicalCores;
            ok &= ModelBase::fromJson(fieldValue, refVal_cpuPhysicalCores);
            setCpuPhysicalCores(refVal_cpuPhysicalCores);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hardwareBaseboard")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hardwareBaseboard"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_hardwareBaseboard;
            ok &= ModelBase::fromJson(fieldValue, refVal_hardwareBaseboard);
            setHardwareBaseboard(refVal_hardwareBaseboard);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hardwareFirmware")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hardwareFirmware"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_hardwareFirmware;
            ok &= ModelBase::fromJson(fieldValue, refVal_hardwareFirmware);
            setHardwareFirmware(refVal_hardwareFirmware);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ipfsInfo")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ipfsInfo"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Xml_ns0_IPFSSystemInfo> refVal_ipfsInfo;
            ok &= ModelBase::fromJson(fieldValue, refVal_ipfsInfo);
            setIpfsInfo(refVal_ipfsInfo);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("memory")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("memory"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_memory;
            ok &= ModelBase::fromJson(fieldValue, refVal_memory);
            setMemory(refVal_memory);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operatingSystem")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operatingSystem"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_operatingSystem;
            ok &= ModelBase::fromJson(fieldValue, refVal_operatingSystem);
            setOperatingSystem(refVal_operatingSystem);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operatingSystemUptime")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operatingSystemUptime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal_operatingSystemUptime;
            ok &= ModelBase::fromJson(fieldValue, refVal_operatingSystemUptime);
            setOperatingSystemUptime(refVal_operatingSystemUptime);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_owner;
            ok &= ModelBase::fromJson(fieldValue, refVal_owner);
            setOwner(refVal_owner);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("processors")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("processors"));
        if(!fieldValue.is_null())
        {
            std::vector<utility::string_t> refVal_processors;
            ok &= ModelBase::fromJson(fieldValue, refVal_processors);
            setProcessors(refVal_processors);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publicKey")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicKey"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_publicKey;
            ok &= ModelBase::fromJson(fieldValue, refVal_publicKey);
            setPublicKey(refVal_publicKey);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sgxInfo")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sgxInfo"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Xml_ns0_SGXInfo> refVal_sgxInfo;
            ok &= ModelBase::fromJson(fieldValue, refVal_sgxInfo);
            setSgxInfo(refVal_sgxInfo);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_status;
            ok &= ModelBase::fromJson(fieldValue, refVal_status);
            setStatus(refVal_status);
        }
    }
    return ok;
}

void Xml_ns0_nodeInfo_allOf::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
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
    if(m_SgxInfoIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sgxInfo"), m_SgxInfo));
    }
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("status"), m_Status));
    }
}

bool Xml_ns0_nodeInfo_allOf::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
    if(multipart->hasContent(utility::conversions::to_string_t("sgxInfo")))
    {
        std::shared_ptr<Xml_ns0_SGXInfo> refVal_sgxInfo;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sgxInfo")), refVal_sgxInfo );
        setSgxInfo(refVal_sgxInfo);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("status")))
    {
        utility::string_t refVal_status;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("status")), refVal_status );
        setStatus(refVal_status);
    }
    return ok;
}

utility::string_t Xml_ns0_nodeInfo_allOf::getConnectionURL() const
{
    return m_ConnectionURL;
}

void Xml_ns0_nodeInfo_allOf::setConnectionURL(const utility::string_t& value)
{
    m_ConnectionURL = value;
    m_ConnectionURLIsSet = true;
}

bool Xml_ns0_nodeInfo_allOf::connectionURLIsSet() const
{
    return m_ConnectionURLIsSet;
}

void Xml_ns0_nodeInfo_allOf::unsetConnectionURL()
{
    m_ConnectionURLIsSet = false;
}
utility::string_t Xml_ns0_nodeInfo_allOf::getCpuFamily() const
{
    return m_CpuFamily;
}

void Xml_ns0_nodeInfo_allOf::setCpuFamily(const utility::string_t& value)
{
    m_CpuFamily = value;
    m_CpuFamilyIsSet = true;
}

bool Xml_ns0_nodeInfo_allOf::cpuFamilyIsSet() const
{
    return m_CpuFamilyIsSet;
}

void Xml_ns0_nodeInfo_allOf::unsetCpuFamily()
{
    m_CpuFamilyIsSet = false;
}
utility::string_t Xml_ns0_nodeInfo_allOf::getCpuFrequency() const
{
    return m_CpuFrequency;
}

void Xml_ns0_nodeInfo_allOf::setCpuFrequency(const utility::string_t& value)
{
    m_CpuFrequency = value;
    m_CpuFrequencyIsSet = true;
}

bool Xml_ns0_nodeInfo_allOf::cpuFrequencyIsSet() const
{
    return m_CpuFrequencyIsSet;
}

void Xml_ns0_nodeInfo_allOf::unsetCpuFrequency()
{
    m_CpuFrequencyIsSet = false;
}
int32_t Xml_ns0_nodeInfo_allOf::getCpuLogicalCount() const
{
    return m_CpuLogicalCount;
}

void Xml_ns0_nodeInfo_allOf::setCpuLogicalCount(int32_t value)
{
    m_CpuLogicalCount = value;
    m_CpuLogicalCountIsSet = true;
}

bool Xml_ns0_nodeInfo_allOf::cpuLogicalCountIsSet() const
{
    return m_CpuLogicalCountIsSet;
}

void Xml_ns0_nodeInfo_allOf::unsetCpuLogicalCount()
{
    m_CpuLogicalCountIsSet = false;
}
utility::string_t Xml_ns0_nodeInfo_allOf::getCpuModel() const
{
    return m_CpuModel;
}

void Xml_ns0_nodeInfo_allOf::setCpuModel(const utility::string_t& value)
{
    m_CpuModel = value;
    m_CpuModelIsSet = true;
}

bool Xml_ns0_nodeInfo_allOf::cpuModelIsSet() const
{
    return m_CpuModelIsSet;
}

void Xml_ns0_nodeInfo_allOf::unsetCpuModel()
{
    m_CpuModelIsSet = false;
}
int32_t Xml_ns0_nodeInfo_allOf::getCpuPhysicalCores() const
{
    return m_CpuPhysicalCores;
}

void Xml_ns0_nodeInfo_allOf::setCpuPhysicalCores(int32_t value)
{
    m_CpuPhysicalCores = value;
    m_CpuPhysicalCoresIsSet = true;
}

bool Xml_ns0_nodeInfo_allOf::cpuPhysicalCoresIsSet() const
{
    return m_CpuPhysicalCoresIsSet;
}

void Xml_ns0_nodeInfo_allOf::unsetCpuPhysicalCores()
{
    m_CpuPhysicalCoresIsSet = false;
}
utility::string_t Xml_ns0_nodeInfo_allOf::getHardwareBaseboard() const
{
    return m_HardwareBaseboard;
}

void Xml_ns0_nodeInfo_allOf::setHardwareBaseboard(const utility::string_t& value)
{
    m_HardwareBaseboard = value;
    m_HardwareBaseboardIsSet = true;
}

bool Xml_ns0_nodeInfo_allOf::hardwareBaseboardIsSet() const
{
    return m_HardwareBaseboardIsSet;
}

void Xml_ns0_nodeInfo_allOf::unsetHardwareBaseboard()
{
    m_HardwareBaseboardIsSet = false;
}
utility::string_t Xml_ns0_nodeInfo_allOf::getHardwareFirmware() const
{
    return m_HardwareFirmware;
}

void Xml_ns0_nodeInfo_allOf::setHardwareFirmware(const utility::string_t& value)
{
    m_HardwareFirmware = value;
    m_HardwareFirmwareIsSet = true;
}

bool Xml_ns0_nodeInfo_allOf::hardwareFirmwareIsSet() const
{
    return m_HardwareFirmwareIsSet;
}

void Xml_ns0_nodeInfo_allOf::unsetHardwareFirmware()
{
    m_HardwareFirmwareIsSet = false;
}
std::shared_ptr<Xml_ns0_IPFSSystemInfo> Xml_ns0_nodeInfo_allOf::getIpfsInfo() const
{
    return m_IpfsInfo;
}

void Xml_ns0_nodeInfo_allOf::setIpfsInfo(const std::shared_ptr<Xml_ns0_IPFSSystemInfo>& value)
{
    m_IpfsInfo = value;
    m_IpfsInfoIsSet = true;
}

bool Xml_ns0_nodeInfo_allOf::ipfsInfoIsSet() const
{
    return m_IpfsInfoIsSet;
}

void Xml_ns0_nodeInfo_allOf::unsetIpfsInfo()
{
    m_IpfsInfoIsSet = false;
}
utility::string_t Xml_ns0_nodeInfo_allOf::getMemory() const
{
    return m_Memory;
}

void Xml_ns0_nodeInfo_allOf::setMemory(const utility::string_t& value)
{
    m_Memory = value;
    m_MemoryIsSet = true;
}

bool Xml_ns0_nodeInfo_allOf::memoryIsSet() const
{
    return m_MemoryIsSet;
}

void Xml_ns0_nodeInfo_allOf::unsetMemory()
{
    m_MemoryIsSet = false;
}
utility::string_t Xml_ns0_nodeInfo_allOf::getOperatingSystem() const
{
    return m_OperatingSystem;
}

void Xml_ns0_nodeInfo_allOf::setOperatingSystem(const utility::string_t& value)
{
    m_OperatingSystem = value;
    m_OperatingSystemIsSet = true;
}

bool Xml_ns0_nodeInfo_allOf::operatingSystemIsSet() const
{
    return m_OperatingSystemIsSet;
}

void Xml_ns0_nodeInfo_allOf::unsetOperatingSystem()
{
    m_OperatingSystemIsSet = false;
}
int64_t Xml_ns0_nodeInfo_allOf::getOperatingSystemUptime() const
{
    return m_OperatingSystemUptime;
}

void Xml_ns0_nodeInfo_allOf::setOperatingSystemUptime(int64_t value)
{
    m_OperatingSystemUptime = value;
    m_OperatingSystemUptimeIsSet = true;
}

bool Xml_ns0_nodeInfo_allOf::operatingSystemUptimeIsSet() const
{
    return m_OperatingSystemUptimeIsSet;
}

void Xml_ns0_nodeInfo_allOf::unsetOperatingSystemUptime()
{
    m_OperatingSystemUptimeIsSet = false;
}
utility::string_t Xml_ns0_nodeInfo_allOf::getOwner() const
{
    return m_Owner;
}

void Xml_ns0_nodeInfo_allOf::setOwner(const utility::string_t& value)
{
    m_Owner = value;
    m_OwnerIsSet = true;
}

bool Xml_ns0_nodeInfo_allOf::ownerIsSet() const
{
    return m_OwnerIsSet;
}

void Xml_ns0_nodeInfo_allOf::unsetOwner()
{
    m_OwnerIsSet = false;
}
std::vector<utility::string_t>& Xml_ns0_nodeInfo_allOf::getProcessors()
{
    return m_Processors;
}

void Xml_ns0_nodeInfo_allOf::setProcessors(const std::vector<utility::string_t>& value)
{
    m_Processors = value;
    m_ProcessorsIsSet = true;
}

bool Xml_ns0_nodeInfo_allOf::processorsIsSet() const
{
    return m_ProcessorsIsSet;
}

void Xml_ns0_nodeInfo_allOf::unsetProcessors()
{
    m_ProcessorsIsSet = false;
}
utility::string_t Xml_ns0_nodeInfo_allOf::getPublicKey() const
{
    return m_PublicKey;
}

void Xml_ns0_nodeInfo_allOf::setPublicKey(const utility::string_t& value)
{
    m_PublicKey = value;
    m_PublicKeyIsSet = true;
}

bool Xml_ns0_nodeInfo_allOf::publicKeyIsSet() const
{
    return m_PublicKeyIsSet;
}

void Xml_ns0_nodeInfo_allOf::unsetPublicKey()
{
    m_PublicKeyIsSet = false;
}
std::shared_ptr<Xml_ns0_SGXInfo> Xml_ns0_nodeInfo_allOf::getSgxInfo() const
{
    return m_SgxInfo;
}

void Xml_ns0_nodeInfo_allOf::setSgxInfo(const std::shared_ptr<Xml_ns0_SGXInfo>& value)
{
    m_SgxInfo = value;
    m_SgxInfoIsSet = true;
}

bool Xml_ns0_nodeInfo_allOf::sgxInfoIsSet() const
{
    return m_SgxInfoIsSet;
}

void Xml_ns0_nodeInfo_allOf::unsetSgxInfo()
{
    m_SgxInfoIsSet = false;
}
utility::string_t Xml_ns0_nodeInfo_allOf::getStatus() const
{
    return m_Status;
}

void Xml_ns0_nodeInfo_allOf::setStatus(const utility::string_t& value)
{
    m_Status = value;
    m_StatusIsSet = true;
}

bool Xml_ns0_nodeInfo_allOf::statusIsSet() const
{
    return m_StatusIsSet;
}

void Xml_ns0_nodeInfo_allOf::unsetStatus()
{
    m_StatusIsSet = false;
}
}
}
}
}


