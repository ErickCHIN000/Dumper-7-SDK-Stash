#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x500 (0x5A0 - 0xA0)
// Class ReplicatedTimers.ReplicatedTimersComponent
class UReplicatedTimersComponent : public UActorComponent
{
public:
	struct FReplicatedTimerDataArray             TimerData;                                         // 0xA0(0x160)(Net, NativeAccessSpecifierPrivate)
	struct FReplicatedTimerCheckpointDataArray   TimerCheckpointData;                               // 0x200(0x160)(Net, NativeAccessSpecifierPrivate)
	uint8                                        Pad_161F[0x240];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UReplicatedTimersComponent* GetDefaultObj();

	bool StartTimer(class FName& TimerName);
	bool SetTimerServerEvaluationRate(class FName& TimerName, float NewServerEvaluationRate);
	bool SetTimerClientEvaluationRate(class FName& TimerName, float NewClientEvaluationRate);
	bool ResetTimer(class FName& TimerName);
	bool RemoveTimer(class FName& TimerName);
	bool RemoveOnTimerRemovedBP(struct FBlueprintDelegateHandle& DelegateHandle);
	bool RemoveOnTimerEvaluatedBP(class FName& TimerName, struct FBlueprintDelegateHandle& DelegateHandle);
	bool RemoveOnTimerCompleteBP(class FName& TimerName, struct FBlueprintDelegateHandle& DelegateHandle);
	bool RemoveOnTimerCheckpointRemovedBP(struct FBlueprintDelegateHandle& DelegateHandle);
	bool RemoveOnTimerCheckpointAddedBP(struct FBlueprintDelegateHandle& DelegateHandle);
	bool RemoveOnTimerAddedBP(struct FBlueprintDelegateHandle& DelegateHandle);
	bool RemoveOnCheckpointReachedBP(class FName& TimerName, class FName& CheckpointName, struct FBlueprintDelegateHandle& DelegateHandle);
	bool RemoveCheckpointFromTimer(class FName& TimerName, class FName& CheckpointName);
	bool PauseTimer(class FName& TimerName);
	void OnTimerRemovedBP(class UObject* ContextObject, FDelegateProperty_& Delegate, struct FBlueprintDelegateHandle* OutDelegateHandle);
	void OnTimerEvaluatedBP(class UObject* ContextObject, class FName& TimerName, FDelegateProperty_& Delegate, struct FBlueprintDelegateHandle* OutDelegateHandle);
	void OnTimerCompleteBP(class UObject* ContextObject, class FName& TimerName, FDelegateProperty_& Delegate, struct FBlueprintDelegateHandle* OutDelegateHandle);
	void OnTimerCheckpointRemovedBP(class UObject* ContextObject, FDelegateProperty_& Delegate, struct FBlueprintDelegateHandle* OutDelegateHandle);
	void OnTimerCheckpointAddedBP(class UObject* ContextObject, FDelegateProperty_& Delegate, struct FBlueprintDelegateHandle* OutDelegateHandle);
	void OnTimerAddedBP(class UObject* ContextObject, FDelegateProperty_& Delegate, struct FBlueprintDelegateHandle* OutDelegateHandle);
	void OnEvaluationTimerComplete(class FName TimerName);
	void OnCheckpointReachedBP(class UObject* ContextObject, class FName& TimerName, class FName& CheckpointName, FDelegateProperty_& Delegate, struct FBlueprintDelegateHandle* OutDelegateHandle);
	void ListTimers(TArray<class FName>* OutTimerNames);
	bool ListCheckpointsForTimer(class FName& TimerName, TArray<class FName>* OutCheckpointNames);
	void HandleTimerDataRemoved(struct FReplicatedTimerData* RemovedTimerData);
	void HandleTimerDataChanged(struct FReplicatedTimerData* ChangedTimerData);
	void HandleTimerDataAdded(struct FReplicatedTimerData* AddedTimerData);
	void HandleTimerCheckpointDataRemoved(struct FReplicatedTimerCheckpointData* RemovedTimerCheckpointData);
	void HandleTimerCheckpointDataChanged(struct FReplicatedTimerCheckpointData* ChangedTimerCheckpointData);
	void HandleTimerCheckpointDataAdded(struct FReplicatedTimerCheckpointData* AddedTimerCheckpointData);
	bool GetRemainingTimeForTimer(class FName& TimerName, float* OutRemainingTime);
	bool AddTimeToTimer(class FName& TimerName, struct FTimespan& TimeToAdd);
	bool AddTimer(class FName& TimerName, struct FTimespan& InitialTimespan);
	bool AddCheckpointToTimer(class FName& TimerName, class FName& CheckpointName, float AtPercentile);
};

}


