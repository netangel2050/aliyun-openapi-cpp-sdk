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

#include <alibabacloud/cloudwf/model/SaveStaStatusRequest.h>

using AlibabaCloud::Cloudwf::Model::SaveStaStatusRequest;

SaveStaStatusRequest::SaveStaStatusRequest() :
	RpcServiceRequest("cloudwf", "2017-03-28", "SaveStaStatus")
{
	setMethod(HttpRequest::Method::Post);
}

SaveStaStatusRequest::~SaveStaStatusRequest()
{}

std::string SaveStaStatusRequest::getDescription()const
{
	return description_;
}

void SaveStaStatusRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string SaveStaStatusRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SaveStaStatusRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

long SaveStaStatusRequest::getId()const
{
	return id_;
}

void SaveStaStatusRequest::setId(long id)
{
	id_ = id;
	setParameter("Id", std::to_string(id));
}

