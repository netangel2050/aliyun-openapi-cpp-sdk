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

#include <alibabacloud/vs/model/SetVsStreamsNotifyUrlConfigRequest.h>

using AlibabaCloud::Vs::Model::SetVsStreamsNotifyUrlConfigRequest;

SetVsStreamsNotifyUrlConfigRequest::SetVsStreamsNotifyUrlConfigRequest() :
	RpcServiceRequest("vs", "2018-12-12", "SetVsStreamsNotifyUrlConfig")
{
	setMethod(HttpRequest::Method::Post);
}

SetVsStreamsNotifyUrlConfigRequest::~SetVsStreamsNotifyUrlConfigRequest()
{}

std::string SetVsStreamsNotifyUrlConfigRequest::getAuthKey()const
{
	return authKey_;
}

void SetVsStreamsNotifyUrlConfigRequest::setAuthKey(const std::string& authKey)
{
	authKey_ = authKey;
	setParameter("AuthKey", authKey);
}

std::string SetVsStreamsNotifyUrlConfigRequest::getAuthType()const
{
	return authType_;
}

void SetVsStreamsNotifyUrlConfigRequest::setAuthType(const std::string& authType)
{
	authType_ = authType;
	setParameter("AuthType", authType);
}

std::string SetVsStreamsNotifyUrlConfigRequest::getNotifyUrl()const
{
	return notifyUrl_;
}

void SetVsStreamsNotifyUrlConfigRequest::setNotifyUrl(const std::string& notifyUrl)
{
	notifyUrl_ = notifyUrl;
	setParameter("NotifyUrl", notifyUrl);
}

std::string SetVsStreamsNotifyUrlConfigRequest::getShowLog()const
{
	return showLog_;
}

void SetVsStreamsNotifyUrlConfigRequest::setShowLog(const std::string& showLog)
{
	showLog_ = showLog;
	setParameter("ShowLog", showLog);
}

std::string SetVsStreamsNotifyUrlConfigRequest::getDomainName()const
{
	return domainName_;
}

void SetVsStreamsNotifyUrlConfigRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

long SetVsStreamsNotifyUrlConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void SetVsStreamsNotifyUrlConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

