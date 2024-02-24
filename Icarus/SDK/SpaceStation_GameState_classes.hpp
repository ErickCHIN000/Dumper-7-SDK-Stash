#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1F8 (0x4A8 - 0x2B0)
// BlueprintGeneratedClass SpaceStation_GameState.SpaceStation_GameState_C
class ASpaceStation_GameState_C : public AIcarusGameStateSpace
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            ShowLoadingScreen;                                 // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            SharePercentagesChanged;                           // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            ReadyStateChanged;                                 // 0x2E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FFProspectServerInfo                  Contract;                                          // 0x2F0(0x19B)(Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify, HasGetValueTypeHash)
	uint8                                        Pad_4E93[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            ContractUpdated;                                   // 0x490(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ABP_DialogueManager_C*                 DialogueManager;                                   // 0x4A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ASpaceStation_GameState_C* GetDefaultObj();

	void OnRep_Contract();
	void SetContract(const struct FFProspectServerInfo& New_Contract);
	void MULTICAST_ShowLoadingScreen();
	void OnServer_UnreadyAllPlayers();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_SpaceStation_GameState(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, class ABP_DialogueManager_C* CallFunc_FinishSpawningActor_ReturnValue, TArray<class AIcarusPlayerController*>& CallFunc_GetAllActorsOfClass_OutActors, int32 Temp_int_Loop_Counter_Variable, class AIcarusPlayerController* CallFunc_Array_Get_Item, class UBackendProxyComponent* CallFunc_GetBackendProxyComponent_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void ContractUpdated__DelegateSignature();
	void ReadyStateChanged__DelegateSignature();
	void SharePercentagesChanged__DelegateSignature();
	void ShowLoadingScreen__DelegateSignature(bool Show);
};

}


