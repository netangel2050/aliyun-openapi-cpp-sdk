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

#include <alibabacloud/emr/model/DescribeClusterScriptRequest.h>

using AlibabaCloud::Emr::Model::DescribeClusterScriptRequest;

DescribeClusterScriptRequest::DescribeClusterScriptRequest() :
	RpcServiceRequest("emr", "2016-04-08", "DescribeClusterScript")
{}

DescribeClusterScriptRequest::~DescribeClusterScriptRequest()
{}

long DescribeClusterScriptRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeClusterScriptRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeClusterScriptRequest::getRegionId()const
{
	return regionId_;
}

void DescribeClusterScriptRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeClusterScriptRequest::getId()const
{
	return id_;
}

void DescribeClusterScriptRequest::setId(const std::string& id)
{
	id_ = id;
	setParameter("Id", id);
}

std::string DescribeClusterScriptRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeClusterScriptRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}
