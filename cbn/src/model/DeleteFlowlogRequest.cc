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

#include <alibabacloud/cbn/model/DeleteFlowlogRequest.h>

using AlibabaCloud::Cbn::Model::DeleteFlowlogRequest;

DeleteFlowlogRequest::DeleteFlowlogRequest() :
	RpcServiceRequest("cbn", "2017-09-12", "DeleteFlowlog")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteFlowlogRequest::~DeleteFlowlogRequest()
{}

long DeleteFlowlogRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteFlowlogRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteFlowlogRequest::getClientToken()const
{
	return clientToken_;
}

void DeleteFlowlogRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string DeleteFlowlogRequest::getCenId()const
{
	return cenId_;
}

void DeleteFlowlogRequest::setCenId(const std::string& cenId)
{
	cenId_ = cenId;
	setParameter("CenId", cenId);
}

std::string DeleteFlowlogRequest::getRegionId()const
{
	return regionId_;
}

void DeleteFlowlogRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DeleteFlowlogRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteFlowlogRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteFlowlogRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteFlowlogRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DeleteFlowlogRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteFlowlogRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteFlowlogRequest::getFlowLogId()const
{
	return flowLogId_;
}

void DeleteFlowlogRequest::setFlowLogId(const std::string& flowLogId)
{
	flowLogId_ = flowLogId;
	setParameter("FlowLogId", flowLogId);
}

