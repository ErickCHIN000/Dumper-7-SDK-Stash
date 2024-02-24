#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_DB_Shard_Screen.WBP_DB_Shard_Screen_C
// (None)

class UClass* UWBP_DB_Shard_Screen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_DB_Shard_Screen_C");

	return Clss;
}


// WBP_DB_Shard_Screen_C WBP_DB_Shard_Screen.Default__WBP_DB_Shard_Screen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_DB_Shard_Screen_C* UWBP_DB_Shard_Screen_C::GetDefaultObj()
{
	static class UWBP_DB_Shard_Screen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_DB_Shard_Screen_C*>(UWBP_DB_Shard_Screen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_DB_Shard_Screen.WBP_DB_Shard_Screen_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_DB_Shard_Screen_C::BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Shard_Screen_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_DB_Shard_Screen_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_DB_Shard_Screen.WBP_DB_Shard_Screen_C.supportPermissions_ToolTipWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class UWBP_GenericTooltip_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_DB_Shard_Screen_C::SupportPermissions_ToolTipWidget(class FText Temp_text_Variable, class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Shard_Screen_C", "supportPermissions_ToolTipWidget");

	Params::UWBP_DB_Shard_Screen_C_SupportPermissions_ToolTipWidget_Params Parms{};

	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_DB_Shard_Screen.WBP_DB_Shard_Screen_C.IsPreflightShard
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      Shard                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               IsPreflight                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StartsWith_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Shard_Screen_C::IsPreflightShard(const class FString& Shard, bool* IsPreflight, bool CallFunc_StartsWith_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Shard_Screen_C", "IsPreflightShard");

	Params::UWBP_DB_Shard_Screen_C_IsPreflightShard_Params Parms{};

	Parms.Shard = Shard;
	Parms.CallFunc_StartsWith_ReturnValue = CallFunc_StartsWith_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsPreflight != nullptr)
		*IsPreflight = Parms.IsPreflight;

}


// Function WBP_DB_Shard_Screen.WBP_DB_Shard_Screen_C.GetPreflightShards
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              FilteredShards                                                   (Parm, OutParm)
// TArray<class FString>              LocalFilteredShards                                              (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPreflightShard_IsPreflight                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Shard_Screen_C::GetPreflightShards(TArray<class FString>* FilteredShards, const TArray<class FString>& LocalFilteredShards, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_IsPreflightShard_IsPreflight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Shard_Screen_C", "GetPreflightShards");

	Params::UWBP_DB_Shard_Screen_C_GetPreflightShards_Params Parms{};

	Parms.LocalFilteredShards = LocalFilteredShards;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_IsPreflightShard_IsPreflight = CallFunc_IsPreflightShard_IsPreflight;

	UObject::ProcessEvent(Func, &Parms);

	if (FilteredShards != nullptr)
		*FilteredShards = std::move(Parms.FilteredShards);

}


// Function WBP_DB_Shard_Screen.WBP_DB_Shard_Screen_C.IsHourlyShard
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      Shard                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               IsHourly                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StartsWith_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Shard_Screen_C::IsHourlyShard(const class FString& Shard, bool* IsHourly, bool CallFunc_StartsWith_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Shard_Screen_C", "IsHourlyShard");

	Params::UWBP_DB_Shard_Screen_C_IsHourlyShard_Params Parms{};

	Parms.Shard = Shard;
	Parms.CallFunc_StartsWith_ReturnValue = CallFunc_StartsWith_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsHourly != nullptr)
		*IsHourly = Parms.IsHourly;

}


// Function WBP_DB_Shard_Screen.WBP_DB_Shard_Screen_C.GetHourlyShards
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              FilteredShards                                                   (Parm, OutParm)
// TArray<class FString>              LocalFilteredShards                                              (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHourlyShard_IsHourly                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Shard_Screen_C::GetHourlyShards(TArray<class FString>* FilteredShards, const TArray<class FString>& LocalFilteredShards, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsHourlyShard_IsHourly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Shard_Screen_C", "GetHourlyShards");

	Params::UWBP_DB_Shard_Screen_C_GetHourlyShards_Params Parms{};

	Parms.LocalFilteredShards = LocalFilteredShards;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsHourlyShard_IsHourly = CallFunc_IsHourlyShard_IsHourly;

	UObject::ProcessEvent(Func, &Parms);

	if (FilteredShards != nullptr)
		*FilteredShards = std::move(Parms.FilteredShards);

}


