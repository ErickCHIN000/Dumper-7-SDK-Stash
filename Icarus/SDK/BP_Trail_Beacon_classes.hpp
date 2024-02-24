#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x7BC - 0x774)
// BlueprintGeneratedClass BP_Trail_Beacon.BP_Trail_Beacon_C
class ABP_Trail_Beacon_C : public ABP_DeployableBase_C
{
public:
	uint8                                        Pad_2562[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x778(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_UIProjectionLocation_C*            BP_UIProjectionLocation;                           // 0x780(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Plane;                                             // 0x788(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UIcarusMapIconComponent*               IcarusMapIcon;                                     // 0x790(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              EmissiveMat;                                       // 0x798(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            BeaconStyleUpdated;                                // 0x7A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class AActor*                                PreviousBeaconActor;                               // 0x7B0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        PreviousBeaconActorUID;                            // 0x7B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Trail_Beacon_C* GetDefaultObj();

	void UpdatePreviousBeaconActor(class AActor* PreviousBeaconActor, class AIcarusActor* K2Node_DynamicCast_AsIcarus_Actor, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetIcarusUID_ReturnValue);
	void FindPreviousBeaconActor(bool* Success, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ABP_Trail_Beacon_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_Trail_Beacon_C* CallFunc_Array_Get_Item, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_GetIcarusUID_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void UpdateBeaconStyle(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_HasWidgetBeenConstructed_ReturnValue);
	void OnRep_SelectedIconIndex();
	void OnRep_BeaconColour();
	void Deployable_Interact(class AActor* Interactor, class AIcarusPlayerCharacterSurvival* K2Node_DynamicCast_AsIcarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class AIcarusPlayerControllerSurvival* K2Node_DynamicCast_AsIcarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess_1);
	void IcarusBeginPlay();
	void ExecuteUbergraph_BP_Trail_Beacon(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_FindPreviousBeaconActor_Success, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void BeaconStyleUpdated__DelegateSignature();
};

}


