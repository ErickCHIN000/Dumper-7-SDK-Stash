#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_sw_RealmInfoTab_NPC_Creatures.WBP_sw_RealmInfoTab_NPC_Creatures_C
// (None)

class UClass* UWBP_sw_RealmInfoTab_NPC_Creatures_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_sw_RealmInfoTab_NPC_Creatures_C");

	return Clss;
}


// WBP_sw_RealmInfoTab_NPC_Creatures_C WBP_sw_RealmInfoTab_NPC_Creatures.Default__WBP_sw_RealmInfoTab_NPC_Creatures_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_sw_RealmInfoTab_NPC_Creatures_C* UWBP_sw_RealmInfoTab_NPC_Creatures_C::GetDefaultObj()
{
	static class UWBP_sw_RealmInfoTab_NPC_Creatures_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_sw_RealmInfoTab_NPC_Creatures_C*>(UWBP_sw_RealmInfoTab_NPC_Creatures_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_sw_RealmInfoTab_NPC_Creatures.WBP_sw_RealmInfoTab_NPC_Creatures_C.UpdateCreatureList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Current_Creature                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<class FText>                Creature_List                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Successful                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_RealmInfoTab_NPC_Creatures_C::UpdateCreatureList(class FText Current_Creature, TArray<class FText>& Creature_List, bool* Successful, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmInfoTab_NPC_Creatures_C", "UpdateCreatureList");

	Params::UWBP_sw_RealmInfoTab_NPC_Creatures_C_UpdateCreatureList_Params Parms{};

	Parms.Current_Creature = Current_Creature;
	Parms.Creature_List = Creature_List;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Successful != nullptr)
		*Successful = Parms.Successful;

}


// Function WBP_sw_RealmInfoTab_NPC_Creatures.WBP_sw_RealmInfoTab_NPC_Creatures_C.UpdateCreatureHolder
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDataTableRowHandle> Creature_Row                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UDataTable*                  LST_CreatureInfo                                                 (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<TSoftClassPtr<class ABP_CreatureBase_C>>Creature_Classes                                                 (Edit, BlueprintVisible)
// TArray<class FText>                CreatureNamesFound                                               (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftClassPtr<class ABP_CreatureBase_C>CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_SoftClassReferenceToString_ReturnValue             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CreatureInfo             CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_SoftClassReferenceToString_ReturnValue_1           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_UpdateCreatureList_Successful                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_Array_Get_Item_2                                        (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_BPSpawnerData            CallFunc_GetDataTableRowFromName_OutRow_1                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_BreakCreatureUIInfo_CreatureName                        (None)
// TSoftObjectPtr<class UTexture2D>   CallFunc_BreakCreatureUIInfo_CreatureIcon                        (HasGetValueTypeHash)
// int32                              CallFunc_BreakCreatureUIInfo_FerocityMin                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakCreatureUIInfo_FerocityMax                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EBiomeID>        CallFunc_BreakCreatureUIInfo_Biomes                              (ReferenceParm)
// bool                               CallFunc_BreakCreatureUIInfo_ShowNameplate                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TSoftClassPtr<class ABP_CreatureBase_C>>CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// bool                               CallFunc_UpdateCreatureList_Successful_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_RealmInfoTab_NPC_Creatures_C::UpdateCreatureHolder(TArray<struct FDataTableRowHandle>& Creature_Row, class UDataTable* LST_CreatureInfo, const TArray<TSoftClassPtr<class ABP_CreatureBase_C>>& Creature_Classes, const TArray<class FText>& CreatureNamesFound, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, TSoftClassPtr<class ABP_CreatureBase_C> CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Conv_SoftClassReferenceToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Add_IntInt_ReturnValue_2, class FName CallFunc_Array_Get_Item_1, const struct FS_CreatureInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, const class FString& CallFunc_Conv_SoftClassReferenceToString_ReturnValue_1, bool CallFunc_UpdateCreatureList_Successful, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool CallFunc_Array_IsNotEmpty_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, const struct FDataTableRowHandle& CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_2, const struct FS_BPSpawnerData& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, class FText CallFunc_BreakCreatureUIInfo_CreatureName, TSoftObjectPtr<class UTexture2D> CallFunc_BreakCreatureUIInfo_CreatureIcon, int32 CallFunc_BreakCreatureUIInfo_FerocityMin, int32 CallFunc_BreakCreatureUIInfo_FerocityMax, TArray<enum class EBiomeID>& CallFunc_BreakCreatureUIInfo_Biomes, bool CallFunc_BreakCreatureUIInfo_ShowNameplate, TArray<TSoftClassPtr<class ABP_CreatureBase_C>>& CallFunc_Map_Keys_Keys, bool CallFunc_UpdateCreatureList_Successful_1, bool CallFunc_HasTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmInfoTab_NPC_Creatures_C", "UpdateCreatureHolder");

	Params::UWBP_sw_RealmInfoTab_NPC_Creatures_C_UpdateCreatureHolder_Params Parms{};

	Parms.Creature_Row = Creature_Row;
	Parms.LST_CreatureInfo = LST_CreatureInfo;
	Parms.Creature_Classes = Creature_Classes;
	Parms.CreatureNamesFound = CreatureNamesFound;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_SoftClassReferenceToString_ReturnValue = CallFunc_Conv_SoftClassReferenceToString_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_SoftClassReferenceToString_ReturnValue_1 = CallFunc_Conv_SoftClassReferenceToString_ReturnValue_1;
	Parms.CallFunc_UpdateCreatureList_Successful = CallFunc_UpdateCreatureList_Successful;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.CallFunc_BreakCreatureUIInfo_CreatureName = CallFunc_BreakCreatureUIInfo_CreatureName;
	Parms.CallFunc_BreakCreatureUIInfo_CreatureIcon = CallFunc_BreakCreatureUIInfo_CreatureIcon;
	Parms.CallFunc_BreakCreatureUIInfo_FerocityMin = CallFunc_BreakCreatureUIInfo_FerocityMin;
	Parms.CallFunc_BreakCreatureUIInfo_FerocityMax = CallFunc_BreakCreatureUIInfo_FerocityMax;
	Parms.CallFunc_BreakCreatureUIInfo_Biomes = CallFunc_BreakCreatureUIInfo_Biomes;
	Parms.CallFunc_BreakCreatureUIInfo_ShowNameplate = CallFunc_BreakCreatureUIInfo_ShowNameplate;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_UpdateCreatureList_Successful_1 = CallFunc_UpdateCreatureList_Successful_1;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_RealmInfoTab_NPC_Creatures.WBP_sw_RealmInfoTab_NPC_Creatures_C.UpdateApexCreature
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   Icon                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FText                        Description                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_sw_RealmInfoTab_NPC_Creatures_C::UpdateApexCreature(TSoftObjectPtr<class UTexture2D> Icon, class FText Description)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmInfoTab_NPC_Creatures_C", "UpdateApexCreature");

	Params::UWBP_sw_RealmInfoTab_NPC_Creatures_C_UpdateApexCreature_Params Parms{};

	Parms.Icon = Icon;
	Parms.Description = Description;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_RealmInfoTab_NPC_Creatures.WBP_sw_RealmInfoTab_NPC_Creatures_C.UpdateNPCHolder
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FNWXNPCNarrativeData>NPCInfo                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNWXNPCNarrativeData        CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Array_IsNotEmpty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestGiverTableRow         CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_RealmInfoTab_NPC_Creatures_C::UpdateNPCHolder(TArray<struct FNWXNPCNarrativeData>& NPCInfo, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FNWXNPCNarrativeData& CallFunc_Array_Get_Item, bool CallFunc_Array_IsNotEmpty_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FQuestGiverTableRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_RealmInfoTab_NPC_Creatures_C", "UpdateNPCHolder");

	Params::UWBP_sw_RealmInfoTab_NPC_Creatures_C_UpdateNPCHolder_Params Parms{};

	Parms.NPCInfo = NPCInfo;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsNotEmpty_ReturnValue = CallFunc_Array_IsNotEmpty_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


