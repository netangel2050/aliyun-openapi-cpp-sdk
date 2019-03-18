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

#ifndef ALIBABACLOUD_CAS_MODEL_DESCRIBEEXPECTATIONRESULTREQUEST_H_
#define ALIBABACLOUD_CAS_MODEL_DESCRIBEEXPECTATIONRESULTREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cas/CasExport.h>

namespace AlibabaCloud
{
	namespace Cas
	{
		namespace Model
		{
			class ALIBABACLOUD_CAS_EXPORT DescribeExpectationResultRequest : public RpcServiceRequest
			{

			public:
				DescribeExpectationResultRequest();
				~DescribeExpectationResultRequest();

				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				long getOrderId()const;
				void setOrderId(long orderId);
				std::string getExpectationType()const;
				void setExpectationType(const std::string& expectationType);
				std::string getLang()const;
				void setLang(const std::string& lang);

            private:
				std::string sourceIp_;
				long orderId_;
				std::string expectationType_;
				std::string lang_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CAS_MODEL_DESCRIBEEXPECTATIONRESULTREQUEST_H_