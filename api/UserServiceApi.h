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

/*
 * UserServiceApi.h
 *
 * 
 */

#ifndef   COM_MADANA_APICLIENT_API_UserServiceApi_H_
#define   COM_MADANA_APICLIENT_API_UserServiceApi_H_


#include "../ApiClient.h"

#include "HttpContent.h"
#include "Json_MDN_User.h"
#include "Json_MDN_UserProfileImage.h"
#include "Json_MDN_UserSetting.h"
#include <cpprest/details/basic_types.h>


#include <boost/optional.hpp>

namespace   com {
namespace madana {
namespace apiclient {
namespace api {

using namespace com::madana::apiclient::model;



class  UserServiceApi 
{
public:

    explicit UserServiceApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~UserServiceApi();

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="planname"></param>
    /// <param name="username"></param>
    pplx::task<std::shared_ptr<HttpContent>> cancelSubscription(
        utility::string_t planname,
        utility::string_t username
    ) const;
    /// <summary>
    /// Creates a new user object.
    /// </summary>
    /// <remarks>
    /// Creates a new user object
    /// </remarks>
    /// <param name="referrer"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="body">provided user object inheriting properties and credentials (optional)</param>
    pplx::task<std::shared_ptr<HttpContent>> createObject(
        boost::optional<utility::string_t> referrer,
        boost::optional<std::shared_ptr<Json_MDN_User>> body
    ) const;
    /// <summary>
    /// Deletes an User based on the provided id and securitycontext.
    /// </summary>
    /// <remarks>
    /// Deletes an User based on the provided id and securitycontext
    /// </remarks>
    /// <param name="username"></param>
    pplx::task<std::shared_ptr<HttpContent>> deleteObject(
        utility::string_t username
    ) const;
    /// <summary>
    /// Deletes linked account from the user and securitycontext.
    /// </summary>
    /// <remarks>
    /// Deletes linked account from the user and securitycontext
    /// </remarks>
    /// <param name="ident"></param>
    /// <param name="platform"></param>
    /// <param name="username"></param>
    pplx::task<std::shared_ptr<HttpContent>> deleteObject_0(
        utility::string_t ident,
        utility::string_t platform,
        utility::string_t username
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="username"></param>
    pplx::task<std::shared_ptr<HttpContent>> getAvatars(
        utility::string_t username
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="username"></param>
    pplx::task<std::shared_ptr<HttpContent>> getCertificates(
        utility::string_t username
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="username"></param>
    /// <param name="limit"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    /// <param name="offset"> (optional, default to utility::conversions::to_string_t(&quot;&quot;))</param>
    pplx::task<std::shared_ptr<HttpContent>> getEnclaveHistory(
        utility::string_t username,
        boost::optional<utility::string_t> limit,
        boost::optional<utility::string_t> offset
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="username"></param>
    pplx::task<std::shared_ptr<HttpContent>> getObject2(
        utility::string_t username
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="username"></param>
    /// <param name="body"> (optional)</param>
    pplx::task<std::shared_ptr<HttpContent>> setAvatar(
        utility::string_t username,
        boost::optional<std::shared_ptr<Json_MDN_UserProfileImage>> body
    ) const;
    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="username"></param>
    /// <param name="body"> (optional)</param>
    pplx::task<std::shared_ptr<HttpContent>> setSettings(
        utility::string_t username,
        boost::optional<std::shared_ptr<Json_MDN_UserSetting>> body
    ) const;
    /// <summary>
    /// Updates Userproperties based on the provided user object.
    /// </summary>
    /// <remarks>
    /// Updates Userproperties based on the provided user object
    /// </remarks>
    /// <param name="username"></param>
    /// <param name="body">the new user object inherting all properties that should be change (optional)</param>
    pplx::task<std::shared_ptr<HttpContent>> updateObject(
        utility::string_t username,
        boost::optional<std::shared_ptr<Json_MDN_User>> body
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /*   COM_MADANA_APICLIENT_API_UserServiceApi_H_ */

