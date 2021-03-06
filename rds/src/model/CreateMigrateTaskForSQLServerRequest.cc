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

#include <alibabacloud/rds/model/CreateMigrateTaskForSQLServerRequest.h>

using AlibabaCloud::Rds::Model::CreateMigrateTaskForSQLServerRequest;

CreateMigrateTaskForSQLServerRequest::CreateMigrateTaskForSQLServerRequest() :
	RpcServiceRequest("rds", "2014-08-15", "CreateMigrateTaskForSQLServer")
{
	setMethod(HttpRequest::Method::Post);
}

CreateMigrateTaskForSQLServerRequest::~CreateMigrateTaskForSQLServerRequest()
{}

long CreateMigrateTaskForSQLServerRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateMigrateTaskForSQLServerRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateMigrateTaskForSQLServerRequest::getIsOnlineDB()const
{
	return isOnlineDB_;
}

void CreateMigrateTaskForSQLServerRequest::setIsOnlineDB(const std::string& isOnlineDB)
{
	isOnlineDB_ = isOnlineDB;
	setParameter("IsOnlineDB", isOnlineDB);
}

std::string CreateMigrateTaskForSQLServerRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateMigrateTaskForSQLServerRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateMigrateTaskForSQLServerRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void CreateMigrateTaskForSQLServerRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string CreateMigrateTaskForSQLServerRequest::getTaskType()const
{
	return taskType_;
}

void CreateMigrateTaskForSQLServerRequest::setTaskType(const std::string& taskType)
{
	taskType_ = taskType;
	setParameter("TaskType", taskType);
}

std::string CreateMigrateTaskForSQLServerRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateMigrateTaskForSQLServerRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long CreateMigrateTaskForSQLServerRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateMigrateTaskForSQLServerRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateMigrateTaskForSQLServerRequest::getOSSUrls()const
{
	return oSSUrls_;
}

void CreateMigrateTaskForSQLServerRequest::setOSSUrls(const std::string& oSSUrls)
{
	oSSUrls_ = oSSUrls;
	setParameter("OSSUrls", oSSUrls);
}

std::string CreateMigrateTaskForSQLServerRequest::getDBName()const
{
	return dBName_;
}

void CreateMigrateTaskForSQLServerRequest::setDBName(const std::string& dBName)
{
	dBName_ = dBName;
	setParameter("DBName", dBName);
}

