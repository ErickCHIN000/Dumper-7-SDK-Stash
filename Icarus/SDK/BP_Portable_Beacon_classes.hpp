#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x74 (0x7E8 - 0x774)
// BlueprintGeneratedClass BP_Portable_Beacon.BP_Portable_Beacon_C
class ABP_Portable_Beacon_C : public ABP_DeployableBase_C
{
public:
	uint8                                        Pad_489B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x778(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                      Camera;                                            // 0x780(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Plane;                                             // 0x788(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UIcarusMapIconComponent*               IcarusMapIcon;                                     // 0x790(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              EmissiveMat;                                       // 0x798(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          BeaconColour;                                      // 0x7A0(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	int32                                        SelectedIconIndex;                                 // 0x7B0(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_48C3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLinearColor>                  SupportedColors;                                   // 0x7B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<TSoftObjectPtr<class UTexture2D>>     SupportedIcons;                                    // 0x7C8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            BeaconStyleUpdated;                                // 0x7D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class ABP_Portable_Beacon_C* GetDefaultObj();

	void UpdateBeaconStyle(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_HasWidgetBeenConstructed_ReturnValue);
	void OnRep_SelectedIconIndex();
	void OnRep_BeaconColour();
	void Deployable_Interact(class AActor* Interactor, class AIcarusPlayerCharacterSurvival* K2Node_DynamicCast_AsIcarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class AIcarusPlayerControllerSurvival* K2Node_DynamicCast_AsIcarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess_1);
	void IcarusBeginPlay();
	void ExecuteUbergraph_BP_Portable_Beacon(int32 EntryPoint, bool CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void BeaconStyleUpdated__DelegateSignature();
};

}


