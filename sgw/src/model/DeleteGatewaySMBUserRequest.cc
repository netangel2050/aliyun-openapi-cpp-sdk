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

#include <alibabacloud/sgw/model/DeleteGatewaySMBUserRequest.h>

using AlibabaCloud::Sgw::Model::DeleteGatewaySMBUserRequest;

DeleteGatewaySMBUserRequest::DeleteGatewaySMBUserRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "DeleteGatewaySMBUser")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteGatewaySMBUserRequest::~DeleteGatewaySMBUserRequest()
{}

std::string DeleteGatewaySMBUserRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteGatewaySMBUserRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DeleteGatewaySMBUserRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteGatewaySMBUserRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DeleteGatewaySMBUserRequest::getGatewayId()const
{
	return gatewayId_;
}

void DeleteGatewaySMBUserRequest::setGatewayId(const std::string& gatewayId)
{
	gatewayId_ = gatewayId;
	setParameter("GatewayId", gatewayId);
}

std::string DeleteGatewaySMBUserRequest::getUsername()const
{
	return username_;
}

void DeleteGatewaySMBUserRequest::setUsername(const std::string& username)
{
	username_ = username;
	setParameter("Username", username);
}

