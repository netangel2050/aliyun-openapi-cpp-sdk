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

#ifndef ALIBABACLOUD_RDS_MODEL_DELETEBACKUPFILEREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_DELETEBACKUPFILEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/rds/RdsExport.h>

namespace AlibabaCloud
{
	namespace Rds
	{
		namespace Model
		{
			class ALIBABACLOUD_RDS_EXPORT DeleteBackupFileRequest : public RpcServiceRequest
			{

			public:
				DeleteBackupFileRequest();
				~DeleteBackupFileRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getDBInstanceId()const;
				void setDBInstanceId(const std::string& dBInstanceId);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getBackupId()const;
				void setBackupId(const std::string& backupId);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getBackupTime()const;
				void setBackupTime(const std::string& backupTime);
				std::string getDBName()const;
				void setDBName(const std::string& dBName);

            private:
				long resourceOwnerId_;
				std::string accessKeyId_;
				std::string regionId_;
				std::string dBInstanceId_;
				std::string resourceOwnerAccount_;
				std::string backupId_;
				long ownerId_;
				std::string backupTime_;
				std::string dBName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DELETEBACKUPFILEREQUEST_H_