#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x31 (0x161 - 0x130)
// BlueprintGeneratedClass KillRandomMob.KillRandomMob_C
class UKillRandomMob_C : public USHQuestRandomTask
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UClass*>                        VictimsClasses;                                    // 0x138(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                        MinimalAmount;                                     // 0x148(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaximumAmount;                                     // 0x14C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Count;                                             // 0x150(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_118[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                VictimClass;                                       // 0x158(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bAllowChildrens;                                   // 0x160(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UKillRandomMob_C* GetDefaultObj();

	int32 GetProgressMax();
	void Initialize(bool Found, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable_1, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class USHQuestTask* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class UKillRandomMob_C* K2Node_DynamicCast_AsKill_Random_Mob, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void OnGivePlayer(class ASHPlayerCharacter* Player);
	void OnCharacterKilled_Event_0(class ASHCharacter* Killer, class ASHCharacter* Victim);
	void OnRemoveFromPlayer(class ASHPlayerCharacter* Player);
	void ExecuteUbergraph_KillRandomMob(int32 EntryPoint, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class UObject* CallFunc_GetDefaultObject_ReturnValue, class ABaseAiCharacter_C* K2Node_DynamicCast_AsBase_Ai_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_ClassClass_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class ASHPlayerCharacter* K2Node_Event_Player_1, class ASHCharacter* K2Node_CustomEvent_Killer, class ASHCharacter* K2Node_CustomEvent_Victim, class UClass* CallFunc_GetObjectClass_ReturnValue, class ASHPlayerCharacter* K2Node_Event_Player, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& CallFunc_GetClassDisplayName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_TextToLower_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue);
};

}


