#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_QuestMarker.ba_QuestMarker_C
// (Actor)

class UClass* Aba_QuestMarker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_QuestMarker_C");

	return Clss;
}


// ba_QuestMarker_C ba_QuestMarker.Default__ba_QuestMarker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_QuestMarker_C* Aba_QuestMarker_C::GetDefaultObj()
{
	static class Aba_QuestMarker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_QuestMarker_C*>(Aba_QuestMarker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ba_QuestMarker.ba_QuestMarker_C.GetObjectsToSave
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UObject*>             ReturnValue                                                      (Parm, OutParm, ReturnParm)

TArray<class UObject*> Aba_QuestMarker_C::GetObjectsToSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_QuestMarker_C", "GetObjectsToSave");

	Params::Aba_QuestMarker_C_GetObjectsToSave_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_QuestMarker.ba_QuestMarker_C.HasObjectsToSave
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool Aba_QuestMarker_C::HasObjectsToSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_QuestMarker_C", "HasObjectsToSave");

	Params::Aba_QuestMarker_C_HasObjectsToSave_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_QuestMarker.ba_QuestMarker_C.ShouldUpdateOverlapsOnLoad
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool Aba_QuestMarker_C::ShouldUpdateOverlapsOnLoad()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_QuestMarker_C", "ShouldUpdateOverlapsOnLoad");

	Params::Aba_QuestMarker_C_ShouldUpdateOverlapsOnLoad_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ba_QuestMarker.ba_QuestMarker_C.GetImageForUnlockvania
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UTexture2D*                  Inventory_Image                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_ContextObjectUsage      CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_QuestMarker_C::GetImageForUnlockvania(class UTexture2D** Inventory_Image, const struct FSt_ContextObjectUsage& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_QuestMarker_C", "GetImageForUnlockvania");

	Params::Aba_QuestMarker_C_GetImageForUnlockvania_Params Parms{};

	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Inventory_Image != nullptr)
		*Inventory_Image = Parms.Inventory_Image;

}


// Function ba_QuestMarker.ba_QuestMarker_C.SetMapAndCompassVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               VisibleOnMap                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               VisibleOnCompass                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class Abp_MinimapTag_C*            CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_QuestMarker_C::SetMapAndCompassVisibility(bool VisibleOnMap, bool VisibleOnCompass, class Abp_MinimapTag_C* CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_QuestMarker_C", "SetMapAndCompassVisibility");

	Params::Aba_QuestMarker_C_SetMapAndCompassVisibility_Params Parms{};

	Parms.VisibleOnMap = VisibleOnMap;
	Parms.VisibleOnCompass = VisibleOnCompass;
	Parms.CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag = CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_QuestMarker.ba_QuestMarker_C.test
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMissionReportRequiredInformationK2Node_MakeStruct_MissionReportRequiredInformation               (UObjectWrapper)

void Aba_QuestMarker_C::Test(class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const struct FMissionReportRequiredInformation& K2Node_MakeStruct_MissionReportRequiredInformation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_QuestMarker_C", "test");

	Params::Aba_QuestMarker_C_Test_Params Parms{};

	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.K2Node_MakeStruct_MissionReportRequiredInformation = K2Node_MakeStruct_MissionReportRequiredInformation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_QuestMarker.ba_QuestMarker_C.AssignEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*                  ChosenTable                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDataTable*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor, UObjectWrapper)
// class UDataTable*                  K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_1                           (NoDestructor, UObjectWrapper)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_QuestMarker_C::AssignEvent(class UDataTable* ChosenTable, bool Temp_bool_Variable, class UDataTable* Temp_object_Variable, class UDataTable* Temp_object_Variable_1, bool Temp_bool_Variable_1, class FName Temp_name_Variable, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, class FName K2Node_Select_Default, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class UDataTable* K2Node_Select_Default_1, class UDataTable* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_QuestMarker_C", "AssignEvent");

	Params::Aba_QuestMarker_C_AssignEvent_Params Parms{};

	Parms.ChosenTable = ChosenTable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableRowHandle_1 = K2Node_MakeStruct_DataTableRowHandle_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_QuestMarker.ba_QuestMarker_C.EnableMapMarker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_MinimapTag_C*            CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_QuestMarker_C::EnableMapMarker(class Abp_MinimapTag_C* CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_QuestMarker_C", "EnableMapMarker");

	Params::Aba_QuestMarker_C_EnableMapMarker_Params Parms{};

	Parms.CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag = CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_QuestMarker.ba_QuestMarker_C.SetResolveAble
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Resolveable                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_QuestMarker_C::SetResolveAble(bool Resolveable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_QuestMarker_C", "SetResolveAble");

	Params::Aba_QuestMarker_C_SetResolveAble_Params Parms{};

	Parms.Resolveable = Resolveable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_QuestMarker.ba_QuestMarker_C.GetMinimapTagChildActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class Abp_MinimapTag_C*            AsBp_Minimap_Tag                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_MinimapTag_C*            K2Node_DynamicCast_AsBp_Minimap_Tag                              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_QuestMarker_C::GetMinimapTagChildActor(class Abp_MinimapTag_C** AsBp_Minimap_Tag, class Abp_MinimapTag_C* K2Node_DynamicCast_AsBp_Minimap_Tag, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_QuestMarker_C", "GetMinimapTagChildActor");

	Params::Aba_QuestMarker_C_GetMinimapTagChildActor_Params Parms{};

	Parms.K2Node_DynamicCast_AsBp_Minimap_Tag = K2Node_DynamicCast_AsBp_Minimap_Tag;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsBp_Minimap_Tag != nullptr)
		*AsBp_Minimap_Tag = Parms.AsBp_Minimap_Tag;

}


// Function ba_QuestMarker.ba_QuestMarker_C.Get_XP_Value
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Amount                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_StandardXPRewards       CallFunc_GetDataTableRowFromName_OutRow                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_QuestMarker_C::Get_XP_Value(float* Amount, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FSt_StandardXPRewards& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_QuestMarker_C", "Get_XP_Value");

	Params::Aba_QuestMarker_C_Get_XP_Value_Params Parms{};

	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Amount != nullptr)
		*Amount = Parms.Amount;

}


// Function ba_QuestMarker.ba_QuestMarker_C.FindEventForCurrentSublevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SelectedEvent                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        IteratedEventName                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        LevelName                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventInfoInput             CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDataTable*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestInfoInput             CallFunc_GetDataTableRowFromName_OutRow_1                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor, UObjectWrapper)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventsOR                   CallFunc_Array_Get_Item_1                                        (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventInfo                  CallFunc_Array_Get_Item_2                                        (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_1                           (NoDestructor, UObjectWrapper)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames_1                      (ReferenceParm)
// class FName                        CallFunc_GetLevelFromActor_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_QuestMarker_C::FindEventForCurrentSublevel(class FName SelectedEvent, class FName IteratedEventName, class FName LevelName, class UDataTable* Temp_object_Variable, class UDataTable* Temp_object_Variable_1, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, class UDataTable* Temp_object_Variable_2, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, const struct FEventInfoInput& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UDataTable* K2Node_Select_Default, class UDataTable* Temp_object_Variable_3, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, class UDataTable* K2Node_Select_Default_1, const struct FQuestInfoInput& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, int32 CallFunc_Array_Length_ReturnValue, const struct FEventsOR& CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FEventInfo& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1, bool CallFunc_NotEqual_NameName_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames_1, class FName CallFunc_GetLevelFromActor_ReturnValue, class FName CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_QuestMarker_C", "FindEventForCurrentSublevel");

	Params::Aba_QuestMarker_C_FindEventForCurrentSublevel_Params Parms{};

	Parms.SelectedEvent = SelectedEvent;
	Parms.IteratedEventName = IteratedEventName;
	Parms.LevelName = LevelName;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableRowHandle_1 = K2Node_MakeStruct_DataTableRowHandle_1;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames_1 = CallFunc_GetDataTableRowNames_OutRowNames_1;
	Parms.CallFunc_GetLevelFromActor_ReturnValue = CallFunc_GetLevelFromActor_ReturnValue;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_QuestMarker.ba_QuestMarker_C.AssignMapMarkerTagAndImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetImageForUnlockvania_Inventory_Image                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_MinimapTag_C*            CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         CallFunc_GetReportIdForQuest_OutputReport                        (NoDestructor)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<float>                      K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_Dictionary              CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor, UObjectWrapper)
