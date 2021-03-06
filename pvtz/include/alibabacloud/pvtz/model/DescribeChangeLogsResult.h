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

#ifndef ALIBABACLOUD_PVTZ_MODEL_DESCRIBECHANGELOGSRESULT_H_
#define ALIBABACLOUD_PVTZ_MODEL_DESCRIBECHANGELOGSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/pvtz/PvtzExport.h>

namespace AlibabaCloud
{
	namespace Pvtz
	{
		namespace Model
		{
			class ALIBABACLOUD_PVTZ_EXPORT DescribeChangeLogsResult : public ServiceResult
			{
			public:
				struct ChangeLog
				{
					std::string operObject;
					std::string entityId;
					std::string entityName;
					std::string operTime;
					std::string content;
					long operTimestamp;
					long id;
					std::string operIp;
					std::string operAction;
				};


				DescribeChangeLogsResult();
				explicit DescribeChangeLogsResult(const std::string &payload);
				~DescribeChangeLogsResult();
				std::vector<ChangeLog> getChangeLogs()const;
				int getPageSize()const;
				int getPageNumber()const;
				int getTotalPages()const;
				int getTotalItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ChangeLog> changeLogs_;
				int pageSize_;
				int pageNumber_;
				int totalPages_;
				int totalItems_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_PVTZ_MODEL_DESCRIBECHANGELOGSRESULT_H_