// Function WBP_DB_Shard_Screen.WBP_DB_Shard_Screen_C.IsNightlyShard
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      Shard                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               IsNightly                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StartsWith_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Shard_Screen_C::IsNightlyShard(const class FString& Shard, bool* IsNightly, bool CallFunc_StartsWith_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Shard_Screen_C", "IsNightlyShard");

	Params::UWBP_DB_Shard_Screen_C_IsNightlyShard_Params Parms{};

	Parms.Shard = Shard;
	Parms.CallFunc_StartsWith_ReturnValue = CallFunc_StartsWith_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsNightly != nullptr)
		*IsNightly = Parms.IsNightly;

}


// Function WBP_DB_Shard_Screen.WBP_DB_Shard_Screen_C.GetNightlyShards
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              FilteredShards                                                   (Parm, OutParm)
// TArray<class FString>              LocalFilteredShards                                              (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNightlyShard_IsNightly                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Shard_Screen_C::GetNightlyShards(TArray<class FString>* FilteredShards, const TArray<class FString>& LocalFilteredShards, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsNightlyShard_IsNightly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Shard_Screen_C", "GetNightlyShards");

	Params::UWBP_DB_Shard_Screen_C_GetNightlyShards_Params Parms{};

	Parms.LocalFilteredShards = LocalFilteredShards;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsNightlyShard_IsNightly = CallFunc_IsNightlyShard_IsNightly;

	UObject::ProcessEvent(Func, &Parms);

	if (FilteredShards != nullptr)
		*FilteredShards = std::move(Parms.FilteredShards);

}


// Function WBP_DB_Shard_Screen.WBP_DB_Shard_Screen_C.SortShardList
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              ShardList                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class FString>              SortedShardList                                                  (Parm, OutParm)
// class FString                      LoopCurrentShard                                                 (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              LocalOtherShards                                                 (Edit, BlueprintVisible)
// TArray<class FString>              LocalPreflightShards                                             (Edit, BlueprintVisible)
// TArray<class FString>              LocalHourlyShards                                                (Edit, BlueprintVisible)
// TArray<class FString>              LocalNightlyShards                                               (Edit, BlueprintVisible)
// TArray<class FString>              LocalSortedShardList                                             (Edit, BlueprintVisible)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_DecreasingStringSort_ReturnValue                        (ReferenceParm)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPreflightShard_IsPreflight                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHourlyShard_IsHourly                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNightlyShard_IsNightly                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_DecreasingStringSort_ReturnValue_1                      (ReferenceParm)
// TArray<class FString>              CallFunc_DecreasingStringSort_ReturnValue_2                      (ReferenceParm)
// TArray<class FString>              CallFunc_DecreasingStringSort_ReturnValue_3                      (ReferenceParm)

void UWBP_DB_Shard_Screen_C::SortShardList(TArray<class FString>& ShardList, TArray<class FString>* SortedShardList, const class FString& LoopCurrentShard, const TArray<class FString>& LocalOtherShards, const TArray<class FString>& LocalPreflightShards, const TArray<class FString>& LocalHourlyShards, const TArray<class FString>& LocalNightlyShards, const TArray<class FString>& LocalSortedShardList, int32 CallFunc_Array_Length_ReturnValue, TArray<class FString>& CallFunc_DecreasingStringSort_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_IsPreflightShard_IsPreflight, int32 CallFunc_Array_AddUnique_ReturnValue_1, bool CallFunc_IsHourlyShard_IsHourly, int32 CallFunc_Array_AddUnique_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsNightlyShard_IsNightly, const class FString& CallFunc_Array_Get_Item, TArray<class FString>& CallFunc_DecreasingStringSort_ReturnValue_1, TArray<class FString>& CallFunc_DecreasingStringSort_ReturnValue_2, TArray<class FString>& CallFunc_DecreasingStringSort_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Shard_Screen_C", "SortShardList");

	Params::UWBP_DB_Shard_Screen_C_SortShardList_Params Parms{};

	Parms.ShardList = ShardList;
	Parms.LoopCurrentShard = LoopCurrentShard;
	Parms.LocalOtherShards = LocalOtherShards;
	Parms.LocalPreflightShards = LocalPreflightShards;
	Parms.LocalHourlyShards = LocalHourlyShards;
	Parms.LocalNightlyShards = LocalNightlyShards;
	Parms.LocalSortedShardList = LocalSortedShardList;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_DecreasingStringSort_ReturnValue = CallFunc_DecreasingStringSort_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_IsPreflightShard_IsPreflight = CallFunc_IsPreflightShard_IsPreflight;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;
	Parms.CallFunc_IsHourlyShard_IsHourly = CallFunc_IsHourlyShard_IsHourly;
	Parms.CallFunc_Array_AddUnique_ReturnValue_2 = CallFunc_Array_AddUnique_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue_3 = CallFunc_Array_AddUnique_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsNightlyShard_IsNightly = CallFunc_IsNightlyShard_IsNightly;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_DecreasingStringSort_ReturnValue_1 = CallFunc_DecreasingStringSort_ReturnValue_1;
	Parms.CallFunc_DecreasingStringSort_ReturnValue_2 = CallFunc_DecreasingStringSort_ReturnValue_2;
	Parms.CallFunc_DecreasingStringSort_ReturnValue_3 = CallFunc_DecreasingStringSort_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (SortedShardList != nullptr)
		*SortedShardList = std::move(Parms.SortedShardList);

}


