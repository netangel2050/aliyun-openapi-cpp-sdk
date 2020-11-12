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

#ifndef ALIBABACLOUD_ACTIONTRAIL_ACTIONTRAILCLIENT_H_
#define ALIBABACLOUD_ACTIONTRAIL_ACTIONTRAILCLIENT_H_

#include <future>
#include <alibabacloud/core/AsyncCallerContext.h>
#include <alibabacloud/core/EndpointProvider.h>
#include <alibabacloud/core/RpcServiceClient.h>
#include "ActiontrailExport.h"
#include "model/CreateTrailRequest.h"
#include "model/CreateTrailResult.h"
#include "model/DeleteTrailRequest.h"
#include "model/DeleteTrailResult.h"
#include "model/DescribeRegionsRequest.h"
#include "model/DescribeRegionsResult.h"
#include "model/DescribeTrailsRequest.h"
#include "model/DescribeTrailsResult.h"
#include "model/GetTrailStatusRequest.h"
#include "model/GetTrailStatusResult.h"
#include "model/LookupEventsRequest.h"
#include "model/LookupEventsResult.h"
#include "model/StartLoggingRequest.h"
#include "model/StartLoggingResult.h"
#include "model/StopLoggingRequest.h"
#include "model/StopLoggingResult.h"
#include "model/UpdateTrailRequest.h"
#include "model/UpdateTrailResult.h"


