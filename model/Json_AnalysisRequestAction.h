/**
 * madana-api
 * <h1>API Quickstart Guide</h1>        <p>This documentation contains a Quickstart Guide, a few <a href=\"downloads.html\">sample clients</a>  for download and information about the available  <a href=\"resources.html\">endpoints</a>  and  <a href=\"data.html\">DataTypes</a>  </p>     <p>The <a target=\"_blank\" href=\"http://madana-explorer-staging.eu-central-1.elasticbeanstalk.com/login\">  MADANA Explorer</a> can be used to verify the interactions with the API</p>           <p>Internal use only. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a></p>         <br> <br>
 *
 * The version of the OpenAPI document: 0.4.12
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Json_AnalysisRequestAction.h
 *
 * 
 */

#ifndef COM_MADANA_CLIENT_MODEL_Json_AnalysisRequestAction_H_
#define COM_MADANA_CLIENT_MODEL_Json_AnalysisRequestAction_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace madana {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  Json_AnalysisRequestAction
    : public ModelBase
{
public:
    Json_AnalysisRequestAction();
    virtual ~Json_AnalysisRequestAction();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Json_AnalysisRequestAction members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getRequestID() const;
    bool requestIDIsSet() const;
    void unsetRequestID();

    void setRequestID(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getUser() const;
    bool userIsSet() const;
    void unsetUser();

    void setUser(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getConnection() const;
    bool connectionIsSet() const;
    void unsetConnection();

    void setConnection(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDate() const;
    bool dateIsSet() const;
    void unsetdate();

    void setDate(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getFingerprint() const;
    bool fingerprintIsSet() const;
    void unsetFingerprint();

    void setFingerprint(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getApplication() const;
    bool applicationIsSet() const;
    void unsetApplication();

    void setApplication(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getAction() const;
    bool actionIsSet() const;
    void unsetAction();

    void setAction(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDetails() const;
    bool detailsIsSet() const;
    void unsetDetails();

    void setDetails(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSignature() const;
    bool signatureIsSet() const;
    void unsetSignature();

    void setSignature(const utility::string_t& value);


protected:
    utility::string_t m_RequestID;
    bool m_RequestIDIsSet;
    utility::string_t m_User;
    bool m_UserIsSet;
    utility::string_t m_Connection;
    bool m_ConnectionIsSet;
    utility::string_t m_date;
    bool m_dateIsSet;
    utility::string_t m_Fingerprint;
    bool m_FingerprintIsSet;
    utility::string_t m_Application;
    bool m_ApplicationIsSet;
    utility::string_t m_Action;
    bool m_ActionIsSet;
    utility::string_t m_Details;
    bool m_DetailsIsSet;
    utility::string_t m_Signature;
    bool m_SignatureIsSet;
};


}
}
}
}

#endif /* COM_MADANA_CLIENT_MODEL_Json_AnalysisRequestAction_H_ */