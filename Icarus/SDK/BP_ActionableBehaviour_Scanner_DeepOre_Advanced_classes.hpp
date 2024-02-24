#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x34 (0x3E0 - 0x3AC)
// BlueprintGeneratedClass BP_ActionableBehaviour_Scanner_DeepOre_Advanced.BP_ActionableBehaviour_Scanner_DeepOre_Advanced_C
class UBP_ActionableBehaviour_Scanner_DeepOre_Advanced_C : public UBP_ActionableBehaviour_Scanner_DeepOre_C
{
public:
	uint8                                        Pad_15D6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FOreDepositRowHandle                  SelectedOreType;                                   // 0x3B8(0x18)(Edit, BlueprintVisible, Net, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FOreDepositRowHandle>          OreTypes;                                          // 0x3D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBP_ActionableBehaviour_Scanner_DeepOre_Advanced_C* GetDefaultObj();

	TArray<class AActor*> ExtraNearbyFilter(TArray<class AActor*>& InNearbyActors, const TArray<class AActor*>& OreFilteredArray, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class AActor* CallFunc_Array_Get_Item, class AResourceDeposit* K2Node_DynamicCast_AsResource_Deposit, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_EqualEqual_FOreDepositRowHandleFOreDepositRowHandle_ReturnValue);
	void CycleOreType(bool Forward, int32 NewIndex, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, class UActionableComponent* CallFunc_GetActionableComponent_ReturnValue, const struct FOreDepositRowHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 K2Node_Select_Default, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void ReceiveBeginPlay();
	void PerformAction(class AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger);
	void ExecuteUbergraph_BP_ActionableBehaviour_Scanner_DeepOre_Advanced(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, class UActionableComponent* CallFunc_GetActionableComponent_ReturnValue, class AActor* K2Node_Event_InvokingActor, enum class EActionableEventType K2Node_Event_OnActionType, enum class EActionableTrigger K2Node_Event_ActionTrigger, const struct FOreDepositRowHandle& CallFunc_Array_Get_Item, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2);
};

}


