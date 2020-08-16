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
 * HttpContent.h
 *
 * This class represents a single item of a multipart-formdata request.
 */

#ifndef COM_MADANA_CLIENT_MODEL_HttpContent_H_
#define COM_MADANA_CLIENT_MODEL_HttpContent_H_



#include <memory>

#include <cpprest/details/basic_types.h>

namespace com {
namespace madana {
namespace client {
namespace model {

class  HttpContent
{
public:
    HttpContent();
    virtual ~HttpContent();

    virtual utility::string_t getContentDisposition() const;
    virtual void setContentDisposition( const utility::string_t& value );

    virtual utility::string_t getName() const;
    virtual void setName( const utility::string_t& value );

    virtual utility::string_t getFileName() const;
    virtual void setFileName( const utility::string_t& value );

    virtual utility::string_t getContentType() const;
    virtual void setContentType( const utility::string_t& value );

    virtual std::shared_ptr<std::istream> getData() const;
    virtual void setData( std::shared_ptr<std::istream> value );

    virtual void writeTo( std::ostream& stream );

protected:
    // NOTE: no utility::string_t here because those strings can only contain ascii
    utility::string_t m_ContentDisposition;
    utility::string_t m_Name;
    utility::string_t m_FileName;
    utility::string_t m_ContentType;
    std::shared_ptr<std::istream> m_Data;
};

}
}
}
}

#endif /* COM_MADANA_CLIENT_MODEL_HttpContent_H_ */