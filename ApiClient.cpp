/**
 * madana-api
 * <h1>Using the madana-api</h1>        <p>This documentation contains a Quickstart Guide, relating client functionality and information about the available         endpoints and used datamodels.   </p>       <p> The madana-api and its implementations are still in heavy development. This means that there may be problems in our protocols, or there may be mistakes in our implementations. We take security vulnerabilities very seriously. If you discover a security issue, please bring it to our attention right away! If you find a vulnerability that may affect live deployments -- for example, by exposing a remote execution exploit -- please send your report privately to info@madana.io. Please DO NOT file a public issue. If the issue is a protocol weakness that cannot be immediately exploited or something not yet deployed, just discuss it openly   </p>   <br>   <p> Note: Not all functionality might be acessible without having accquired and api-license token. For more information visit <a href=\"https://www.madana.io\">www.madana.io</a> </p>       <br>
 *
 * The version of the OpenAPI document: 0.4.15-master.8
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0-beta2.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "ApiClient.h"
#include "MultipartFormData.h"
#include "ModelBase.h"

#include <sstream>
#include <limits>
#include <iomanip>

template <typename T>
utility::string_t toString(const T value)
{
  utility::ostringstream_t out;
  out << std::setprecision(std::numeric_limits<T>::digits10) << std::fixed << value;
  return out.str();
}

namespace   com {
namespace madana {
namespace apiclient {
namespace api {

using namespace com::madana::apiclient::model;

ApiClient::ApiClient(std::shared_ptr<const ApiConfiguration> configuration )
    : m_Configuration(configuration)
{
}
ApiClient::~ApiClient()
{
}

const ApiClient::ResponseHandlerType& ApiClient::getResponseHandler() const {
    return m_ResponseHandler;
}

void ApiClient::setResponseHandler(const ResponseHandlerType& responseHandler) {
    m_ResponseHandler = responseHandler;
}

std::shared_ptr<const ApiConfiguration> ApiClient::getConfiguration() const
{
    return m_Configuration;
}
void ApiClient::setConfiguration(std::shared_ptr<const ApiConfiguration> configuration)
{
    m_Configuration = configuration;
}


utility::string_t ApiClient::parameterToString(utility::string_t value)
{
    return value;
}
utility::string_t ApiClient::parameterToString(int64_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return utility::conversions::to_string_t(valueAsStringStream.str());
}
utility::string_t ApiClient::parameterToString(int32_t value)
{
    std::stringstream valueAsStringStream;
    valueAsStringStream << value;
    return utility::conversions::to_string_t(valueAsStringStream.str());
}

utility::string_t ApiClient::parameterToString(float value)
{
    return utility::conversions::to_string_t(toString(value));
}

utility::string_t ApiClient::parameterToString(double value)
{
    return utility::conversions::to_string_t(toString(value));
}

utility::string_t ApiClient::parameterToString(const utility::datetime &value)
{
    return utility::conversions::to_string_t(value.to_string(utility::datetime::ISO_8601));
}

pplx::task<web::http::http_response> ApiClient::callApi(
    const utility::string_t& path,
    const utility::string_t& method,
    const std::map<utility::string_t, utility::string_t>& queryParams,
    const std::shared_ptr<IHttpBody> postBody,
    const std::map<utility::string_t, utility::string_t>& headerParams,
    const std::map<utility::string_t, utility::string_t>& formParams,
    const std::map<utility::string_t, std::shared_ptr<HttpContent>>& fileParams,
    const utility::string_t& contentType
) const
{
    if (postBody != nullptr && formParams.size() != 0)
    {
        throw ApiException(400, utility::conversions::to_string_t("Cannot have body and form params"));
    }

    if (postBody != nullptr && fileParams.size() != 0)
    {
        throw ApiException(400, utility::conversions::to_string_t("Cannot have body and file params"));
    }

    if (fileParams.size() > 0 && contentType != utility::conversions::to_string_t("multipart/form-data"))
    {
        throw ApiException(400, utility::conversions::to_string_t("Operations with file parameters must be called with multipart/form-data"));
    }

    web::http::client::http_client client(m_Configuration->getBaseUrl(), m_Configuration->getHttpConfig());

    web::http::http_request request;
    for (const auto& kvp : headerParams)
    {
        request.headers().add(kvp.first, kvp.second);
    }

    if (fileParams.size() > 0)
    {
        MultipartFormData uploadData;
        for (const auto& kvp : formParams)
        {
            uploadData.add(ModelBase::toHttpContent(kvp.first, kvp.second));
        }
        for (const auto& kvp : fileParams)
        {
            uploadData.add(ModelBase::toHttpContent(kvp.first, kvp.second));
        }
        std::stringstream data;
        uploadData.writeTo(data);
        auto bodyString = data.str();
        const auto length = bodyString.size();
        request.set_body(concurrency::streams::bytestream::open_istream(std::move(bodyString)), length, utility::conversions::to_string_t("multipart/form-data; boundary=") + uploadData.getBoundary());
    }
    else
    {
        if (postBody != nullptr)
        {
            std::stringstream data;
            postBody->writeTo(data);
            auto bodyString = data.str();
            const auto length = bodyString.size();
            request.set_body(concurrency::streams::bytestream::open_istream(std::move(bodyString)), length, contentType);
        }
        else
        {
            if (contentType == utility::conversions::to_string_t("application/json"))
            {
                web::json::value body_data = web::json::value::object();
                for (auto& kvp : formParams)
                {
                    body_data[kvp.first] = ModelBase::toJson(kvp.second);
                }
                if (!formParams.empty())
                {
                    request.set_body(body_data);
                }
            }
            else
            {
                web::http::uri_builder formData;
                for (const auto& kvp : formParams)
                {
                    formData.append_query(kvp.first, kvp.second);
                }
                if (!formParams.empty())
                {
                    request.set_body(formData.query(), utility::conversions::to_string_t("application/x-www-form-urlencoded"));
                }
            }
        }
    }

    web::http::uri_builder builder(path);
    for (const auto& kvp : queryParams)
    {
        builder.append_query(kvp.first, kvp.second);
    }
    request.set_request_uri(builder.to_uri());
    request.set_method(method);
    if ( !request.headers().has( web::http::header_names::user_agent ) )
    {
        request.headers().add( web::http::header_names::user_agent, m_Configuration->getUserAgent() );
    }

    return client.request(request);
}

}
}
}
}
