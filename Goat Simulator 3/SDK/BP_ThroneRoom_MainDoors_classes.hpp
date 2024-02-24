#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x280 - 0x230)
// BlueprintGeneratedClass BP_ThroneRoom_MainDoors.BP_ThroneRoom_MainDoors_C
class ABP_ThroneRoom_MainDoors_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DoorOpenSoundLoc;                                  // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGGDynamicAssetHoldingComponent*       GGDynamicAssetHolding;                             // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  DoorR;                                             // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  DoorL;                                             // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         DoorsAreOpen;                                      // 0x260(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_BB2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DoorsPlayRate;                                     // 0x264(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                DoorsAreUnlockedSaveKey;                           // 0x268(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class ABP_ThroneRoom_Scanner_C*              ScannerRef;                                        // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ThroneRoom_MainDoors_C* GetDefaultObj();

	void OnRep_DoorsOpen(const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1);
	void ReceiveBeginPlay();
	void OpenDoors(class AGGGoat* ScannedGoat);
	void PlayDoorOpenSound();
	void ExecuteUbergraph_BP_ThroneRoom_MainDoors(int32 EntryPoint, class UGGProgression* CallFunc_GetPlayerProgression_ReturnValue, bool CallFunc_IsQuestStepCompleted_ReturnValue, class AGGGoat* K2Node_CustomEvent_ScannedGoat, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetIsLoaded_ReturnValue, class USoundCue* CallFunc_GetLoadedAsset_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
};

}


