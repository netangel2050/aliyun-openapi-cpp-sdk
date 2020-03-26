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

#include <alibabacloud/emr/model/ListRolesRequest.h>

using AlibabaCloud::Emr::Model::ListRolesRequest;

ListRolesRequest::ListRolesRequest() :
	RpcServiceRequest("emr", "2016-04-08", "ListRoles")
{
	setMethod(HttpRequest::Method::Post);
}

ListRolesRequest::~ListRolesRequest()
{}

long ListRolesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ListRolesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ListRolesRequest::getResourceType()const
{
	return resourceType_;
}

void ListRolesRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

std::string ListRolesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ListRolesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ListRolesRequest::getRegionId()const
{
	return regionId_;
}

void ListRolesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

