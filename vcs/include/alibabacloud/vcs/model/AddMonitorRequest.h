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

#ifndef ALIBABACLOUD_VCS_MODEL_ADDMONITORREQUEST_H_
#define ALIBABACLOUD_VCS_MODEL_ADDMONITORREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vcs/VcsExport.h>

namespace AlibabaCloud
{
	namespace Vcs
	{
		namespace Model
		{
			class ALIBABACLOUD_VCS_EXPORT AddMonitorRequest : public RpcServiceRequest
			{

			public:
				AddMonitorRequest();
				~AddMonitorRequest();

				std::string getMonitorType()const;
				void setMonitorType(const std::string& monitorType);
				std::string getCorpId()const;
				void setCorpId(const std::string& corpId);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getNotifierAppSecret()const;
				void setNotifierAppSecret(const std::string& notifierAppSecret);
				std::string getNotifierExtendValues()const;
				void setNotifierExtendValues(const std::string& notifierExtendValues);
				std::string getNotifierUrl()const;
				void setNotifierUrl(const std::string& notifierUrl);
				std::string getNotifierType()const;
				void setNotifierType(const std::string& notifierType);
				int getBatchIndicator()const;
				void setBatchIndicator(int batchIndicator);
				int getNotifierTimeOut()const;
				void setNotifierTimeOut(int notifierTimeOut);
				std::string getAlgorithmVendor()const;
				void setAlgorithmVendor(const std::string& algorithmVendor);

            private:
				std::string monitorType_;
				std::string corpId_;
				std::string description_;
				std::string notifierAppSecret_;
				std::string notifierExtendValues_;
				std::string notifierUrl_;
				std::string notifierType_;
				int batchIndicator_;
				int notifierTimeOut_;
				std::string algorithmVendor_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VCS_MODEL_ADDMONITORREQUEST_H_