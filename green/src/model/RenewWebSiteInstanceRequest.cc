/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <alibabacloud/green/model/RenewWebSiteInstanceRequest.h>

using AlibabaCloud::Green::Model::RenewWebSiteInstanceRequest;

RenewWebSiteInstanceRequest::RenewWebSiteInstanceRequest() :
	RpcServiceRequest("green", "2017-08-23", "RenewWebSiteInstance")
{
	setMethod(HttpRequest::Method::Post);
}

RenewWebSiteInstanceRequest::~RenewWebSiteInstanceRequest()
{}

std::string RenewWebSiteInstanceRequest::getClientToken()const
{
	return clientToken_;
}

void RenewWebSiteInstanceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

int RenewWebSiteInstanceRequest::getOrderNum()const
{
	return orderNum_;
}

void RenewWebSiteInstanceRequest::setOrderNum(int orderNum)
{
	orderNum_ = orderNum;
	setParameter("OrderNum", std::to_string(orderNum));
}

std::string RenewWebSiteInstanceRequest::getCommodityCode()const
{
	return commodityCode_;
}

void RenewWebSiteInstanceRequest::setCommodityCode(const std::string& commodityCode)
{
	commodityCode_ = commodityCode;
	setParameter("CommodityCode", commodityCode);
}

long RenewWebSiteInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void RenewWebSiteInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int RenewWebSiteInstanceRequest::getDuration()const
{
	return duration_;
}

void RenewWebSiteInstanceRequest::setDuration(int duration)
{
	duration_ = duration;
	setParameter("Duration", std::to_string(duration));
}

std::string RenewWebSiteInstanceRequest::getInstanceId()const
{
	return instanceId_;
}

void RenewWebSiteInstanceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string RenewWebSiteInstanceRequest::getPricingCycle()const
{
	return pricingCycle_;
}

void RenewWebSiteInstanceRequest::setPricingCycle(const std::string& pricingCycle)
{
	pricingCycle_ = pricingCycle;
	setParameter("PricingCycle", pricingCycle);
}

std::string RenewWebSiteInstanceRequest::getOrderType()const
{
	return orderType_;
}

void RenewWebSiteInstanceRequest::setOrderType(const std::string& orderType)
{
	orderType_ = orderType;
	setParameter("OrderType", orderType);
}