// struct FDataTableRowHandle         K2Node_Select_Default_3                                          (NoDestructor)
// struct FDataTableRowHandle         K2Node_Select_Default_4                                          (NoDestructor, UObjectWrapper)
// TArray<struct FDataTableRowHandle> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FString                      CallFunc_Impart_standard_expressions_Result                      (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void Aba_QuestMarker_C::AssignMapMarkerTagAndImage(class FName Temp_name_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, bool Temp_bool_Variable_2, const class FString& CallFunc_GetObjectName_ReturnValue, bool Temp_bool_Variable_3, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UTexture2D* CallFunc_GetImageForUnlockvania_Inventory_Image, class FName K2Node_Select_Default, class Abp_MinimapTag_C* CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag, const struct FDataTableRowHandle& CallFunc_GetReportIdForQuest_OutputReport, bool Temp_bool_Variable_4, TArray<float>& K2Node_MakeArray_Array, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FSt_Dictionary& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FName K2Node_Select_Default_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UTexture2D* K2Node_Select_Default_2, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, const struct FDataTableRowHandle& K2Node_Select_Default_3, const struct FDataTableRowHandle& K2Node_Select_Default_4, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array_1, const class FString& CallFunc_Impart_standard_expressions_Result, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_QuestMarker_C", "AssignMapMarkerTagAndImage");

	Params::Aba_QuestMarker_C_AssignMapMarkerTagAndImage_Params Parms{};

	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_GetObjectName_ReturnValue = CallFunc_GetObjectName_ReturnValue;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetImageForUnlockvania_Inventory_Image = CallFunc_GetImageForUnlockvania_Inventory_Image;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag = CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag;
	Parms.CallFunc_GetReportIdForQuest_OutputReport = CallFunc_GetReportIdForQuest_OutputReport;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Impart_standard_expressions_Result = CallFunc_Impart_standard_expressions_Result;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_QuestMarker.ba_QuestMarker_C.FinishQuestOrEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMissionReportRequiredInformationK2Node_MakeStruct_MissionReportRequiredInformation               (UObjectWrapper)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<enum class EEventMap, struct FActiveQuestInfo>CallFunc_GetActiveQuests_ReturnValue                             (None)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveQuestInfo            CallFunc_Map_Find_Value                                          (NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_GetActiveEventsV2_ReturnValue                           (ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinishEvent_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinishQuest_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void Aba_QuestMarker_C::FinishQuestOrEvent(bool Temp_bool_Variable, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const struct FMissionReportRequiredInformation& K2Node_MakeStruct_MissionReportRequiredInformation, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, TMap<enum class EEventMap, struct FActiveQuestInfo> CallFunc_GetActiveQuests_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, const struct FActiveQuestInfo& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<class FName>& CallFunc_GetActiveEventsV2_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool K2Node_Select_Default, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_3, bool CallFunc_FinishEvent_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_4, bool CallFunc_FinishQuest_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_QuestMarker_C", "FinishQuestOrEvent");

	Params::Aba_QuestMarker_C_FinishQuestOrEvent_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.K2Node_MakeStruct_MissionReportRequiredInformation = K2Node_MakeStruct_MissionReportRequiredInformation;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_GetActiveQuests_ReturnValue = CallFunc_GetActiveQuests_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_2 = CallFunc_GetCGGameInstance_AsCGGame_Instance_2;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetActiveEventsV2_ReturnValue = CallFunc_GetActiveEventsV2_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_3 = CallFunc_GetCGGameInstance_AsCGGame_Instance_3;
	Parms.CallFunc_FinishEvent_ReturnValue = CallFunc_FinishEvent_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_4 = CallFunc_GetCGGameInstance_AsCGGame_Instance_4;
	Parms.CallFunc_FinishQuest_ReturnValue = CallFunc_FinishQuest_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_QuestMarker.ba_QuestMarker_C.DisableMapMarker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_MinimapTag_C*            CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_QuestMarker_C::DisableMapMarker(class Abp_MinimapTag_C* CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_QuestMarker_C", "DisableMapMarker");

	Params::Aba_QuestMarker_C_DisableMapMarker_Params Parms{};

	Parms.CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag = CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_QuestMarker.ba_QuestMarker_C.Resolve
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EMissionResult          ResultForQuest                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              RecievedXp                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_QuestType          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_13                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_14                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_15                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_16                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_17                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_18                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_19                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_20                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_21                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_22                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_23                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_24                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_25                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_26                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_27                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_28                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_29                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_30                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_31                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_44CAD62043915FFE2E5EF894CD12228B_Variable              (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_44CAD62043915FFE2E5EF894CD12228B_Variable_1            (ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor, UObjectWrapper)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_1                           (NoDestructor, UObjectWrapper)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInPIE_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_PermanentDataGetValue_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_WasPersonDiscovered_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_QuestMarker_C::Resolve(enum class EMissionResult ResultForQuest, float RecievedXp, enum class Enum_QuestType Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, bool Temp_bool_Variable_8, bool Temp_bool_Variable_9, bool Temp_bool_Variable_10, bool Temp_bool_Variable_11, bool Temp_bool_Variable_12, bool Temp_bool_Variable_13, bool Temp_bool_Variable_14, bool Temp_bool_Variable_15, bool Temp_bool_Variable_16, bool Temp_bool_Variable_17, bool Temp_bool_Variable_18, bool Temp_bool_Variable_19, bool Temp_bool_Variable_20, bool Temp_bool_Variable_21, bool Temp_bool_Variable_22, bool Temp_bool_Variable_23, bool Temp_bool_Variable_24, bool Temp_bool_Variable_25, bool Temp_bool_Variable_26, bool Temp_bool_Variable_27, bool Temp_bool_Variable_28, bool Temp_bool_Variable_29, bool Temp_bool_Variable_30, bool Temp_bool_Variable_31, bool Temp_bool_44CAD62043915FFE2E5EF894CD12228B_Variable, bool Temp_bool_44CAD62043915FFE2E5EF894CD12228B_Variable_1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool CallFunc_IsInPIE_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_PermanentDataGetValue_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, bool CallFunc_WasPersonDiscovered_ReturnValue, bool K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_QuestMarker_C", "Resolve");

	Params::Aba_QuestMarker_C_Resolve_Params Parms{};

	Parms.ResultForQuest = ResultForQuest;
	Parms.RecievedXp = RecievedXp;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.Temp_bool_Variable_8 = Temp_bool_Variable_8;
	Parms.Temp_bool_Variable_9 = Temp_bool_Variable_9;
	Parms.Temp_bool_Variable_10 = Temp_bool_Variable_10;
	Parms.Temp_bool_Variable_11 = Temp_bool_Variable_11;
	Parms.Temp_bool_Variable_12 = Temp_bool_Variable_12;
	Parms.Temp_bool_Variable_13 = Temp_bool_Variable_13;
	Parms.Temp_bool_Variable_14 = Temp_bool_Variable_14;
	Parms.Temp_bool_Variable_15 = Temp_bool_Variable_15;
	Parms.Temp_bool_Variable_16 = Temp_bool_Variable_16;
	Parms.Temp_bool_Variable_17 = Temp_bool_Variable_17;
	Parms.Temp_bool_Variable_18 = Temp_bool_Variable_18;
	Parms.Temp_bool_Variable_19 = Temp_bool_Variable_19;
	Parms.Temp_bool_Variable_20 = Temp_bool_Variable_20;
	Parms.Temp_bool_Variable_21 = Temp_bool_Variable_21;
	Parms.Temp_bool_Variable_22 = Temp_bool_Variable_22;
	Parms.Temp_bool_Variable_23 = Temp_bool_Variable_23;
	Parms.Temp_bool_Variable_24 = Temp_bool_Variable_24;
	Parms.Temp_bool_Variable_25 = Temp_bool_Variable_25;
	Parms.Temp_bool_Variable_26 = Temp_bool_Variable_26;
	Parms.Temp_bool_Variable_27 = Temp_bool_Variable_27;
	Parms.Temp_bool_Variable_28 = Temp_bool_Variable_28;
	Parms.Temp_bool_Variable_29 = Temp_bool_Variable_29;
	Parms.Temp_bool_Variable_30 = Temp_bool_Variable_30;
	Parms.Temp_bool_Variable_31 = Temp_bool_Variable_31;
	Parms.Temp_bool_44CAD62043915FFE2E5EF894CD12228B_Variable = Temp_bool_44CAD62043915FFE2E5EF894CD12228B_Variable;
	Parms.Temp_bool_44CAD62043915FFE2E5EF894CD12228B_Variable_1 = Temp_bool_44CAD62043915FFE2E5EF894CD12228B_Variable_1;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_MakeStruct_DataTableRowHandle_1 = K2Node_MakeStruct_DataTableRowHandle_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_IsInPIE_ReturnValue = CallFunc_IsInPIE_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_PermanentDataGetValue_ReturnValue = CallFunc_PermanentDataGetValue_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_WasPersonDiscovered_ReturnValue = CallFunc_WasPersonDiscovered_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_QuestMarker.ba_QuestMarker_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*                  ChosenTable                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_QuestType          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_13                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_14                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_15                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_16                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_17                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_18                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_19                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_20                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_21                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_22                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_23                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_24                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_25                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_26                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_27                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_28                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_29                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_30                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_31                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_32                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetRelativeTransform_ReturnValue                        (IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor, UObjectWrapper)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_QuestMarker_C::UserConstructionScript(class UDataTable* ChosenTable, enum class Enum_QuestType Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, bool Temp_bool_Variable_8, bool Temp_bool_Variable_9, bool Temp_bool_Variable_10, bool Temp_bool_Variable_11, bool Temp_bool_Variable_12, bool Temp_bool_Variable_13, bool Temp_bool_Variable_14, bool Temp_bool_Variable_15, bool Temp_bool_Variable_16, bool Temp_bool_Variable_17, bool Temp_bool_Variable_18, bool Temp_bool_Variable_19, bool Temp_bool_Variable_20, bool Temp_bool_Variable_21, bool Temp_bool_Variable_22, bool Temp_bool_Variable_23, bool Temp_bool_Variable_24, bool Temp_bool_Variable_25, bool Temp_bool_Variable_26, bool Temp_bool_Variable_27, bool Temp_bool_Variable_28, bool Temp_bool_Variable_29, bool Temp_bool_Variable_30, bool Temp_bool_Variable_31, bool Temp_bool_Variable_32, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, bool K2Node_Select_Default, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_QuestMarker_C", "UserConstructionScript");

	Params::Aba_QuestMarker_C_UserConstructionScript_Params Parms{};

	Parms.ChosenTable = ChosenTable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.Temp_bool_Variable_8 = Temp_bool_Variable_8;
	Parms.Temp_bool_Variable_9 = Temp_bool_Variable_9;
	Parms.Temp_bool_Variable_10 = Temp_bool_Variable_10;
	Parms.Temp_bool_Variable_11 = Temp_bool_Variable_11;
	Parms.Temp_bool_Variable_12 = Temp_bool_Variable_12;
	Parms.Temp_bool_Variable_13 = Temp_bool_Variable_13;
	Parms.Temp_bool_Variable_14 = Temp_bool_Variable_14;
	Parms.Temp_bool_Variable_15 = Temp_bool_Variable_15;
	Parms.Temp_bool_Variable_16 = Temp_bool_Variable_16;
	Parms.Temp_bool_Variable_17 = Temp_bool_Variable_17;
	Parms.Temp_bool_Variable_18 = Temp_bool_Variable_18;
	Parms.Temp_bool_Variable_19 = Temp_bool_Variable_19;
	Parms.Temp_bool_Variable_20 = Temp_bool_Variable_20;
	Parms.Temp_bool_Variable_21 = Temp_bool_Variable_21;
	Parms.Temp_bool_Variable_22 = Temp_bool_Variable_22;
	Parms.Temp_bool_Variable_23 = Temp_bool_Variable_23;
	Parms.Temp_bool_Variable_24 = Temp_bool_Variable_24;
	Parms.Temp_bool_Variable_25 = Temp_bool_Variable_25;
	Parms.Temp_bool_Variable_26 = Temp_bool_Variable_26;
	Parms.Temp_bool_Variable_27 = Temp_bool_Variable_27;
	Parms.Temp_bool_Variable_28 = Temp_bool_Variable_28;
	Parms.Temp_bool_Variable_29 = Temp_bool_Variable_29;
	Parms.Temp_bool_Variable_30 = Temp_bool_Variable_30;
	Parms.Temp_bool_Variable_31 = Temp_bool_Variable_31;
	Parms.Temp_bool_Variable_32 = Temp_bool_Variable_32;
	Parms.CallFunc_GetRelativeTransform_ReturnValue = CallFunc_GetRelativeTransform_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_QuestMarker.ba_QuestMarker_C.LoadingFinished
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_QuestMarker_C::LoadingFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_QuestMarker_C", "LoadingFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_QuestMarker.ba_QuestMarker_C.PrepareDataForSave
// (Event, Public, BlueprintEvent)
// Parameters:

void Aba_QuestMarker_C::PrepareDataForSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_QuestMarker_C", "PrepareDataForSave");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_QuestMarker.ba_QuestMarker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void Aba_QuestMarker_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_QuestMarker_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_QuestMarker.ba_QuestMarker_C.OnSecretRevealed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_QuestMarker_C::OnSecretRevealed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_QuestMarker_C", "OnSecretRevealed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_QuestMarker.ba_QuestMarker_C.Initialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_QuestMarker_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_QuestMarker_C", "Initialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_QuestMarker.ba_QuestMarker_C.FirstQuestFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_QuestMarker_C::FirstQuestFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_QuestMarker_C", "FirstQuestFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_QuestMarker.ba_QuestMarker_C.Debug
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_QuestMarker_C::Debug()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_QuestMarker_C", "Debug");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_QuestMarker.ba_QuestMarker_C.Return
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_QuestMarker_C::Return()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_QuestMarker_C", "Return");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_QuestMarker.ba_QuestMarker_C.Move minimap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

void Aba_QuestMarker_C::Move_minimap(const struct FTransform& NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_QuestMarker_C", "Move minimap");

	Params::Aba_QuestMarker_C_Move_minimap_Params Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_QuestMarker.ba_QuestMarker_C.ExecuteUbergraph_ba_QuestMarker
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_MinimapTag_C*            CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_MinimapTag_C*            CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_MinimapTag_C*            CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_MinimapTag_C*            CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Abp_MinimapTag_C*            CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_4              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Abp_MinimapTag_C*            CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_5              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_MinimapTag_C*            CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_6              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_MinimapTag_C*            CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_7              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_MinimapTag_C*            CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_8              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_MinimapTag_C*            CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_9              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentPersistantLevel_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEventMap               CallFunc_GetMapEnumByName_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_MinimapTag_C*            CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_10             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_MinimapTag_C*            CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_11             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Abp_MinimapTag_C*            CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_12             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Abp_MinimapTag_C*            CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_13             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FTransform                  K2Node_CustomEvent_NewParam                                      (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldTransform_SweepHitResult_1                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult_1                (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void Aba_QuestMarker_C::ExecuteUbergraph_ba_QuestMarker(int32 EntryPoint, class Abp_MinimapTag_C* CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag, class Abp_MinimapTag_C* CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_1, class Abp_MinimapTag_C* CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_2, class Abp_MinimapTag_C* CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_3, bool CallFunc_Not_PreBool_ReturnValue, class Abp_MinimapTag_C* CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_4, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool Temp_bool_IsClosed_Variable, bool CallFunc_Not_PreBool_ReturnValue_2, bool Temp_bool_Has_Been_Initd_Variable, class Abp_MinimapTag_C* CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_5, class Abp_MinimapTag_C* CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_6, class Abp_MinimapTag_C* CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_7, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class UClass* CallFunc_GetObjectClass_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, class Abp_MinimapTag_C* CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_8, class Abp_MinimapTag_C* CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, class FName CallFunc_GetCurrentPersistantLevel_ReturnValue, enum class EEventMap CallFunc_GetMapEnumByName_ReturnValue, class Abp_MinimapTag_C* CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_10, class Abp_MinimapTag_C* CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_11, class Abp_MinimapTag_C* CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_12, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_3, class Abp_MinimapTag_C* CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_13, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, const struct FTransform& K2Node_CustomEvent_NewParam, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult_1, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_QuestMarker_C", "ExecuteUbergraph_ba_QuestMarker");

	Params::Aba_QuestMarker_C_ExecuteUbergraph_ba_QuestMarker_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag = CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag;
	Parms.CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_1 = CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_1;
	Parms.CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_2 = CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_2;
	Parms.CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_3 = CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_3;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_4 = CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_4;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_5 = CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_5;
	Parms.CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_6 = CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_6;
	Parms.CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_7 = CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_7;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_8 = CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_8;
	Parms.CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_9 = CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_9;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_2 = CallFunc_GetCGGameInstance_AsCGGame_Instance_2;
	Parms.CallFunc_GetCurrentPersistantLevel_ReturnValue = CallFunc_GetCurrentPersistantLevel_ReturnValue;
	Parms.CallFunc_GetMapEnumByName_ReturnValue = CallFunc_GetMapEnumByName_ReturnValue;
	Parms.CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_10 = CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_10;
	Parms.CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_11 = CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_11;
	Parms.CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_12 = CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_12;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_13 = CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag_13;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult = CallFunc_K2_SetWorldTransform_SweepHitResult;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult = CallFunc_K2_SetRelativeTransform_SweepHitResult;
	Parms.K2Node_CustomEvent_NewParam = K2Node_CustomEvent_NewParam;
	Parms.CallFunc_K2_SetWorldTransform_SweepHitResult_1 = CallFunc_K2_SetWorldTransform_SweepHitResult_1;
	Parms.CallFunc_K2_SetRelativeTransform_SweepHitResult_1 = CallFunc_K2_SetRelativeTransform_SweepHitResult_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_QuestMarker.ba_QuestMarker_C.OnResolved__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_QuestMarker_C::OnResolved__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_QuestMarker_C", "OnResolved__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


