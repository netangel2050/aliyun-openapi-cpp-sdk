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

#include <alibabacloud/arms/model/SendCustomIncidentsRequest.h>

using AlibabaCloud::ARMS::Model::SendCustomIncidentsRequest;

SendCustomIncidentsRequest::SendCustomIncidentsRequest() :
	RpcServiceRequest("arms", "2019-08-08", "SendCustomIncidents")
{
	setMethod(HttpRequest::Method::Post);
}

SendCustomIncidentsRequest::~SendCustomIncidentsRequest()
{}

std::string SendCustomIncidentsRequest::getRegionId()const
{
	return regionId_;
}

void SendCustomIncidentsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string SendCustomIncidentsRequest::getIncidents()const
{
	return incidents_;
}

void SendCustomIncidentsRequest::setIncidents(const std::string& incidents)
{
	incidents_ = incidents;
	setParameter("Incidents", incidents);
}

std::string SendCustomIncidentsRequest::getProxyUserId()const
{
	return proxyUserId_;
}

void SendCustomIncidentsRequest::setProxyUserId(const std::string& proxyUserId)
{
	proxyUserId_ = proxyUserId;
	setParameter("ProxyUserId", proxyUserId);
}

std::string SendCustomIncidentsRequest::getProductType()const
{
	return productType_;
}

void SendCustomIncidentsRequest::setProductType(const std::string& productType)
{
	productType_ = productType;
	setParameter("ProductType", productType);
}

