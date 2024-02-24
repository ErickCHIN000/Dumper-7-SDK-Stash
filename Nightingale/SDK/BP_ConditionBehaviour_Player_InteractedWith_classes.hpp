#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0xB8 - 0x80)
// BlueprintGeneratedClass BP_ConditionBehaviour_Player_InteractedWith.BP_ConditionBehaviour_Player_InteractedWith_C
class UBP_ConditionBehaviour_Player_InteractedWith_C : public UBP_ConditionBehaviour_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x80(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        Current_Count;                                     // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Count_Threshold;                                   // 0x8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TSoftClassPtr<class APawn>                   DesiredClassForInteraction;                        // 0x90(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ConditionBehaviour_Player_InteractedWith_C* GetDefaultObj();

	void OnPlayerInteractedWith(class APawn* InteractingPawn, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsObjectOfClass_ReturnValue);
	void GetDebugText(class FText* Description, const class FString& CallFunc_Conv_SoftClassReferenceToString_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void OnConditionRemoved();
	void SetupCondition();
	void InitializeFromPersistence(struct FConditionPersistentData& UpdatedProgressData);
	void ExecuteUbergraph_BP_ConditionBehaviour_Player_InteractedWith(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState, bool CallFunc_IsValid_ReturnValue, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState_1, const struct FConditionPersistentData& K2Node_Event_UpdatedProgressData, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


