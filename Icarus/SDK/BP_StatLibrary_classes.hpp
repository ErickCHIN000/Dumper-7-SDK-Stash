#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_StatLibrary.BP_StatLibrary_C
class UBP_StatLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBP_StatLibrary_C* GetDefaultObj();

	void DualActorStatCheck(class AActor* Actor1, const struct FStatsEnum& Stat1, class AActor* Actor2, const struct FStatsEnum& Stat2, class UObject* __WorldContext, bool* BothActors_have_Stats, bool CallFunc_BoolStatCheck_HasStat, bool CallFunc_BoolStatCheck_HasStat_1, bool CallFunc_BooleanAND_ReturnValue);
	void HasAllBoolStatCheck(class AActor* Actor, TArray<struct FItemsStaticEnum>& Stat, class UObject* __WorldContext, bool* HasAllStats, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BoolStatCheck_HasStat, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void HasAnyBoolStatCheck(class AActor* Actor, TArray<struct FStatsEnum>& Stat, class UObject* __WorldContext, bool* HasSomeStats, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FStatsEnum& CallFunc_Array_Get_Item, bool CallFunc_BoolStatCheck_HasStat, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void BoolStatCheck(class AActor* Actor, const struct FStatsEnum& Stat, class UObject* __WorldContext, bool* HasStat, bool CallFunc_EqualEqual_EnumEnum_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class AIcarusCharacter* K2Node_DynamicCast_AsIcarus_Character, bool K2Node_DynamicCast_bSuccess, class AIcarusActor* K2Node_DynamicCast_AsIcarus_Actor, bool K2Node_DynamicCast_bSuccess_1, class UIcarusStatContainer* Temp_wildcard_Variable, int32 CallFunc_GetStat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
};

}


