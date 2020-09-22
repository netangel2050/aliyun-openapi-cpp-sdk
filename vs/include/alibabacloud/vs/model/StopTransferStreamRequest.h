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

#ifndef ALIBABACLOUD_VS_MODEL_STOPTRANSFERSTREAMREQUEST_H_
#define ALIBABACLOUD_VS_MODEL_STOPTRANSFERSTREAMREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vs/VsExport.h>

namespace AlibabaCloud
{
	namespace Vs
	{
		namespace Model
		{
			class ALIBABACLOUD_VS_EXPORT StopTransferStreamRequest : public RpcServiceRequest
			{

			public:
				StopTransferStreamRequest();
				~StopTransferStreamRequest();

				std::string getId()const;
				void setId(const std::string& id);
				std::string getShowLog()const;
				void setShowLog(const std::string& showLog);
				std::string getTranscode()const;
				void setTranscode(const std::string& transcode);
				long getOwnerId()const;
				void setOwnerId(long ownerId);

            private:
				std::string id_;
				std::string showLog_;
				std::string transcode_;
				long ownerId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VS_MODEL_STOPTRANSFERSTREAMREQUEST_H_