namespace AlibabaCloud
{
	namespace Actiontrail
	{
		class ALIBABACLOUD_ACTIONTRAIL_EXPORT ActiontrailClient : public RpcServiceClient
		{
		public:
			typedef Outcome<Error, Model::CreateTrailResult> CreateTrailOutcome;
			typedef std::future<CreateTrailOutcome> CreateTrailOutcomeCallable;
			typedef std::function<void(const ActiontrailClient*, const Model::CreateTrailRequest&, const CreateTrailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> CreateTrailAsyncHandler;
			typedef Outcome<Error, Model::DeleteTrailResult> DeleteTrailOutcome;
			typedef std::future<DeleteTrailOutcome> DeleteTrailOutcomeCallable;
			typedef std::function<void(const ActiontrailClient*, const Model::DeleteTrailRequest&, const DeleteTrailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTrailAsyncHandler;
			typedef Outcome<Error, Model::DescribeRegionsResult> DescribeRegionsOutcome;
			typedef std::future<DescribeRegionsOutcome> DescribeRegionsOutcomeCallable;
			typedef std::function<void(const ActiontrailClient*, const Model::DescribeRegionsRequest&, const DescribeRegionsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRegionsAsyncHandler;
			typedef Outcome<Error, Model::DescribeTrailsResult> DescribeTrailsOutcome;
			typedef std::future<DescribeTrailsOutcome> DescribeTrailsOutcomeCallable;
			typedef std::function<void(const ActiontrailClient*, const Model::DescribeTrailsRequest&, const DescribeTrailsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrailsAsyncHandler;
			typedef Outcome<Error, Model::GetTrailStatusResult> GetTrailStatusOutcome;
			typedef std::future<GetTrailStatusOutcome> GetTrailStatusOutcomeCallable;
			typedef std::function<void(const ActiontrailClient*, const Model::GetTrailStatusRequest&, const GetTrailStatusOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> GetTrailStatusAsyncHandler;
			typedef Outcome<Error, Model::LookupEventsResult> LookupEventsOutcome;
			typedef std::future<LookupEventsOutcome> LookupEventsOutcomeCallable;
			typedef std::function<void(const ActiontrailClient*, const Model::LookupEventsRequest&, const LookupEventsOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> LookupEventsAsyncHandler;
			typedef Outcome<Error, Model::StartLoggingResult> StartLoggingOutcome;
			typedef std::future<StartLoggingOutcome> StartLoggingOutcomeCallable;
			typedef std::function<void(const ActiontrailClient*, const Model::StartLoggingRequest&, const StartLoggingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StartLoggingAsyncHandler;
			typedef Outcome<Error, Model::StopLoggingResult> StopLoggingOutcome;
			typedef std::future<StopLoggingOutcome> StopLoggingOutcomeCallable;
			typedef std::function<void(const ActiontrailClient*, const Model::StopLoggingRequest&, const StopLoggingOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> StopLoggingAsyncHandler;
			typedef Outcome<Error, Model::UpdateTrailResult> UpdateTrailOutcome;
			typedef std::future<UpdateTrailOutcome> UpdateTrailOutcomeCallable;
			typedef std::function<void(const ActiontrailClient*, const Model::UpdateTrailRequest&, const UpdateTrailOutcome&, const std::shared_ptr<const AsyncCallerContext>&)> UpdateTrailAsyncHandler;

			ActiontrailClient(const Credentials &credentials, const ClientConfiguration &configuration);
			ActiontrailClient(const std::shared_ptr<CredentialsProvider> &credentialsProvider, const ClientConfiguration &configuration);
			ActiontrailClient(const std::string &accessKeyId, const std::string &accessKeySecret, const ClientConfiguration &configuration);
			~ActiontrailClient();
			CreateTrailOutcome createTrail(const Model::CreateTrailRequest &request)const;
			void createTrailAsync(const Model::CreateTrailRequest& request, const CreateTrailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			CreateTrailOutcomeCallable createTrailCallable(const Model::CreateTrailRequest& request) const;
			DeleteTrailOutcome deleteTrail(const Model::DeleteTrailRequest &request)const;
			void deleteTrailAsync(const Model::DeleteTrailRequest& request, const DeleteTrailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DeleteTrailOutcomeCallable deleteTrailCallable(const Model::DeleteTrailRequest& request) const;
			DescribeRegionsOutcome describeRegions(const Model::DescribeRegionsRequest &request)const;
			void describeRegionsAsync(const Model::DescribeRegionsRequest& request, const DescribeRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeRegionsOutcomeCallable describeRegionsCallable(const Model::DescribeRegionsRequest& request) const;
			DescribeTrailsOutcome describeTrails(const Model::DescribeTrailsRequest &request)const;
			void describeTrailsAsync(const Model::DescribeTrailsRequest& request, const DescribeTrailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			DescribeTrailsOutcomeCallable describeTrailsCallable(const Model::DescribeTrailsRequest& request) const;
			GetTrailStatusOutcome getTrailStatus(const Model::GetTrailStatusRequest &request)const;
			void getTrailStatusAsync(const Model::GetTrailStatusRequest& request, const GetTrailStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			GetTrailStatusOutcomeCallable getTrailStatusCallable(const Model::GetTrailStatusRequest& request) const;
			LookupEventsOutcome lookupEvents(const Model::LookupEventsRequest &request)const;
			void lookupEventsAsync(const Model::LookupEventsRequest& request, const LookupEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			LookupEventsOutcomeCallable lookupEventsCallable(const Model::LookupEventsRequest& request) const;
			StartLoggingOutcome startLogging(const Model::StartLoggingRequest &request)const;
			void startLoggingAsync(const Model::StartLoggingRequest& request, const StartLoggingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StartLoggingOutcomeCallable startLoggingCallable(const Model::StartLoggingRequest& request) const;
			StopLoggingOutcome stopLogging(const Model::StopLoggingRequest &request)const;
			void stopLoggingAsync(const Model::StopLoggingRequest& request, const StopLoggingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			StopLoggingOutcomeCallable stopLoggingCallable(const Model::StopLoggingRequest& request) const;
			UpdateTrailOutcome updateTrail(const Model::UpdateTrailRequest &request)const;
			void updateTrailAsync(const Model::UpdateTrailRequest& request, const UpdateTrailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr) const;
			UpdateTrailOutcomeCallable updateTrailCallable(const Model::UpdateTrailRequest& request) const;
	
		private:
			std::shared_ptr<EndpointProvider> endpointProvider_;
		};
	}
}

#endif // !ALIBABACLOUD_ACTIONTRAIL_ACTIONTRAILCLIENT_H_
