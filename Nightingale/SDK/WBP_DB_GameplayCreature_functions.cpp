#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_DB_GameplayCreature.WBP_DB_GameplayCreature_C
// (None)

class UClass* UWBP_DB_GameplayCreature_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_DB_GameplayCreature_C");

	return Clss;
}


// WBP_DB_GameplayCreature_C WBP_DB_GameplayCreature.Default__WBP_DB_GameplayCreature_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_DB_GameplayCreature_C* UWBP_DB_GameplayCreature_C::GetDefaultObj()
{
	static class UWBP_DB_GameplayCreature_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_DB_GameplayCreature_C*>(UWBP_DB_GameplayCreature_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_DB_GameplayCreature.WBP_DB_GameplayCreature_C.OnInputCancel
// (HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UWBP_DB_GameplayCreature_C::OnInputCancel(const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_GameplayCreature_C", "OnInputCancel");

	Params::UWBP_DB_GameplayCreature_C_OnInputCancel_Params Parms{};

	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_DB_GameplayCreature.WBP_DB_GameplayCreature_C.InitializeInvisible
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_GameplayCreature_C::InitializeInvisible(const struct FGameplayTag& Temp_struct_Variable, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_GameplayCreature_C", "InitializeInvisible");

	Params::UWBP_DB_GameplayCreature_C_InitializeInvisible_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_GameplayCreature.WBP_DB_GameplayCreature_C.InitializeShowWeakpoints
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_DebugModeComponent_C*    LDebug                                                           (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_DebugModeComponent_C*    CallFunc_GetDebugModeComponent_BP_DebugModeComponent             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_GameplayCreature_C::InitializeShowWeakpoints(class UBP_DebugModeComponent_C* LDebug, bool CallFunc_IsValid_ReturnValue, class UBP_DebugModeComponent_C* CallFunc_GetDebugModeComponent_BP_DebugModeComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_GameplayCreature_C", "InitializeShowWeakpoints");

	Params::UWBP_DB_GameplayCreature_C_InitializeShowWeakpoints_Params Parms{};

	Parms.LDebug = LDebug;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDebugModeComponent_BP_DebugModeComponent = CallFunc_GetDebugModeComponent_BP_DebugModeComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_GameplayCreature.WBP_DB_GameplayCreature_C.ToggleShowWeakpoints
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_DebugModeComponent_C*    LDebug                                                           (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_DebugModeComponent_C*    CallFunc_GetDebugModeComponent_BP_DebugModeComponent             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_GameplayCreature_C::ToggleShowWeakpoints(class UBP_DebugModeComponent_C* LDebug, bool CallFunc_IsValid_ReturnValue, class UBP_DebugModeComponent_C* CallFunc_GetDebugModeComponent_BP_DebugModeComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_GameplayCreature_C", "ToggleShowWeakpoints");

	Params::UWBP_DB_GameplayCreature_C_ToggleShowWeakpoints_Params Parms{};

	Parms.LDebug = LDebug;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDebugModeComponent_BP_DebugModeComponent = CallFunc_GetDebugModeComponent_BP_DebugModeComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_GameplayCreature.WBP_DB_GameplayCreature_C.InitializeDisableAI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_DebugModeComponent_C*    CallFunc_GetDebugModeComponent_BP_DebugModeComponent             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_GameplayCreature_C::InitializeDisableAI(class UBP_DebugModeComponent_C* CallFunc_GetDebugModeComponent_BP_DebugModeComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_GameplayCreature_C", "InitializeDisableAI");

	Params::UWBP_DB_GameplayCreature_C_InitializeDisableAI_Params Parms{};

	Parms.CallFunc_GetDebugModeComponent_BP_DebugModeComponent = CallFunc_GetDebugModeComponent_BP_DebugModeComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_GameplayCreature.WBP_DB_GameplayCreature_C.Populate CB NPC Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UComboBoxString*             Combo                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  DataTable                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              LSortedNames                                                     (Edit, BlueprintVisible)
// class UDataTable*                  LDataTable                                                       (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UComboBoxString*             LCombo                                                           (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_IncreasingStringSort_ReturnValue                        (ReferenceParm)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_GameplayCreature_C::Populate_CB_NPC_Data(class UComboBoxString* Combo, class UDataTable* DataTable, const TArray<class FString>& LSortedNames, class UDataTable* LDataTable, class UComboBoxString* LCombo, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_NameToString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class FString>& CallFunc_IncreasingStringSort_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const class FString& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_GameplayCreature_C", "Populate CB NPC Data");

	Params::UWBP_DB_GameplayCreature_C_Populate_CB_NPC_Data_Params Parms{};

	Parms.Combo = Combo;
	Parms.DataTable = DataTable;
	Parms.LSortedNames = LSortedNames;
	Parms.LDataTable = LDataTable;
	Parms.LCombo = LCombo;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_IncreasingStringSort_ReturnValue = CallFunc_IncreasingStringSort_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_GameplayCreature.WBP_DB_GameplayCreature_C.FindSpawnerTableRow
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*                  Table                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      DevFacingName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         DataTableRowHandle                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CreatureSpawner          CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_GameplayCreature_C::FindSpawnerTableRow(class UDataTable* Table, const class FString& DevFacingName, struct FDataTableRowHandle* DataTableRowHandle, int32 Temp_int_Array_Index_Variable, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FS_CreatureSpawner& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, bool Temp_bool_True_if_break_was_hit_Variable, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_GameplayCreature_C", "FindSpawnerTableRow");

	Params::UWBP_DB_GameplayCreature_C_FindSpawnerTableRow_Params Parms{};

	Parms.Table = Table;
	Parms.DevFacingName = DevFacingName;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DataTableRowHandle != nullptr)
		*DataTableRowHandle = std::move(Parms.DataTableRowHandle);

}


// Function WBP_DB_GameplayCreature.WBP_DB_GameplayCreature_C.PopulateCBCreatureTags
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UComboBoxString*             Combo                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  DataTable                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              LSortedNames                                                     (Edit, BlueprintVisible)
// class UDataTable*                  LDataTable                                                       (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UComboBoxString*             LCombo                                                           (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_GameplayTag              CallFunc_GetDataTableRowFromName_OutRow                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetTagName_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_IncreasingStringSort_ReturnValue                        (ReferenceParm)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_GameplayCreature_C::PopulateCBCreatureTags(class UComboBoxString* Combo, class UDataTable* DataTable, const TArray<class FString>& LSortedNames, class UDataTable* LDataTable, class UComboBoxString* LCombo, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FS_GameplayTag& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FName CallFunc_GetTagName_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class FString>& CallFunc_IncreasingStringSort_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const class FString& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_GameplayCreature_C", "PopulateCBCreatureTags");

	Params::UWBP_DB_GameplayCreature_C_PopulateCBCreatureTags_Params Parms{};

	Parms.Combo = Combo;
	Parms.DataTable = DataTable;
	Parms.LSortedNames = LSortedNames;
	Parms.LDataTable = LDataTable;
	Parms.LCombo = LCombo;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetTagName_ReturnValue = CallFunc_GetTagName_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_IncreasingStringSort_ReturnValue = CallFunc_IncreasingStringSort_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_GameplayCreature.WBP_DB_GameplayCreature_C.PopulateCBSpawners
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UComboBoxString*             Combo                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  DataTable                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              LSortedNames                                                     (Edit, BlueprintVisible)
// class UDataTable*                  LDataTable                                                       (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UComboBoxString*             LCombo                                                           (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_CreatureSpawner          CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_IncreasingStringSort_ReturnValue                        (ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_GameplayCreature_C::PopulateCBSpawners(class UComboBoxString* Combo, class UDataTable* DataTable, const TArray<class FString>& LSortedNames, class UDataTable* LDataTable, class UComboBoxString* LCombo, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FS_CreatureSpawner& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, TArray<class FString>& CallFunc_IncreasingStringSort_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const class FString& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_GameplayCreature_C", "PopulateCBSpawners");

	Params::UWBP_DB_GameplayCreature_C_PopulateCBSpawners_Params Parms{};

	Parms.Combo = Combo;
	Parms.DataTable = DataTable;
	Parms.LSortedNames = LSortedNames;
	Parms.LDataTable = LDataTable;
	Parms.LCombo = LCombo;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_IncreasingStringSort_ReturnValue = CallFunc_IncreasingStringSort_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_GameplayCreature.WBP_DB_GameplayCreature_C.InitializeScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_DB_GameplayCreature_C::InitializeScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_GameplayCreature_C", "InitializeScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_GameplayCreature.WBP_DB_GameplayCreature_C.GetDebugModeComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UBP_DebugModeComponent_C*    BP_DebugModeComponent                                            (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_DebugModeComponent_C*    CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_GameplayCreature_C::GetDebugModeComponent(class UBP_DebugModeComponent_C** BP_DebugModeComponent, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class UBP_DebugModeComponent_C* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_GameplayCreature_C", "GetDebugModeComponent");

	Params::UWBP_DB_GameplayCreature_C_GetDebugModeComponent_Params Parms{};

	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (BP_DebugModeComponent != nullptr)
		*BP_DebugModeComponent = Parms.BP_DebugModeComponent;

}


// Function WBP_DB_GameplayCreature.WBP_DB_GameplayCreature_C.BndEvt__WBP_DB_GameplayCreature_CB_Spawners_Realm_Functional_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             SelectionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_GameplayCreature_C::BndEvt__WBP_DB_GameplayCreature_CB_Spawners_Realm_Functional_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_GameplayCreature_C", "BndEvt__WBP_DB_GameplayCreature_CB_Spawners_Realm_Functional_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature");

	Params::UWBP_DB_GameplayCreature_C_BndEvt__WBP_DB_GameplayCreature_CB_Spawners_Realm_Functional_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_GameplayCreature.WBP_DB_GameplayCreature_C.BndEvt__WBP_DB_GameplayCreature_CB_Spawners_Bound_Functional_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             SelectionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_GameplayCreature_C::BndEvt__WBP_DB_GameplayCreature_CB_Spawners_Bound_Functional_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_GameplayCreature_C", "BndEvt__WBP_DB_GameplayCreature_CB_Spawners_Bound_Functional_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature");

	Params::UWBP_DB_GameplayCreature_C_BndEvt__WBP_DB_GameplayCreature_CB_Spawners_Bound_Functional_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_GameplayCreature.WBP_DB_GameplayCreature_C.BndEvt__WBP_DB_GameplayCreature_BU_Spawn_Realm_Functional_K2Node_ComponentBoundEvent_4_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_GameplayCreature_C::BndEvt__WBP_DB_GameplayCreature_BU_Spawn_Realm_Functional_K2Node_ComponentBoundEvent_4_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_GameplayCreature_C", "BndEvt__WBP_DB_GameplayCreature_BU_Spawn_Realm_Functional_K2Node_ComponentBoundEvent_4_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_GameplayCreature.WBP_DB_GameplayCreature_C.BndEvt__WBP_DB_GameplayCreature_BU_Spawn_Bound_Functional_K2Node_ComponentBoundEvent_5_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_GameplayCreature_C::BndEvt__WBP_DB_GameplayCreature_BU_Spawn_Bound_Functional_K2Node_ComponentBoundEvent_5_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_GameplayCreature_C", "BndEvt__WBP_DB_GameplayCreature_BU_Spawn_Bound_Functional_K2Node_ComponentBoundEvent_5_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_GameplayCreature.WBP_DB_GameplayCreature_C.BndEvt__WBP_DB_GameplayCreature_BU_Spawn_Realm_Prototype_K2Node_ComponentBoundEvent_6_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_GameplayCreature_C::BndEvt__WBP_DB_GameplayCreature_BU_Spawn_Realm_Prototype_K2Node_ComponentBoundEvent_6_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_GameplayCreature_C", "BndEvt__WBP_DB_GameplayCreature_BU_Spawn_Realm_Prototype_K2Node_ComponentBoundEvent_6_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_GameplayCreature.WBP_DB_GameplayCreature_C.BndEvt__WBP_DB_GameplayCreature_BU_Spawn_Bound_Prototype_K2Node_ComponentBoundEvent_7_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_GameplayCreature_C::BndEvt__WBP_DB_GameplayCreature_BU_Spawn_Bound_Prototype_K2Node_ComponentBoundEvent_7_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_GameplayCreature_C", "BndEvt__WBP_DB_GameplayCreature_BU_Spawn_Bound_Prototype_K2Node_ComponentBoundEvent_7_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_GameplayCreature.WBP_DB_GameplayCreature_C.BndEvt__WBP_DB_GameplayCreature_CB_Spawners_Bound_Prototype_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             SelectionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_GameplayCreature_C::BndEvt__WBP_DB_GameplayCreature_CB_Spawners_Bound_Prototype_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_GameplayCreature_C", "BndEvt__WBP_DB_GameplayCreature_CB_Spawners_Bound_Prototype_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature");

	Params::UWBP_DB_GameplayCreature_C_BndEvt__WBP_DB_GameplayCreature_CB_Spawners_Bound_Prototype_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_GameplayCreature.WBP_DB_GameplayCreature_C.BndEvt__WBP_DB_GameplayCreature_CB_Spawners_Realm_Prototype_K2Node_ComponentBoundEvent_9_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             SelectionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_GameplayCreature_C::BndEvt__WBP_DB_GameplayCreature_CB_Spawners_Realm_Prototype_K2Node_ComponentBoundEvent_9_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_GameplayCreature_C", "BndEvt__WBP_DB_GameplayCreature_CB_Spawners_Realm_Prototype_K2Node_ComponentBoundEvent_9_OnSelectionChangedEvent__DelegateSignature");

	Params::UWBP_DB_GameplayCreature_C_BndEvt__WBP_DB_GameplayCreature_CB_Spawners_Realm_Prototype_K2Node_ComponentBoundEvent_9_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_GameplayCreature.WBP_DB_GameplayCreature_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_DB_GameplayCreature_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_GameplayCreature_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_GameplayCreature.WBP_DB_GameplayCreature_C.BndEvt__WBP_DB_GameplayCreature_BU_ToggleAI_K2Node_ComponentBoundEvent_10_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_GameplayCreature_C::BndEvt__WBP_DB_GameplayCreature_BU_ToggleAI_K2Node_ComponentBoundEvent_10_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_GameplayCreature_C", "BndEvt__WBP_DB_GameplayCreature_BU_ToggleAI_K2Node_ComponentBoundEvent_10_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_GameplayCreature.WBP_DB_GameplayCreature_C.BndEvt__WBP_DB_GameplayCreature_BU_KillAllCreaturesWithTag_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_GameplayCreature_C::BndEvt__WBP_DB_GameplayCreature_BU_KillAllCreaturesWithTag_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_GameplayCreature_C", "BndEvt__WBP_DB_GameplayCreature_BU_KillAllCreaturesWithTag_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_GameplayCreature.WBP_DB_GameplayCreature_C.BndEvt__WBP_DB_GameplayCreature_BU_DestroyAllCreaturesWithTag_K2Node_ComponentBoundEvent_1_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_GameplayCreature_C::BndEvt__WBP_DB_GameplayCreature_BU_DestroyAllCreaturesWithTag_K2Node_ComponentBoundEvent_1_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_GameplayCreature_C", "BndEvt__WBP_DB_GameplayCreature_BU_DestroyAllCreaturesWithTag_K2Node_ComponentBoundEvent_1_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_GameplayCreature.WBP_DB_GameplayCreature_C.BndEvt__WBP_DB_GameplayCreature_BU_GoToSpawnerWithTag_K2Node_ComponentBoundEvent_11_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_GameplayCreature_C::BndEvt__WBP_DB_GameplayCreature_BU_GoToSpawnerWithTag_K2Node_ComponentBoundEvent_11_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_GameplayCreature_C", "BndEvt__WBP_DB_GameplayCreature_BU_GoToSpawnerWithTag_K2Node_ComponentBoundEvent_11_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_GameplayCreature.WBP_DB_GameplayCreature_C.BndEvt__WBP_DB_GameplayCreature_CB_CreatureGameplayTag_K2Node_ComponentBoundEvent_12_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             SelectionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_GameplayCreature_C::BndEvt__WBP_DB_GameplayCreature_CB_CreatureGameplayTag_K2Node_ComponentBoundEvent_12_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_GameplayCreature_C", "BndEvt__WBP_DB_GameplayCreature_CB_CreatureGameplayTag_K2Node_ComponentBoundEvent_12_OnSelectionChangedEvent__DelegateSignature");

	Params::UWBP_DB_GameplayCreature_C_BndEvt__WBP_DB_GameplayCreature_CB_CreatureGameplayTag_K2Node_ComponentBoundEvent_12_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_GameplayCreature.WBP_DB_GameplayCreature_C.BndEvt__WBP_DB_GameplayCreature_BU_SpawnVillager_K2Node_ComponentBoundEvent_13_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_GameplayCreature_C::BndEvt__WBP_DB_GameplayCreature_BU_SpawnVillager_K2Node_ComponentBoundEvent_13_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_GameplayCreature_C", "BndEvt__WBP_DB_GameplayCreature_BU_SpawnVillager_K2Node_ComponentBoundEvent_13_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_GameplayCreature.WBP_DB_GameplayCreature_C.BndEvt__WBP_DB_GameplayCreature_CB_VillagerInfo_K2Node_ComponentBoundEvent_14_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             SelectionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_GameplayCreature_C::BndEvt__WBP_DB_GameplayCreature_CB_VillagerInfo_K2Node_ComponentBoundEvent_14_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_GameplayCreature_C", "BndEvt__WBP_DB_GameplayCreature_CB_VillagerInfo_K2Node_ComponentBoundEvent_14_OnSelectionChangedEvent__DelegateSignature");

	Params::UWBP_DB_GameplayCreature_C_BndEvt__WBP_DB_GameplayCreature_CB_VillagerInfo_K2Node_ComponentBoundEvent_14_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_GameplayCreature.WBP_DB_GameplayCreature_C.BndEvt__WBP_DB_GameplayCreature_BU_DestroyDebug_K2Node_ComponentBoundEvent_15_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_GameplayCreature_C::BndEvt__WBP_DB_GameplayCreature_BU_DestroyDebug_K2Node_ComponentBoundEvent_15_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_GameplayCreature_C", "BndEvt__WBP_DB_GameplayCreature_BU_DestroyDebug_K2Node_ComponentBoundEvent_15_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_GameplayCreature.WBP_DB_GameplayCreature_C.BndEvt__WBP_DB_GameplayCreature_BU_FarSpawn_Realm_Functional_K2Node_ComponentBoundEvent_16_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_GameplayCreature_C::BndEvt__WBP_DB_GameplayCreature_BU_FarSpawn_Realm_Functional_K2Node_ComponentBoundEvent_16_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_GameplayCreature_C", "BndEvt__WBP_DB_GameplayCreature_BU_FarSpawn_Realm_Functional_K2Node_ComponentBoundEvent_16_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_GameplayCreature.WBP_DB_GameplayCreature_C.BndEvt__WBP_DB_GameplayCreature_BU_FarSpawn_Realm_Prototype_K2Node_ComponentBoundEvent_17_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_GameplayCreature_C::BndEvt__WBP_DB_GameplayCreature_BU_FarSpawn_Realm_Prototype_K2Node_ComponentBoundEvent_17_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_GameplayCreature_C", "BndEvt__WBP_DB_GameplayCreature_BU_FarSpawn_Realm_Prototype_K2Node_ComponentBoundEvent_17_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_GameplayCreature.WBP_DB_GameplayCreature_C.BndEvt__WBP_DB_GameplayCreature_BU_WeakpointDebug_K2Node_ComponentBoundEvent_19_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_GameplayCreature_C::BndEvt__WBP_DB_GameplayCreature_BU_WeakpointDebug_K2Node_ComponentBoundEvent_19_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_GameplayCreature_C", "BndEvt__WBP_DB_GameplayCreature_BU_WeakpointDebug_K2Node_ComponentBoundEvent_19_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_GameplayCreature.WBP_DB_GameplayCreature_C.BndEvt__WBP_DB_GameplayCreature_BU_Invisible_K2Node_ComponentBoundEvent_21_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_GameplayCreature_C::BndEvt__WBP_DB_GameplayCreature_BU_Invisible_K2Node_ComponentBoundEvent_21_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_GameplayCreature_C", "BndEvt__WBP_DB_GameplayCreature_BU_Invisible_K2Node_ComponentBoundEvent_21_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_GameplayCreature.WBP_DB_GameplayCreature_C.BndEvt__WBP_DB_GameplayCreature_BU_Debug_Realm_Proto_K2Node_ComponentBoundEvent_18_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_GameplayCreature_C::BndEvt__WBP_DB_GameplayCreature_BU_Debug_Realm_Proto_K2Node_ComponentBoundEvent_18_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_GameplayCreature_C", "BndEvt__WBP_DB_GameplayCreature_BU_Debug_Realm_Proto_K2Node_ComponentBoundEvent_18_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_GameplayCreature.WBP_DB_GameplayCreature_C.BndEvt__WBP_DB_GameplayCreature_BU_Debug_Realm_Functional_K2Node_ComponentBoundEvent_22_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_GameplayCreature_C::BndEvt__WBP_DB_GameplayCreature_BU_Debug_Realm_Functional_K2Node_ComponentBoundEvent_22_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_GameplayCreature_C", "BndEvt__WBP_DB_GameplayCreature_BU_Debug_Realm_Functional_K2Node_ComponentBoundEvent_22_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_GameplayCreature.WBP_DB_GameplayCreature_C.BndEvt__WBP_DB_GameplayCreature_BU_Debug_Bound_Proto_K2Node_ComponentBoundEvent_23_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_GameplayCreature_C::BndEvt__WBP_DB_GameplayCreature_BU_Debug_Bound_Proto_K2Node_ComponentBoundEvent_23_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_GameplayCreature_C", "BndEvt__WBP_DB_GameplayCreature_BU_Debug_Bound_Proto_K2Node_ComponentBoundEvent_23_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_GameplayCreature.WBP_DB_GameplayCreature_C.BndEvt__WBP_DB_GameplayCreature_BU_Debug_Bound_Functional_1_K2Node_ComponentBoundEvent_25_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_GameplayCreature_C::BndEvt__WBP_DB_GameplayCreature_BU_Debug_Bound_Functional_1_K2Node_ComponentBoundEvent_25_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_GameplayCreature_C", "BndEvt__WBP_DB_GameplayCreature_BU_Debug_Bound_Functional_1_K2Node_ComponentBoundEvent_25_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_GameplayCreature.WBP_DB_GameplayCreature_C.BndEvt__WBP_DB_GameplayCreature_CB_Spawners_Hero_K2Node_ComponentBoundEvent_24_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             SelectionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_GameplayCreature_C::BndEvt__WBP_DB_GameplayCreature_CB_Spawners_Hero_K2Node_ComponentBoundEvent_24_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_GameplayCreature_C", "BndEvt__WBP_DB_GameplayCreature_CB_Spawners_Hero_K2Node_ComponentBoundEvent_24_OnSelectionChangedEvent__DelegateSignature");

	Params::UWBP_DB_GameplayCreature_C_BndEvt__WBP_DB_GameplayCreature_CB_Spawners_Hero_K2Node_ComponentBoundEvent_24_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_GameplayCreature.WBP_DB_GameplayCreature_C.BndEvt__WBP_DB_GameplayCreature_BU_Spawn_Hero_K2Node_ComponentBoundEvent_26_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_GameplayCreature_C::BndEvt__WBP_DB_GameplayCreature_BU_Spawn_Hero_K2Node_ComponentBoundEvent_26_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_GameplayCreature_C", "BndEvt__WBP_DB_GameplayCreature_BU_Spawn_Hero_K2Node_ComponentBoundEvent_26_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_GameplayCreature.WBP_DB_GameplayCreature_C.BndEvt__WBP_DB_GameplayCreature_BU_FarSpawn_Hero_K2Node_ComponentBoundEvent_27_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_GameplayCreature_C::BndEvt__WBP_DB_GameplayCreature_BU_FarSpawn_Hero_K2Node_ComponentBoundEvent_27_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_GameplayCreature_C", "BndEvt__WBP_DB_GameplayCreature_BU_FarSpawn_Hero_K2Node_ComponentBoundEvent_27_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_GameplayCreature.WBP_DB_GameplayCreature_C.BndEvt__WBP_DB_GameplayCreature_BU_Debug_Hero_K2Node_ComponentBoundEvent_28_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_GameplayCreature_C::BndEvt__WBP_DB_GameplayCreature_BU_Debug_Hero_K2Node_ComponentBoundEvent_28_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_GameplayCreature_C", "BndEvt__WBP_DB_GameplayCreature_BU_Debug_Hero_K2Node_ComponentBoundEvent_28_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_GameplayCreature.WBP_DB_GameplayCreature_C.BndEvt__WBP_DB_GameplayCreature_BU_SpawnNarrative_K2Node_ComponentBoundEvent_29_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_GameplayCreature_C::BndEvt__WBP_DB_GameplayCreature_BU_SpawnNarrative_K2Node_ComponentBoundEvent_29_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_GameplayCreature_C", "BndEvt__WBP_DB_GameplayCreature_BU_SpawnNarrative_K2Node_ComponentBoundEvent_29_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_GameplayCreature.WBP_DB_GameplayCreature_C.BndEvt__WBP_DB_GameplayCreature_CB_NarrativeData_K2Node_ComponentBoundEvent_30_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             SelectionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_GameplayCreature_C::BndEvt__WBP_DB_GameplayCreature_CB_NarrativeData_K2Node_ComponentBoundEvent_30_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_GameplayCreature_C", "BndEvt__WBP_DB_GameplayCreature_CB_NarrativeData_K2Node_ComponentBoundEvent_30_OnSelectionChangedEvent__DelegateSignature");

	Params::UWBP_DB_GameplayCreature_C_BndEvt__WBP_DB_GameplayCreature_CB_NarrativeData_K2Node_ComponentBoundEvent_30_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_GameplayCreature.WBP_DB_GameplayCreature_C.BndEvt__WBP_DB_GameplayCreature_BU_DestroyCorpses_K2Node_ComponentBoundEvent_31_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_GameplayCreature_C::BndEvt__WBP_DB_GameplayCreature_BU_DestroyCorpses_K2Node_ComponentBoundEvent_31_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_GameplayCreature_C", "BndEvt__WBP_DB_GameplayCreature_BU_DestroyCorpses_K2Node_ComponentBoundEvent_31_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_GameplayCreature.WBP_DB_GameplayCreature_C.BndEvt__WBP_DB_GameplayCreature_CB_Realm_Power_K2Node_ComponentBoundEvent_20_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_GameplayCreature_C::BndEvt__WBP_DB_GameplayCreature_CB_Realm_Power_K2Node_ComponentBoundEvent_20_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_GameplayCreature_C", "BndEvt__WBP_DB_GameplayCreature_CB_Realm_Power_K2Node_ComponentBoundEvent_20_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UWBP_DB_GameplayCreature_C_BndEvt__WBP_DB_GameplayCreature_CB_Realm_Power_K2Node_ComponentBoundEvent_20_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_GameplayCreature.WBP_DB_GameplayCreature_C.ExecuteUbergraph_WBP_DB_GameplayCreature
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_DebugModeComponent_C*    CallFunc_GetDebugModeComponent_BP_DebugModeComponent             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_DebugModeComponent_C*    CallFunc_GetDebugModeComponent_BP_DebugModeComponent_1           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_7                        (ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_6                        (ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_FindSpawnerTableRow_DataTableRowHandle                  (NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_FindSpawnerTableRow_DataTableRowHandle_1                (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_DebugModeComponent_C*    CallFunc_GetDebugModeComponent_BP_DebugModeComponent_2           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_DebugModeComponent_C*    CallFunc_GetDebugModeComponent_BP_DebugModeComponent_3           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_5                        (ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_4                        (ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_FindSpawnerTableRow_DataTableRowHandle_2                (NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_FindSpawnerTableRow_DataTableRowHandle_3                (NoDestructor, HasGetValueTypeHash)
// class UBP_DebugModeComponent_C*    CallFunc_GetDebugModeComponent_BP_DebugModeComponent_4           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_DebugModeComponent_C*    CallFunc_GetDebugModeComponent_BP_DebugModeComponent_5           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_DebugModeComponent_C*    CallFunc_GetDebugModeComponent_BP_DebugModeComponent_6           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_DebugModeComponent_C*    CallFunc_GetDebugModeComponent_BP_DebugModeComponent_7           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_3                        (ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_GameplayTag              CallFunc_GetDataTableRowFromName_OutRow                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_DebugModeComponent_C*    CallFunc_GetDebugModeComponent_BP_DebugModeComponent_8           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetTagName_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_2                        (ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor, HasGetValueTypeHash)
// class UBP_DebugModeComponent_C*    CallFunc_GetDebugModeComponent_BP_DebugModeComponent_9           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_DebugModeComponent_C*    CallFunc_GetDebugModeComponent_BP_DebugModeComponent_10          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// class UBP_DebugModeComponent_C*    CallFunc_GetDebugModeComponent_BP_DebugModeComponent_11          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_DebugModeComponent_C*    CallFunc_GetDebugModeComponent_BP_DebugModeComponent_12          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_DebugModeComponent_C*    CallFunc_GetDebugModeComponent_BP_DebugModeComponent_13          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_DebugModeComponent_C*    CallFunc_GetDebugModeComponent_BP_DebugModeComponent_14          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_DebugModeComponent_C*    CallFunc_GetDebugModeComponent_BP_DebugModeComponent_15          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_DebugModeComponent_C*    CallFunc_GetDebugModeComponent_BP_DebugModeComponent_16          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_DebugModeComponent_C*    CallFunc_GetDebugModeComponent_BP_DebugModeComponent_17          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_DebugModeComponent_C*    CallFunc_GetDebugModeComponent_BP_DebugModeComponent_18          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_DebugModeComponent_C*    CallFunc_GetDebugModeComponent_BP_DebugModeComponent_19          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_1                        (ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_FindSpawnerTableRow_DataTableRowHandle_4                (NoDestructor, HasGetValueTypeHash)
// class UBP_DebugModeComponent_C*    CallFunc_GetDebugModeComponent_BP_DebugModeComponent_20          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_DebugModeComponent_C*    CallFunc_GetDebugModeComponent_BP_DebugModeComponent_21          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_DebugModeComponent_C*    CallFunc_GetDebugModeComponent_BP_DebugModeComponent_22          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UBP_DebugModeComponent_C*    CallFunc_GetDebugModeComponent_BP_DebugModeComponent_23          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem                          (ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_1                           (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_DebugModeComponent_C*    CallFunc_GetDebugModeComponent_BP_DebugModeComponent_24          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNumeric_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_GameplayCreature_C::ExecuteUbergraph_WBP_DB_GameplayCreature(int32 EntryPoint, class UBP_DebugModeComponent_C* CallFunc_GetDebugModeComponent_BP_DebugModeComponent, class UBP_DebugModeComponent_C* CallFunc_GetDebugModeComponent_BP_DebugModeComponent_1, const class FString& K2Node_ComponentBoundEvent_SelectedItem_7, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_7, const class FString& K2Node_ComponentBoundEvent_SelectedItem_6, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_6, const struct FDataTableRowHandle& CallFunc_FindSpawnerTableRow_DataTableRowHandle, const struct FDataTableRowHandle& CallFunc_FindSpawnerTableRow_DataTableRowHandle_1, int32 Temp_int_Array_Index_Variable, class UBP_DebugModeComponent_C* CallFunc_GetDebugModeComponent_BP_DebugModeComponent_2, class UBP_DebugModeComponent_C* CallFunc_GetDebugModeComponent_BP_DebugModeComponent_3, const class FString& K2Node_ComponentBoundEvent_SelectedItem_5, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_5, const class FString& K2Node_ComponentBoundEvent_SelectedItem_4, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_4, const struct FDataTableRowHandle& CallFunc_FindSpawnerTableRow_DataTableRowHandle_2, const struct FDataTableRowHandle& CallFunc_FindSpawnerTableRow_DataTableRowHandle_3, class UBP_DebugModeComponent_C* CallFunc_GetDebugModeComponent_BP_DebugModeComponent_4, class UBP_DebugModeComponent_C* CallFunc_GetDebugModeComponent_BP_DebugModeComponent_5, class UBP_DebugModeComponent_C* CallFunc_GetDebugModeComponent_BP_DebugModeComponent_6, class UBP_DebugModeComponent_C* CallFunc_GetDebugModeComponent_BP_DebugModeComponent_7, const class FString& K2Node_ComponentBoundEvent_SelectedItem_3, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_3, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FS_GameplayTag& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UBP_DebugModeComponent_C* CallFunc_GetDebugModeComponent_BP_DebugModeComponent_8, class FName CallFunc_GetTagName_ReturnValue, const class FString& K2Node_ComponentBoundEvent_SelectedItem_2, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_2, bool CallFunc_EqualEqual_NameName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class UBP_DebugModeComponent_C* CallFunc_GetDebugModeComponent_BP_DebugModeComponent_9, class UBP_DebugModeComponent_C* CallFunc_GetDebugModeComponent_BP_DebugModeComponent_10, const struct FGameplayTag& Temp_struct_Variable, class UBP_DebugModeComponent_C* CallFunc_GetDebugModeComponent_BP_DebugModeComponent_11, class UBP_DebugModeComponent_C* CallFunc_GetDebugModeComponent_BP_DebugModeComponent_12, class UBP_DebugModeComponent_C* CallFunc_GetDebugModeComponent_BP_DebugModeComponent_13, class UBP_DebugModeComponent_C* CallFunc_GetDebugModeComponent_BP_DebugModeComponent_14, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, class UBP_DebugModeComponent_C* CallFunc_GetDebugModeComponent_BP_DebugModeComponent_15, class UBP_DebugModeComponent_C* CallFunc_GetDebugModeComponent_BP_DebugModeComponent_16, class UBP_DebugModeComponent_C* CallFunc_GetDebugModeComponent_BP_DebugModeComponent_17, class UBP_DebugModeComponent_C* CallFunc_GetDebugModeComponent_BP_DebugModeComponent_18, class UBP_DebugModeComponent_C* CallFunc_GetDebugModeComponent_BP_DebugModeComponent_19, const class FString& K2Node_ComponentBoundEvent_SelectedItem_1, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType_1, const struct FDataTableRowHandle& CallFunc_FindSpawnerTableRow_DataTableRowHandle_4, class UBP_DebugModeComponent_C* CallFunc_GetDebugModeComponent_BP_DebugModeComponent_20, class UBP_DebugModeComponent_C* CallFunc_GetDebugModeComponent_BP_DebugModeComponent_21, class UBP_DebugModeComponent_C* CallFunc_GetDebugModeComponent_BP_DebugModeComponent_22, class UBP_DebugModeComponent_C* CallFunc_GetDebugModeComponent_BP_DebugModeComponent_23, const class FString& K2Node_ComponentBoundEvent_SelectedItem, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType, int32 Temp_int_Loop_Counter_Variable, class FName CallFunc_Conv_StringToName_ReturnValue_2, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UBP_DebugModeComponent_C* CallFunc_GetDebugModeComponent_BP_DebugModeComponent_24, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue, bool CallFunc_IsNumeric_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_GameplayCreature_C", "ExecuteUbergraph_WBP_DB_GameplayCreature");

	Params::UWBP_DB_GameplayCreature_C_ExecuteUbergraph_WBP_DB_GameplayCreature_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDebugModeComponent_BP_DebugModeComponent = CallFunc_GetDebugModeComponent_BP_DebugModeComponent;
	Parms.CallFunc_GetDebugModeComponent_BP_DebugModeComponent_1 = CallFunc_GetDebugModeComponent_BP_DebugModeComponent_1;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_7 = K2Node_ComponentBoundEvent_SelectedItem_7;
	Parms.K2Node_ComponentBoundEvent_SelectionType_7 = K2Node_ComponentBoundEvent_SelectionType_7;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_6 = K2Node_ComponentBoundEvent_SelectedItem_6;
	Parms.K2Node_ComponentBoundEvent_SelectionType_6 = K2Node_ComponentBoundEvent_SelectionType_6;
	Parms.CallFunc_FindSpawnerTableRow_DataTableRowHandle = CallFunc_FindSpawnerTableRow_DataTableRowHandle;
	Parms.CallFunc_FindSpawnerTableRow_DataTableRowHandle_1 = CallFunc_FindSpawnerTableRow_DataTableRowHandle_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetDebugModeComponent_BP_DebugModeComponent_2 = CallFunc_GetDebugModeComponent_BP_DebugModeComponent_2;
	Parms.CallFunc_GetDebugModeComponent_BP_DebugModeComponent_3 = CallFunc_GetDebugModeComponent_BP_DebugModeComponent_3;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_5 = K2Node_ComponentBoundEvent_SelectedItem_5;
	Parms.K2Node_ComponentBoundEvent_SelectionType_5 = K2Node_ComponentBoundEvent_SelectionType_5;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_4 = K2Node_ComponentBoundEvent_SelectedItem_4;
	Parms.K2Node_ComponentBoundEvent_SelectionType_4 = K2Node_ComponentBoundEvent_SelectionType_4;
	Parms.CallFunc_FindSpawnerTableRow_DataTableRowHandle_2 = CallFunc_FindSpawnerTableRow_DataTableRowHandle_2;
	Parms.CallFunc_FindSpawnerTableRow_DataTableRowHandle_3 = CallFunc_FindSpawnerTableRow_DataTableRowHandle_3;
	Parms.CallFunc_GetDebugModeComponent_BP_DebugModeComponent_4 = CallFunc_GetDebugModeComponent_BP_DebugModeComponent_4;
	Parms.CallFunc_GetDebugModeComponent_BP_DebugModeComponent_5 = CallFunc_GetDebugModeComponent_BP_DebugModeComponent_5;
	Parms.CallFunc_GetDebugModeComponent_BP_DebugModeComponent_6 = CallFunc_GetDebugModeComponent_BP_DebugModeComponent_6;
	Parms.CallFunc_GetDebugModeComponent_BP_DebugModeComponent_7 = CallFunc_GetDebugModeComponent_BP_DebugModeComponent_7;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_3 = K2Node_ComponentBoundEvent_SelectedItem_3;
	Parms.K2Node_ComponentBoundEvent_SelectionType_3 = K2Node_ComponentBoundEvent_SelectionType_3;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetDebugModeComponent_BP_DebugModeComponent_8 = CallFunc_GetDebugModeComponent_BP_DebugModeComponent_8;
	Parms.CallFunc_GetTagName_ReturnValue = CallFunc_GetTagName_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_2 = K2Node_ComponentBoundEvent_SelectedItem_2;
	Parms.K2Node_ComponentBoundEvent_SelectionType_2 = K2Node_ComponentBoundEvent_SelectionType_2;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.CallFunc_GetDebugModeComponent_BP_DebugModeComponent_9 = CallFunc_GetDebugModeComponent_BP_DebugModeComponent_9;
	Parms.CallFunc_GetDebugModeComponent_BP_DebugModeComponent_10 = CallFunc_GetDebugModeComponent_BP_DebugModeComponent_10;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetDebugModeComponent_BP_DebugModeComponent_11 = CallFunc_GetDebugModeComponent_BP_DebugModeComponent_11;
	Parms.CallFunc_GetDebugModeComponent_BP_DebugModeComponent_12 = CallFunc_GetDebugModeComponent_BP_DebugModeComponent_12;
	Parms.CallFunc_GetDebugModeComponent_BP_DebugModeComponent_13 = CallFunc_GetDebugModeComponent_BP_DebugModeComponent_13;
	Parms.CallFunc_GetDebugModeComponent_BP_DebugModeComponent_14 = CallFunc_GetDebugModeComponent_BP_DebugModeComponent_14;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_GetDebugModeComponent_BP_DebugModeComponent_15 = CallFunc_GetDebugModeComponent_BP_DebugModeComponent_15;
	Parms.CallFunc_GetDebugModeComponent_BP_DebugModeComponent_16 = CallFunc_GetDebugModeComponent_BP_DebugModeComponent_16;
	Parms.CallFunc_GetDebugModeComponent_BP_DebugModeComponent_17 = CallFunc_GetDebugModeComponent_BP_DebugModeComponent_17;
	Parms.CallFunc_GetDebugModeComponent_BP_DebugModeComponent_18 = CallFunc_GetDebugModeComponent_BP_DebugModeComponent_18;
	Parms.CallFunc_GetDebugModeComponent_BP_DebugModeComponent_19 = CallFunc_GetDebugModeComponent_BP_DebugModeComponent_19;
	Parms.K2Node_ComponentBoundEvent_SelectedItem_1 = K2Node_ComponentBoundEvent_SelectedItem_1;
	Parms.K2Node_ComponentBoundEvent_SelectionType_1 = K2Node_ComponentBoundEvent_SelectionType_1;
	Parms.CallFunc_FindSpawnerTableRow_DataTableRowHandle_4 = CallFunc_FindSpawnerTableRow_DataTableRowHandle_4;
	Parms.CallFunc_GetDebugModeComponent_BP_DebugModeComponent_20 = CallFunc_GetDebugModeComponent_BP_DebugModeComponent_20;
	Parms.CallFunc_GetDebugModeComponent_BP_DebugModeComponent_21 = CallFunc_GetDebugModeComponent_BP_DebugModeComponent_21;
	Parms.CallFunc_GetDebugModeComponent_BP_DebugModeComponent_22 = CallFunc_GetDebugModeComponent_BP_DebugModeComponent_22;
	Parms.CallFunc_GetDebugModeComponent_BP_DebugModeComponent_23 = CallFunc_GetDebugModeComponent_BP_DebugModeComponent_23;
	Parms.K2Node_ComponentBoundEvent_SelectedItem = K2Node_ComponentBoundEvent_SelectedItem;
	Parms.K2Node_ComponentBoundEvent_SelectionType = K2Node_ComponentBoundEvent_SelectionType;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Conv_StringToName_ReturnValue_2 = CallFunc_Conv_StringToName_ReturnValue_2;
	Parms.K2Node_MakeStruct_DataTableRowHandle_1 = K2Node_MakeStruct_DataTableRowHandle_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetDebugModeComponent_BP_DebugModeComponent_24 = CallFunc_GetDebugModeComponent_BP_DebugModeComponent_24;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_IsNumeric_ReturnValue = CallFunc_IsNumeric_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


