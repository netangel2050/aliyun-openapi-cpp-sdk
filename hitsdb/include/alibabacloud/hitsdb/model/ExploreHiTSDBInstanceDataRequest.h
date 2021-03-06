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

#ifndef ALIBABACLOUD_HITSDB_MODEL_EXPLOREHITSDBINSTANCEDATAREQUEST_H_
#define ALIBABACLOUD_HITSDB_MODEL_EXPLOREHITSDBINSTANCEDATAREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/hitsdb/HitsdbExport.h>

namespace AlibabaCloud
{
	namespace Hitsdb
	{
		namespace Model
		{
			class ALIBABACLOUD_HITSDB_EXPORT ExploreHiTSDBInstanceDataRequest : public RpcServiceRequest
			{

			public:
				ExploreHiTSDBInstanceDataRequest();
				~ExploreHiTSDBInstanceDataRequest();

				std::string getReverseVpcIp()const;
				void setReverseVpcIp(const std::string& reverseVpcIp);
				long getResourceOwnerId()const;
				void setResourceOwnerId(long resourceOwnerId);
				int getReverseVpcPort()const;
				void setReverseVpcPort(int reverseVpcPort);
				std::string getAccessKeyId()const;
				void setAccessKeyId(const std::string& accessKeyId);
				std::string getPassWord()const;
				void setPassWord(const std::string& passWord);
				std::string getSecurityToken()const;
				void setSecurityToken(const std::string& securityToken);
				long getEnd()const;
				void setEnd(long end);
				std::string getResourceOwnerAccount()const;
				void setResourceOwnerAccount(const std::string& resourceOwnerAccount);
				std::string getOwnerAccount()const;
				void setOwnerAccount(const std::string& ownerAccount);
				std::string getAggregator()const;
				void setAggregator(const std::string& aggregator);
				long getStart()const;
				void setStart(long start);
				long getOwnerId()const;
				void setOwnerId(long ownerId);
				std::string getTagFilter()const;
				void setTagFilter(const std::string& tagFilter);
				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getMetric()const;
				void setMetric(const std::string& metric);
				std::string getDownSampleAggregator()const;
				void setDownSampleAggregator(const std::string& downSampleAggregator);
				std::string getDownSampleTime()const;
				void setDownSampleTime(const std::string& downSampleTime);
				std::string getUserName()const;
				void setUserName(const std::string& userName);

            private:
				std::string reverseVpcIp_;
				long resourceOwnerId_;
				int reverseVpcPort_;
				std::string accessKeyId_;
				std::string passWord_;
				std::string securityToken_;
				long end_;
				std::string resourceOwnerAccount_;
				std::string ownerAccount_;
				std::string aggregator_;
				long start_;
				long ownerId_;
				std::string tagFilter_;
				std::string instanceId_;
				std::string metric_;
				std::string downSampleAggregator_;
				std::string downSampleTime_;
				std::string userName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_HITSDB_MODEL_EXPLOREHITSDBINSTANCEDATAREQUEST_H_