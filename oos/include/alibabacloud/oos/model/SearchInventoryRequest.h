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

#ifndef ALIBABACLOUD_OOS_MODEL_SEARCHINVENTORYREQUEST_H_
#define ALIBABACLOUD_OOS_MODEL_SEARCHINVENTORYREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/oos/OosExport.h>

namespace AlibabaCloud
{
	namespace Oos
	{
		namespace Model
		{
			class ALIBABACLOUD_OOS_EXPORT SearchInventoryRequest : public RpcServiceRequest
			{
			public:
				struct Filter
				{
					std::string name;
					std::vector<std::string> value;
					std::string _operator;
				};

			public:
				SearchInventoryRequest();
				~SearchInventoryRequest();

				std::vector<std::string> getAggregator()const;
				void setAggregator(const std::vector<std::string>& aggregator);
				std::vector<Filter> getFilter()const;
				void setFilter(const std::vector<Filter>& filter);
				std::string getRegionId()const;
				void setRegionId(const std::string& regionId);
				std::string getNextToken()const;
				void setNextToken(const std::string& nextToken);
				int getMaxResults()const;
				void setMaxResults(int maxResults);

            private:
				std::vector<std::string> aggregator_;
				std::vector<Filter> filter_;
				std::string regionId_;
				std::string nextToken_;
				int maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_OOS_MODEL_SEARCHINVENTORYREQUEST_H_