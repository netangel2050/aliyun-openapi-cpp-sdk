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

#include <alibabacloud/smartag/model/SwitchSAGHaStateRequest.h>

using AlibabaCloud::Smartag::Model::SwitchSAGHaStateRequest;

SwitchSAGHaStateRequest::SwitchSAGHaStateRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "SwitchSAGHaState")
{}

SwitchSAGHaStateRequest::~SwitchSAGHaStateRequest()
{}

long SwitchSAGHaStateRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SwitchSAGHaStateRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SwitchSAGHaStateRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SwitchSAGHaStateRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SwitchSAGHaStateRequest::getRegionId()const
{
	return regionId_;
}

void SwitchSAGHaStateRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string SwitchSAGHaStateRequest::getHaType()const
{
	return haType_;
}

void SwitchSAGHaStateRequest::setHaType(const std::string& haType)
{
	haType_ = haType;
	setCoreParameter("HaType", haType);
}

std::string SwitchSAGHaStateRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SwitchSAGHaStateRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string SwitchSAGHaStateRequest::getSmartAGId()const
{
	return smartAGId_;
}

void SwitchSAGHaStateRequest::setSmartAGId(const std::string& smartAGId)
{
	smartAGId_ = smartAGId;
	setCoreParameter("SmartAGId", smartAGId);
}

long SwitchSAGHaStateRequest::getOwnerId()const
{
	return ownerId_;
}

void SwitchSAGHaStateRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

