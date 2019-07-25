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

#include <alibabacloud/cloudapi/model/DescribeApiDocRequest.h>

using AlibabaCloud::CloudAPI::Model::DescribeApiDocRequest;

DescribeApiDocRequest::DescribeApiDocRequest() :
	RpcServiceRequest("cloudapi", "2016-07-14", "DescribeApiDoc")
{}

DescribeApiDocRequest::~DescribeApiDocRequest()
{}

std::string DescribeApiDocRequest::getStageName()const
{
	return stageName_;
}

void DescribeApiDocRequest::setStageName(const std::string& stageName)
{
	stageName_ = stageName;
	setCoreParameter("StageName", stageName);
}

std::string DescribeApiDocRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeApiDocRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeApiDocRequest::getGroupId()const
{
	return groupId_;
}

void DescribeApiDocRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

std::string DescribeApiDocRequest::getApiId()const
{
	return apiId_;
}

void DescribeApiDocRequest::setApiId(const std::string& apiId)
{
	apiId_ = apiId;
	setCoreParameter("ApiId", apiId);
}

std::string DescribeApiDocRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeApiDocRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

