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

#include <alibabacloud/polardb/model/ModifyDBClusterTDERequest.h>

using AlibabaCloud::Polardb::Model::ModifyDBClusterTDERequest;

ModifyDBClusterTDERequest::ModifyDBClusterTDERequest() :
	RpcServiceRequest("polardb", "2017-08-01", "ModifyDBClusterTDE")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyDBClusterTDERequest::~ModifyDBClusterTDERequest()
{}

long ModifyDBClusterTDERequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDBClusterTDERequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyDBClusterTDERequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDBClusterTDERequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyDBClusterTDERequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDBClusterTDERequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyDBClusterTDERequest::getDBClusterId()const
{
	return dBClusterId_;
}

void ModifyDBClusterTDERequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setParameter("DBClusterId", dBClusterId);
}

std::string ModifyDBClusterTDERequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyDBClusterTDERequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ModifyDBClusterTDERequest::getEncryptionKey()const
{
	return encryptionKey_;
}

void ModifyDBClusterTDERequest::setEncryptionKey(const std::string& encryptionKey)
{
	encryptionKey_ = encryptionKey;
	setParameter("EncryptionKey", encryptionKey);
}

long ModifyDBClusterTDERequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDBClusterTDERequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyDBClusterTDERequest::getRoleArn()const
{
	return roleArn_;
}

void ModifyDBClusterTDERequest::setRoleArn(const std::string& roleArn)
{
	roleArn_ = roleArn;
	setParameter("RoleArn", roleArn);
}

std::string ModifyDBClusterTDERequest::getTDEStatus()const
{
	return tDEStatus_;
}

void ModifyDBClusterTDERequest::setTDEStatus(const std::string& tDEStatus)
{
	tDEStatus_ = tDEStatus;
	setParameter("TDEStatus", tDEStatus);
}

