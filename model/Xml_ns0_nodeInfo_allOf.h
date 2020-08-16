/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.4.14-master.16
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Xml_ns0_nodeInfo_allOf.h
 *
 * 
 */

#ifndef COM_MADANA_CLIENT_MODEL_Xml_ns0_nodeInfo_allOf_H_
#define COM_MADANA_CLIENT_MODEL_Xml_ns0_nodeInfo_allOf_H_


#include "../ModelBase.h"

#include "Xml_ns0_IPFSSystemInfo.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace com {
namespace madana {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  Xml_ns0_nodeInfo_allOf
    : public ModelBase
{
public:
    Xml_ns0_nodeInfo_allOf();
    virtual ~Xml_ns0_nodeInfo_allOf();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Xml_ns0_nodeInfo_allOf members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getConnectionURL() const;
    bool connectionURLIsSet() const;
    void unsetConnectionURL();

    void setConnectionURL(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCpuFamily() const;
    bool cpuFamilyIsSet() const;
    void unsetCpuFamily();

    void setCpuFamily(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCpuFrequency() const;
    bool cpuFrequencyIsSet() const;
    void unsetCpuFrequency();

    void setCpuFrequency(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getCpuLogicalCount() const;
    bool cpuLogicalCountIsSet() const;
    void unsetCpuLogicalCount();

    void setCpuLogicalCount(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCpuModel() const;
    bool cpuModelIsSet() const;
    void unsetCpuModel();

    void setCpuModel(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getCpuPhysicalCores() const;
    bool cpuPhysicalCoresIsSet() const;
    void unsetCpuPhysicalCores();

    void setCpuPhysicalCores(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getHardwareBaseboard() const;
    bool hardwareBaseboardIsSet() const;
    void unsetHardwareBaseboard();

    void setHardwareBaseboard(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getHardwareFirmware() const;
    bool hardwareFirmwareIsSet() const;
    void unsetHardwareFirmware();

    void setHardwareFirmware(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Xml_ns0_IPFSSystemInfo> getIpfsInfo() const;
    bool ipfsInfoIsSet() const;
    void unsetIpfsInfo();

    void setIpfsInfo(const std::shared_ptr<Xml_ns0_IPFSSystemInfo>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getMemory() const;
    bool memoryIsSet() const;
    void unsetMemory();

    void setMemory(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getOperatingSystem() const;
    bool operatingSystemIsSet() const;
    void unsetOperatingSystem();

    void setOperatingSystem(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    int64_t getOperatingSystemUptime() const;
    bool operatingSystemUptimeIsSet() const;
    void unsetOperatingSystemUptime();

    void setOperatingSystemUptime(int64_t value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getOwner() const;
    bool ownerIsSet() const;
    void unsetOwner();

    void setOwner(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getProcessors();
    bool processorsIsSet() const;
    void unsetProcessors();

    void setProcessors(const std::vector<utility::string_t>& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPublicKey() const;
    bool publicKeyIsSet() const;
    void unsetPublicKey();

    void setPublicKey(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();

    void setStatus(const utility::string_t& value);


protected:
    utility::string_t m_ConnectionURL;
    bool m_ConnectionURLIsSet;
    utility::string_t m_CpuFamily;
    bool m_CpuFamilyIsSet;
    utility::string_t m_CpuFrequency;
    bool m_CpuFrequencyIsSet;
    int32_t m_CpuLogicalCount;
    bool m_CpuLogicalCountIsSet;
    utility::string_t m_CpuModel;
    bool m_CpuModelIsSet;
    int32_t m_CpuPhysicalCores;
    bool m_CpuPhysicalCoresIsSet;
    utility::string_t m_HardwareBaseboard;
    bool m_HardwareBaseboardIsSet;
    utility::string_t m_HardwareFirmware;
    bool m_HardwareFirmwareIsSet;
    std::shared_ptr<Xml_ns0_IPFSSystemInfo> m_IpfsInfo;
    bool m_IpfsInfoIsSet;
    utility::string_t m_Memory;
    bool m_MemoryIsSet;
    utility::string_t m_OperatingSystem;
    bool m_OperatingSystemIsSet;
    int64_t m_OperatingSystemUptime;
    bool m_OperatingSystemUptimeIsSet;
    utility::string_t m_Owner;
    bool m_OwnerIsSet;
    std::vector<utility::string_t> m_Processors;
    bool m_ProcessorsIsSet;
    utility::string_t m_PublicKey;
    bool m_PublicKeyIsSet;
    utility::string_t m_Status;
    bool m_StatusIsSet;
};


}
}
}
}

#endif /* COM_MADANA_CLIENT_MODEL_Xml_ns0_nodeInfo_allOf_H_ */