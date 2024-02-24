#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_MpInteractInterface.BP_MpInteractInterface_C
class IBP_MpInteractInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBP_MpInteractInterface_C* GetDefaultObj();

	void GetInteractOptions(bool* EnableContext_, TArray<class FText>* Options, TArray<class FText>* Stats);
	void OnRequestServerInteract(class AActor* Actor, int32 OptionIndex, bool* Result);
	void SetInteractOption(int32 OptionIndex);
	void SetPickupCount(int32 NewCount, bool* Result);
	void OnExecuteInteractEnded();
	void JigSetCanInteract(bool CanInteract, bool EnablePhysics, bool* Result);
	void JigCanInteract(bool* Result);
	void GetItemInfo(struct FFItemInfo* Info, struct FS_RandomStatsConfig* RandomStatsConfig);
	void OnServerExecuteInteract(int32 OptionIndex, class AActor* ByActor);
	void OnExecuteInteract_Dialogue(class AActor* InteractingActor);
	void OnStopExecuteInteract(class AActor* InteractingActor);
	void OnExecuteInteract(class AActor* InteractingActor, int32 OptionIndex);
	void GetJigMultiplayerComponent(class UBP_JigMultiplayer_C** JigComp);
	void OnEndInteract();
	void OnBeginInteract(class AActor* InteractingActor);
};

}


