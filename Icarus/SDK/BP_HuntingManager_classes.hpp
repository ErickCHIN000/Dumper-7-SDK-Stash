#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0xF0 - 0xB0)
// BlueprintGeneratedClass BP_HuntingManager.BP_HuntingManager_C
class UBP_HuntingManager_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_            FocusUpdated;                                      // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class AActor*                                HuntingFocus;                                      // 0xC8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	class UIcarusStatContainer*                  OwnerStatContainer;                                // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanTrackFootprints;                                // 0xD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CanTrackFootprintTooltips;                         // 0xD9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C2[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            PerceptionStateUpdated;                            // 0xE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UBP_HuntingManager_C* GetDefaultObj();

	void UpdatePerceptionState(bool DidChange, bool NewTooltips, bool NewFootprints, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue_1, int32 CallFunc_GetStat_ReturnValue, int32 CallFunc_GetStat_ReturnValue_1, bool CallFunc_Conv_IntToBool_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue_1);
	void OnRep_HuntingFocus();
	void SetHuntingFocus(class AActor* NewFocus, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void SERVER_RequestSplineLocations(class AActor* Clue);
	void CLIENT_SendSplineLocations(class AActor* Clue, TArray<struct FVector>& Locations);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_HuntingManager(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* K2Node_CustomEvent_Clue_1, class AActor* K2Node_CustomEvent_Clue, TArray<struct FVector>& K2Node_CustomEvent_Locations, TScriptInterface<class IIHuntingInterface_C> K2Node_DynamicCast_AsIHunting_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IIHuntingInterface_C> K2Node_DynamicCast_AsIHunting_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GatherSplineLocations_Return, TArray<struct FVector>& CallFunc_GatherSplineLocations_Locations, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusPlayerController* K2Node_DynamicCast_AsIcarus_Player_Controller, bool K2Node_DynamicCast_bSuccess_2, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void PerceptionStateUpdated__DelegateSignature();
	void FocusUpdated__DelegateSignature(class AActor* Actor);
};

}


