#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x9C - 0x80)
// BlueprintGeneratedClass BP_ConditionBehaviour_Creature_Killed_Base.BP_ConditionBehaviour_Creature_Killed_Base_C
class UBP_ConditionBehaviour_Creature_Killed_Base_C : public UBP_ConditionBehaviour_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x80(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        Count_Threshold;                                   // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        Current_Count;                                     // 0x8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bExactMatch;                                       // 0x90(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_79A1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          KillerTag;                                         // 0x94(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ConditionBehaviour_Creature_Killed_Base_C* GetDefaultObj();

	void CheckCreatureTags(const struct FGameplayTagContainer& CurrentCreatureTags, bool* bHasCreatureTraits);
	void GetCreatureTraitInfo(class FText* CreatureTraitInfo);
	void GetDebugText(class FText* Description, class FText CallFunc_GetCreatureTraitInfo_CreatureTraitInfo, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void OnCreatureKilled(const struct FDataTableRowHandle& Creature_Info, const struct FGameplayTagContainer& CreatureTagContainer, const struct FGameplayTagContainer& KillerTagContainer, bool CallFunc_CheckCreatureTags_bHasCreatureTraits, bool CallFunc_IsGameplayTagValid_ReturnValue, bool CallFunc_HasTag_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue);
	void OnConditionRemoved();
	void SetupCondition();
	void InitializeFromPersistence(struct FConditionPersistentData& UpdatedProgressData);
	void ExecuteUbergraph_BP_ConditionBehaviour_Creature_Killed_Base(int32 EntryPoint, const struct FConditionPersistentData& K2Node_Event_UpdatedProgressData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState_1, bool CallFunc_IsValid_ReturnValue, class ABP_PlayerState_C* CallFunc_GetConditionPlayerState_PlayerState_2, bool CallFunc_IsValid_ReturnValue_1);
};

}


