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

#ifndef ALIBABACLOUD_RDS_MODEL_DESCRIBESTATICVERIFICATIONLISTREQUEST_H_
#define ALIBABACLOUD_RDS_MODEL_DESCRIBESTATICVERIFICATIONLISTREQUEST_H_

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
			class ALIBABACLOUD_RDS_EXPORT DescribeStaticVerificationListRequest : public RpcServiceRequest
			{

			public:
				DescribeStaticVerificationListRequest();
				~DescribeStaticVerificationListRequest();

				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getReplicaId()const;
				void setReplicaId(const std::string& replicaId);
				std::string getDestinationInstanceId()const;
				void setDestinationInstanceId(const std::string& destinationInstanceId);
				std::string getSourceInstanceId()const;
				void setSourceInstanceId(const std::string& sourceInstanceId);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);

            private:
				long resourceOwnerId_;
				std::string securityToken_;
				std::string resourceOwnerAccount_;
				std::string regionId_;
				std::string ownerAccount_;
				std::string replicaId_;
				std::string destinationInstanceId_;
				std::string sourceInstanceId_;
				long ownerId_;
				std::string accessKeyId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RDS_MODEL_DESCRIBESTATICVERIFICATIONLISTREQUEST_H_