// Function WBP_DB_Shard_Screen.WBP_DB_Shard_Screen_C.RefreshShardList
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              FilteredShardList                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetShardNameForID_ShardName                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_DB_Shard_sw_ListEntry_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Shard_Screen_C::RefreshShardList(TArray<class FString>& FilteredShardList, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Array_Get_Item, const class FString& CallFunc_GetShardNameForID_ShardName, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWBP_DB_Shard_sw_ListEntry_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Shard_Screen_C", "RefreshShardList");

	Params::UWBP_DB_Shard_Screen_C_RefreshShardList_Params Parms{};

	Parms.FilteredShardList = FilteredShardList;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetShardNameForID_ShardName = CallFunc_GetShardNameForID_ShardName;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Shard_Screen.WBP_DB_Shard_Screen_C.OnShardSelected
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Shard                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_DB_Shard_Screen_C::OnShardSelected(const class FString& Shard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Shard_Screen_C", "OnShardSelected");

	Params::UWBP_DB_Shard_Screen_C_OnShardSelected_Params Parms{};

	Parms.Shard = Shard;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Shard_Screen.WBP_DB_Shard_Screen_C.FocusDefaultWidget
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Shard_Screen_C::FocusDefaultWidget(class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Shard_Screen_C", "FocusDefaultWidget");

	Params::UWBP_DB_Shard_Screen_C_FocusDefaultWidget_Params Parms{};

	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Shard_Screen.WBP_DB_Shard_Screen_C.UsingGamepadChangedHandler
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UsingGamepad                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Shard_Screen_C::UsingGamepadChangedHandler(bool UsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Shard_Screen_C", "UsingGamepadChangedHandler");

	Params::UWBP_DB_Shard_Screen_C_UsingGamepadChangedHandler_Params Parms{};

	Parms.UsingGamepad = UsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Shard_Screen.WBP_DB_Shard_Screen_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UWBP_DB_Shard_Screen_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Shard_Screen_C", "OnFocusReceived");

	Params::UWBP_DB_Shard_Screen_C_OnFocusReceived_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_DB_Shard_Screen.WBP_DB_Shard_Screen_C.GetShardNameForID
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      ShardId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      ShardName                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Shard_Screen_C::GetShardNameForID(const class FString& ShardId, class FString* ShardName, bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Shard_Screen_C", "GetShardNameForID");

	Params::UWBP_DB_Shard_Screen_C_GetShardNameForID_Params Parms{};

	Parms.ShardId = ShardId;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (ShardName != nullptr)
		*ShardName = std::move(Parms.ShardName);

}


// Function WBP_DB_Shard_Screen.WBP_DB_Shard_Screen_C.BndEvt__BU_Cancel_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_DB_Shard_Screen_C::BndEvt__BU_Cancel_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Shard_Screen_C", "BndEvt__BU_Cancel_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Shard_Screen.WBP_DB_Shard_Screen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_DB_Shard_Screen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Shard_Screen_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Shard_Screen.WBP_DB_Shard_Screen_C.InputCancelPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_DB_Shard_Screen_C::InputCancelPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Shard_Screen_C", "InputCancelPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Shard_Screen.WBP_DB_Shard_Screen_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_DB_Shard_Screen_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Shard_Screen_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Shard_Screen.WBP_DB_Shard_Screen_C.BndEvt__WBP_ShardSelect_TAB_ShardFilters_K2Node_ComponentBoundEvent_5_TabSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        SelectedTabName                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              ActiveTab                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Shard_Screen_C::BndEvt__WBP_ShardSelect_TAB_ShardFilters_K2Node_ComponentBoundEvent_5_TabSelected__DelegateSignature(class FText SelectedTabName, int32 ActiveTab)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Shard_Screen_C", "BndEvt__WBP_ShardSelect_TAB_ShardFilters_K2Node_ComponentBoundEvent_5_TabSelected__DelegateSignature");

	Params::UWBP_DB_Shard_Screen_C_BndEvt__WBP_ShardSelect_TAB_ShardFilters_K2Node_ComponentBoundEvent_5_TabSelected__DelegateSignature_Params Parms{};

	Parms.SelectedTabName = SelectedTabName;
	Parms.ActiveTab = ActiveTab;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Shard_Screen.WBP_DB_Shard_Screen_C.OnUsingGamepadChanged_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Shard_Screen_C::OnUsingGamepadChanged_1(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Shard_Screen_C", "OnUsingGamepadChanged_1");

	Params::UWBP_DB_Shard_Screen_C_OnUsingGamepadChanged_1_Params Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Shard_Screen.WBP_DB_Shard_Screen_C.BndEvt__WBP_DB_Shard_Screen_CBU_Back_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Shard_Screen_C::BndEvt__WBP_DB_Shard_Screen_CBU_Back_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Shard_Screen_C", "BndEvt__WBP_DB_Shard_Screen_CBU_Back_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_DB_Shard_Screen_C_BndEvt__WBP_DB_Shard_Screen_CBU_Back_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Shard_Screen.WBP_DB_Shard_Screen_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_DB_Shard_Screen_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Shard_Screen_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Shard_Screen.WBP_DB_Shard_Screen_C.ExecuteUbergraph_WBP_DB_Shard_Screen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_SortShardList_SortedShardList                           (ReferenceParm)
// TArray<class FString>              CallFunc_GetNightlyShards_FilteredShards                         (ReferenceParm)
// TArray<class FString>              CallFunc_GetHourlyShards_FilteredShards                          (ReferenceParm)
// TArray<class FString>              CallFunc_GetPreflightShards_FilteredShards                       (ReferenceParm)
// class FText                        K2Node_ComponentBoundEvent_SelectedTabName                       (None)
// int32                              K2Node_ComponentBoundEvent_ActiveTab                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXUILoginSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasSupportPermissions_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bUsingGamepad                                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_UI_BoolSet_Visibility_Visible_Result                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Shard_Screen_C::ExecuteUbergraph_WBP_DB_Shard_Screen(int32 EntryPoint, TArray<class FString>& CallFunc_SortShardList_SortedShardList, TArray<class FString>& CallFunc_GetNightlyShards_FilteredShards, TArray<class FString>& CallFunc_GetHourlyShards_FilteredShards, TArray<class FString>& CallFunc_GetPreflightShards_FilteredShards, class FText K2Node_ComponentBoundEvent_SelectedTabName, int32 K2Node_ComponentBoundEvent_ActiveTab, bool K2Node_SwitchInteger_CmpSuccess, class UNWXUILoginSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasSupportPermissions_ReturnValue, bool K2Node_Event_bUsingGamepad, enum class ESlateVisibility CallFunc_UI_BoolSet_Visibility_Visible_Result, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Shard_Screen_C", "ExecuteUbergraph_WBP_DB_Shard_Screen");

	Params::UWBP_DB_Shard_Screen_C_ExecuteUbergraph_WBP_DB_Shard_Screen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SortShardList_SortedShardList = CallFunc_SortShardList_SortedShardList;
	Parms.CallFunc_GetNightlyShards_FilteredShards = CallFunc_GetNightlyShards_FilteredShards;
	Parms.CallFunc_GetHourlyShards_FilteredShards = CallFunc_GetHourlyShards_FilteredShards;
	Parms.CallFunc_GetPreflightShards_FilteredShards = CallFunc_GetPreflightShards_FilteredShards;
	Parms.K2Node_ComponentBoundEvent_SelectedTabName = K2Node_ComponentBoundEvent_SelectedTabName;
	Parms.K2Node_ComponentBoundEvent_ActiveTab = K2Node_ComponentBoundEvent_ActiveTab;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasSupportPermissions_ReturnValue = CallFunc_HasSupportPermissions_ReturnValue;
	Parms.K2Node_Event_bUsingGamepad = K2Node_Event_bUsingGamepad;
	Parms.CallFunc_UI_BoolSet_Visibility_Visible_Result = CallFunc_UI_BoolSet_Visibility_Visible_Result;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Shard_Screen.WBP_DB_Shard_Screen_C.ShardSelectCancelled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_DB_Shard_Screen_C::ShardSelectCancelled__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Shard_Screen_C", "ShardSelectCancelled__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Shard_Screen.WBP_DB_Shard_Screen_C.ShardSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Shard                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_DB_Shard_Screen_C::ShardSelected__DelegateSignature(const class FString& Shard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Shard_Screen_C", "ShardSelected__DelegateSignature");

	Params::UWBP_DB_Shard_Screen_C_ShardSelected__DelegateSignature_Params Parms{};

	Parms.Shard = Shard;

	UObject::ProcessEvent(Func, &Parms);

}

}


