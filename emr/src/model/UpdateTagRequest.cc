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

#include <alibabacloud/emr/model/UpdateTagRequest.h>

using AlibabaCloud::Emr::Model::UpdateTagRequest;

UpdateTagRequest::UpdateTagRequest() :
	RpcServiceRequest("emr", "2016-04-08", "UpdateTag")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateTagRequest::~UpdateTagRequest()
{}

long UpdateTagRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpdateTagRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UpdateTagRequest::getDescription()const
{
	return description_;
}

void UpdateTagRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string UpdateTagRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UpdateTagRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string UpdateTagRequest::getRegionId()const
{
	return regionId_;
}

void UpdateTagRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string UpdateTagRequest::getName()const
{
	return name_;
}

void UpdateTagRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

long UpdateTagRequest::getId()const
{
	return id_;
}

void UpdateTagRequest::setId(long id)
{
	id_ = id;
	setParameter("Id", std::to_string(id));
}

std::string UpdateTagRequest::getCategory()const
{
	return category_;
}

void UpdateTagRequest::setCategory(const std::string& category)
{
	category_ = category;
	setParameter("Category", category);
}

