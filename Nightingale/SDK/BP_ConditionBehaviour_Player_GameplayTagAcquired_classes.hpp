#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x99 - 0x80)
// BlueprintGeneratedClass BP_ConditionBehaviour_Player_GameplayTagAcquired.BP_ConditionBehaviour_Player_GameplayTagAcquired_C
class UBP_ConditionBehaviour_Player_GameplayTagAcquired_C : public UBP_ConditionBehaviour_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x80(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                          GameplayTag;                                       // 0x88(0x8)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        Count_Threshold;                                   // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        Current_Count;                                     // 0x94(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bCountTagRemovals;                                 // 0x98(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ConditionBehaviour_Player_GameplayTagAcquired_C* GetDefaultObj();

	void GetDebugText(class FText* Description, const class FString& CallFunc_SelectString_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void OnPawnGameplayTagCountChanged(struct FGameplayTag& Tag, int32 Count, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_MatchesTag_ReturnValue);
	void OnConditionRemoved();
	void SetupCondition();
	void InitializeFromPersistence(struct FConditionPersistentData& UpdatedProgressData);
	void CompleteIfSatisfiedOnSetup();
	void ExecuteUbergraph_BP_ConditionBehaviour_Player_GameplayTagAcquired(int32 EntryPoint, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState_1, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState_3, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_GetGameplayTagCount_ReturnValue, const struct FConditionPersistentData& K2Node_Event_UpdatedProgressData);
};

}


