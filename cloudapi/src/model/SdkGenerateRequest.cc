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

#include <alibabacloud/cloudapi/model/SdkGenerateRequest.h>

using AlibabaCloud::CloudAPI::Model::SdkGenerateRequest;

SdkGenerateRequest::SdkGenerateRequest() :
	RpcServiceRequest("cloudapi", "2016-07-14", "SdkGenerate")
{}

SdkGenerateRequest::~SdkGenerateRequest()
{}

std::string SdkGenerateRequest::getSecurityToken()const
{
	return securityToken_;
}

void SdkGenerateRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string SdkGenerateRequest::getGroupId()const
{
	return groupId_;
}

void SdkGenerateRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", groupId);
}

long SdkGenerateRequest::getAppId()const
{
	return appId_;
}

void SdkGenerateRequest::setAppId(long appId)
{
	appId_ = appId;
	setCoreParameter("AppId", std::to_string(appId));
}

std::string SdkGenerateRequest::getLanguage()const
{
	return language_;
}

void SdkGenerateRequest::setLanguage(const std::string& language)
{
	language_ = language;
	setCoreParameter("Language", language);
}

std::string SdkGenerateRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SdkGenerateRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

