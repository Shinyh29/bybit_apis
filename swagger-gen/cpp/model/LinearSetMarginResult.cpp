/**
 * Bybit API
 * ## REST API for the Bybit Exchange. Base URI: [https://api.bybit.com]  
 *
 * OpenAPI spec version: 0.2.10
 * Contact: support@bybit.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.8.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "LinearSetMarginResult.h"

namespace io {
namespace swagger {
namespace client {
namespace model {

LinearSetMarginResult::LinearSetMarginResult()
{
    m_PositionListResultIsSet = false;
    m_Available_balance = 0.0;
    m_Available_balanceIsSet = false;
    m_Wallet_balance = 0.0;
    m_Wallet_balanceIsSet = false;
}

LinearSetMarginResult::~LinearSetMarginResult()
{
}

void LinearSetMarginResult::validate()
{
    // TODO: implement validation
}

web::json::value LinearSetMarginResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_PositionListResultIsSet)
    {
        val[utility::conversions::to_string_t("PositionListResult")] = ModelBase::toJson(m_PositionListResult);
    }
    if(m_Available_balanceIsSet)
    {
        val[utility::conversions::to_string_t("available_balance")] = ModelBase::toJson(m_Available_balance);
    }
    if(m_Wallet_balanceIsSet)
    {
        val[utility::conversions::to_string_t("wallet_balance")] = ModelBase::toJson(m_Wallet_balance);
    }

    return val;
}

void LinearSetMarginResult::fromJson(web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("PositionListResult")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("PositionListResult")];
        if(!fieldValue.is_null())
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromJson(fieldValue);
            setPositionListResult( newItem );
        }
    }
    if(val.has_field(utility::conversions::to_string_t("available_balance")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("available_balance")];
        if(!fieldValue.is_null())
        {
            setAvailableBalance(ModelBase::doubleFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("wallet_balance")))
    {
        web::json::value& fieldValue = val[utility::conversions::to_string_t("wallet_balance")];
        if(!fieldValue.is_null())
        {
            setWalletBalance(ModelBase::doubleFromJson(fieldValue));
        }
    }
}

void LinearSetMarginResult::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_PositionListResultIsSet)
    {
        if (m_PositionListResult.get())
        {
            m_PositionListResult->toMultipart(multipart, utility::conversions::to_string_t("PositionListResult."));
        }
        
    }
    if(m_Available_balanceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("available_balance"), m_Available_balance));
    }
    if(m_Wallet_balanceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("wallet_balance"), m_Wallet_balance));
    }
}

void LinearSetMarginResult::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("PositionListResult")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("PositionListResult")))
        {
            std::shared_ptr<Object> newItem(nullptr);
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("PositionListResult."));
            setPositionListResult( newItem );
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("available_balance")))
    {
        setAvailableBalance(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("available_balance"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("wallet_balance")))
    {
        setWalletBalance(ModelBase::doubleFromHttpContent(multipart->getContent(utility::conversions::to_string_t("wallet_balance"))));
    }
}

std::shared_ptr<Object> LinearSetMarginResult::getPositionListResult() const
{
    return m_PositionListResult;
}


void LinearSetMarginResult::setPositionListResult(std::shared_ptr<Object> value)
{
    m_PositionListResult = value;
    m_PositionListResultIsSet = true;
}
bool LinearSetMarginResult::positionListResultIsSet() const
{
    return m_PositionListResultIsSet;
}

void LinearSetMarginResult::unsetPositionListResult()
{
    m_PositionListResultIsSet = false;
}

double LinearSetMarginResult::getAvailableBalance() const
{
    return m_Available_balance;
}


void LinearSetMarginResult::setAvailableBalance(double value)
{
    m_Available_balance = value;
    m_Available_balanceIsSet = true;
}
bool LinearSetMarginResult::availableBalanceIsSet() const
{
    return m_Available_balanceIsSet;
}

void LinearSetMarginResult::unsetAvailable_balance()
{
    m_Available_balanceIsSet = false;
}

double LinearSetMarginResult::getWalletBalance() const
{
    return m_Wallet_balance;
}


void LinearSetMarginResult::setWalletBalance(double value)
{
    m_Wallet_balance = value;
    m_Wallet_balanceIsSet = true;
}
bool LinearSetMarginResult::walletBalanceIsSet() const
{
    return m_Wallet_balanceIsSet;
}

void LinearSetMarginResult::unsetWallet_balance()
{
    m_Wallet_balanceIsSet = false;
}

}
}
}
}
