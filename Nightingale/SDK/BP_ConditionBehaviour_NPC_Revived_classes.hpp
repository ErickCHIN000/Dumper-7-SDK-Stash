#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x90 - 0x80)
// BlueprintGeneratedClass BP_ConditionBehaviour_NPC_Revived.BP_ConditionBehaviour_NPC_Revived_C
class UBP_ConditionBehaviour_NPC_Revived_C : public UBP_ConditionBehaviour_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x80(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        Current_Count;                                     // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Count_Threshold;                                   // 0x8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ConditionBehaviour_NPC_Revived_C* GetDefaultObj();

	void OnNPCRevived(class ABP_Creature_NPC_Human_C* RevivedNPC, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue);
	void GetDebugText(class FText* Description, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void OnConditionRemoved();
	void SetupCondition();
	void InitializeFromPersistence(struct FConditionPersistentData& UpdatedProgressData);
	void ExecuteUbergraph_BP_ConditionBehaviour_NPC_Revived(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState_1, bool CallFunc_IsValid_ReturnValue, class UMenusComponent* CallFunc_GetMenusComponent_ReturnValue, class UBP_UIMenusComponent_C* K2Node_DynamicCast_AsBP_UIMenus_Component, bool K2Node_DynamicCast_bSuccess, class UMenusComponent* CallFunc_GetMenusComponent_ReturnValue_1, class UBP_UIMenusComponent_C* K2Node_DynamicCast_AsBP_UIMenus_Component_1, bool K2Node_DynamicCast_bSuccess_1, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState_2, const struct FConditionPersistentData& K2Node_Event_UpdatedProgressData, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


