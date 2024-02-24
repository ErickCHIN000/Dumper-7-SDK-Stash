#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_BioLab_StatBox.UMG_BioLab_StatBox_C
// (None)

class UClass* UUMG_BioLab_StatBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_BioLab_StatBox_C");

	return Clss;
}


// UMG_BioLab_StatBox_C UMG_BioLab_StatBox.Default__UMG_BioLab_StatBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_BioLab_StatBox_C* UUMG_BioLab_StatBox_C::GetDefaultObj()
{
	static class UUMG_BioLab_StatBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_BioLab_StatBox_C*>(UUMG_BioLab_StatBox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_BioLab_StatBox.UMG_BioLab_StatBox_C.SetBaseItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   BaseItem                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UUMG_BioLab_StatBox_C::SetBaseItem(const struct FItemData& BaseItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_StatBox_C", "SetBaseItem");

	Params::UUMG_BioLab_StatBox_C_SetBaseItem_Params Parms{};

	Parms.BaseItem = BaseItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BioLab_StatBox.UMG_BioLab_StatBox_C.SetComparisonItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   ComparisonItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UUMG_BioLab_StatBox_C::SetComparisonItem(const struct FItemData& ComparisonItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_StatBox_C", "SetComparisonItem");

	Params::UUMG_BioLab_StatBox_C_SetComparisonItem_Params Parms{};

	Parms.ComparisonItem = ComparisonItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BioLab_StatBox.UMG_BioLab_StatBox_C.ClearComparison
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_BioLab_StatBox_C::ClearComparison()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_StatBox_C", "ClearComparison");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BioLab_StatBox.UMG_BioLab_StatBox_C.ShowComparison
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_BioLab_StatBox_C::ShowComparison()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_StatBox_C", "ShowComparison");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BioLab_StatBox.UMG_BioLab_StatBox_C.ShowBaseStats
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_BioLab_StatBox_C::ShowBaseStats()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_StatBox_C", "ShowBaseStats");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BioLab_StatBox.UMG_BioLab_StatBox_C.ExecuteUbergraph_UMG_BioLab_StatBox
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_BioLab_StatBox_Row_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   K2Node_CustomEvent_BaseItem                                      (ContainsInstancedReference)
// struct FItemData                   K2Node_CustomEvent_ComparisonItem                                (ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FStatComparisonResult>CallFunc_CompareItemStats_ComparisonResults                      (ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EDataValid              CallFunc_ItemDataValid_Paths                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<struct FStatsRowHandle, int32>CallFunc_GetStatBoxItemStats_ReturnValue                         (None)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FStatsRowHandle>     CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// struct FStatComparisonResult       CallFunc_Array_Get_Item                                          (NoDestructor)
// struct FStatsRowHandle             CallFunc_Array_Get_Item_1                                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_BioLab_StatBox_Row_C*   CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_BioLab_StatBox_C::ExecuteUbergraph_UMG_BioLab_StatBox(int32 EntryPoint, class UUMG_BioLab_StatBox_Row_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FItemData& K2Node_CustomEvent_BaseItem, const struct FItemData& K2Node_CustomEvent_ComparisonItem, int32 Temp_int_Loop_Counter_Variable_1, TArray<struct FStatComparisonResult>& CallFunc_CompareItemStats_ComparisonResults, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, enum class EDataValid CallFunc_ItemDataValid_Paths, bool K2Node_SwitchEnum_CmpSuccess, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, TMap<struct FStatsRowHandle, int32> CallFunc_GetStatBoxItemStats_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<struct FStatsRowHandle>& CallFunc_Map_Keys_Keys, const struct FStatComparisonResult& CallFunc_Array_Get_Item, const struct FStatsRowHandle& CallFunc_Array_Get_Item_1, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UUMG_BioLab_StatBox_Row_C* CallFunc_Create_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_StatBox_C", "ExecuteUbergraph_UMG_BioLab_StatBox");

	Params::UUMG_BioLab_StatBox_C_ExecuteUbergraph_UMG_BioLab_StatBox_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CustomEvent_BaseItem = K2Node_CustomEvent_BaseItem;
	Parms.K2Node_CustomEvent_ComparisonItem = K2Node_CustomEvent_ComparisonItem;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_CompareItemStats_ComparisonResults = CallFunc_CompareItemStats_ComparisonResults;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_ItemDataValid_Paths = CallFunc_ItemDataValid_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_GetStatBoxItemStats_ReturnValue = CallFunc_GetStatBoxItemStats_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue_1 = CallFunc_AddChildToVerticalBox_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


