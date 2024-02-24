#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_NPC.BPFL_NPC_C
class UBPFL_NPC_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_NPC_C* GetDefaultObj();

	void Fix_Persistent_Name_Handle(class ABP_Creature_NPC_C* InNPC, class UObject* __WorldContext, class FName LNewSTPath_Female, class FName LOldSTPath_Female, class FName LNewSTPath_Male, class FName LOldSTPath_Male, bool CallFunc_IsValid_ReturnValue, const struct FStringTableEntryHandle& CallFunc_GetNPCNameHandle_OutNameHandle, const struct FStringTableEntryHandle& K2Node_MakeStruct_StringTableEntryHandle, const struct FStringTableEntryHandle& CallFunc_GetNPCNameHandle_OutNameHandle_1, bool CallFunc_EqualEqual_NameName_ReturnValue, const struct FStringTableEntryHandle& K2Node_MakeStruct_StringTableEntryHandle_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1);
	void Get_Rand_NPC_Name(enum class EBodyType Gender, class UObject* __WorldContext, struct FStringTableEntryHandle* NameHandle, const struct FStringTableEntryHandle& LNameHandle, class FText DefaultNameFemale, class FText DefaultNameMale, class FName StringTableIDFemale, class FName StringTableIDMale, bool K2Node_SwitchEnum_CmpSuccess, TArray<class FString>& CallFunc_GetKeysFromStringTable_ReturnValue, TArray<class FString>& CallFunc_GetKeysFromStringTable_ReturnValue_1, const class FString& CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, const class FString& CallFunc_Array_Random_OutItem_1, int32 CallFunc_Array_Random_OutIndex_1, const struct FStringTableEntryHandle& K2Node_MakeStruct_StringTableEntryHandle, const struct FStringTableEntryHandle& K2Node_MakeStruct_StringTableEntryHandle_1);
	void BreakDesireHandle(const struct FDataTableRowHandle& Desire, class UObject* __WorldContext, enum class ENWXNPCDesireType* DesireType, struct FGameplayTag* DesireTypeTag, struct FDataTableRowHandle* TypedRowHandle, class FText* IncompleteTitle, class FText* IncompleteDescription, class FText* CompletedTitle, class FText* CompletedDescription, int32* IncompleteValue, int32* CompletedValue, double* Duration, double* InternalTimeStamp, double* InternalTimeRemaining, const struct FNWXNPCDesireData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, double K2Node_FunctionResult_Duration_ImplicitCast, double K2Node_FunctionResult_InternalTimeStamp_ImplicitCast, double K2Node_FunctionResult_InternalTimeRemaining_ImplicitCast);
	void GetVictorianName(bool Female, class UObject* __WorldContext, class FText* Name, int32 LCurrentCount, int32 LRandomInt, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_RandomIntegerInRange_ReturnValue, class FName CallFunc_Array_Get_Item, const struct FS_NPCVictorianName& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, bool CallFunc_Less_IntInt_ReturnValue_2, class FName CallFunc_Array_Get_Item_1, const struct FS_NPCVictorianName& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue_1);
	void IsControllerNPC(class UObject* Controller, class UObject* __WorldContext, bool* IsNPC, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue);
	void GetFriendshipCostMultiplierFromFriendshipLevel(enum class Enum_FriendshipLevel FriendshipLevel, class UObject* __WorldContext, double* CostMultiplier, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FS_NPCFriendshipCostMultiplier& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, double K2Node_FunctionResult_CostMultiplier_ImplicitCast);
	void GetMinAndMaxFriendshipScores(class UObject* __WorldContext, int32* MinScore, int32* MaxScore, enum class Enum_FriendshipLevel MaxFriendship, enum class Enum_FriendshipLevel MinFriendship, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, const struct FS_NPCFriendshipLevel& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FS_NPCFriendshipLevel& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1);
	void GetFriendshipLevelFromScore(int32 FriendshipScore, class UObject* __WorldContext, enum class Enum_FriendshipLevel* FriendshipLevel, int32* MinScore, int32* MaxScore, int32 CurrentScore, enum class Enum_FriendshipLevel MaxFriendshipLevel, enum class Enum_FriendshipLevel CurrentFriendshipLevel, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, uint8 CallFunc_Add_ByteByte_ReturnValue, const struct FS_NPCFriendshipLevel& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_InRange_IntInt_ReturnValue, bool CallFunc_Less_ByteByte_ReturnValue);
	void GetScoreFromFriendshipEvent(enum class Enum_NPCFriendshipEvent FriendshipEvent, class UObject* __WorldContext, int32* Score, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FS_NPCFriendShipEvent& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void GetActionStationTypeFromPingVerb(enum class E_PingVerbs PingVerb, enum class Enum_ActionStationType DefaultActionStationType, class UObject* __WorldContext, enum class Enum_ActionStationType* ActionStationType, bool K2Node_SwitchEnum_CmpSuccess);
};

}


