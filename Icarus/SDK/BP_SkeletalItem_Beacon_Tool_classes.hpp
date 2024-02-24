#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x5D0 - 0x5B0)
// BlueprintGeneratedClass BP_SkeletalItem_Beacon_Tool.BP_SkeletalItem_Beacon_Tool_C
class ABP_SkeletalItem_Beacon_Tool_C : public ABP_SkeletalItem_Scanner_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                      ScreenWidget;                                      // 0x5B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_ActionableBehaviour_Deployable_BeaconTool_C* BeaconActionable;                                  // 0x5C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                LinkedBeaconActor;                                 // 0x5C8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SkeletalItem_Beacon_Tool_C* GetDefaultObj();

	void LinkedBeaconDestroyed(class AActor* Actor, enum class EEndPlayReason EndPlayReason, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void TryRestoreLinkedBeaconActor(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AIcarusActor*>& CallFunc_GetAllActorsOfClass_OutActors, class AIcarusActor* CallFunc_Array_Get_Item, int32 CallFunc_GetItemPropertyValue_IntValue, enum class EDataValid CallFunc_GetItemPropertyValue_Paths, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_GetIcarusUID_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void UpdateWidget(class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UW_BeaconTool_C* K2Node_DynamicCast_AsW_Beacon_Tool, bool K2Node_DynamicCast_bSuccess);
	void OnRep_LinkedBeaconActor(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AIcarusActor* K2Node_DynamicCast_AsIcarus_Actor, bool K2Node_DynamicCast_bSuccess, enum class EValid CallFunc_GetTrait_Paths, class UActionableComponent* CallFunc_GetTrait_ReturnValue, int32 CallFunc_GetIcarusUID_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue);
	class UWidgetComponent* GetScreenWidget();
	void ReceiveBeginPlay();
	void IcarusBeginPlay();
	void ExecuteUbergraph_BP_SkeletalItem_Beacon_Tool(int32 EntryPoint, bool K2Node_SwitchEnum_CmpSuccess, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UW_BeaconTool_C* K2Node_DynamicCast_AsW_Beacon_Tool, bool K2Node_DynamicCast_bSuccess);
};

}


