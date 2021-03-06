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

#ifndef ALIBABACLOUD_GREEN_MODEL_UPDATEBIZTYPETEXTLIBREQUEST_H_
#define ALIBABACLOUD_GREEN_MODEL_UPDATEBIZTYPETEXTLIBREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/green/GreenExport.h>

namespace AlibabaCloud
{
	namespace Green
	{
		namespace Model
		{
			class ALIBABACLOUD_GREEN_EXPORT UpdateBizTypeTextLibRequest : public RpcServiceRequest
			{

			public:
				UpdateBizTypeTextLibRequest();
				~UpdateBizTypeTextLibRequest();

				std::string getScene()const;
				void setScene(const std::string& scene);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getWhite()const;
				void setWhite(const std::string& white);
				std::string getReview()const;
				void setReview(const std::string& review);
				std::string getIgnore()const;
				void setIgnore(const std::string& ignore);
				std::string getBizTypeName()const;
				void setBizTypeName(const std::string& bizTypeName);
				std::string getBlack()const;
				void setBlack(const std::string& black);
				std::string getResourceType()const;
				void setResourceType(const std::string& resourceType);

            private:
				std::string scene_;
				std::string sourceIp_;
				std::string white_;
				std::string review_;
				std::string ignore_;
				std::string bizTypeName_;
				std::string black_;
				std::string resourceType_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_GREEN_MODEL_UPDATEBIZTYPETEXTLIBREQUEST_H_