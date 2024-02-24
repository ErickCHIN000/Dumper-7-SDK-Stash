#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_RoomSkillTreeOption.wid_RoomSkillTreeOption_C
// (None)

class UClass* UWid_RoomSkillTreeOption_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_RoomSkillTreeOption_C");

	return Clss;
}


// wid_RoomSkillTreeOption_C wid_RoomSkillTreeOption.Default__wid_RoomSkillTreeOption_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_RoomSkillTreeOption_C* UWid_RoomSkillTreeOption_C::GetDefaultObj()
{
	static class UWid_RoomSkillTreeOption_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_RoomSkillTreeOption_C*>(UWid_RoomSkillTreeOption_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_RoomSkillTreeOption.wid_RoomSkillTreeOption_C.CalculateReclaimValue
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FSt_ItemByEnumAndCount>Cost                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                              Percentage_Reclaimed                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Round_down_to_dividor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSt_ItemByEnumAndCount>Reclaim_value                                                    (Parm, OutParm)
// TArray<struct FSt_ItemByEnumAndCount>Result                                                           (Edit, BlueprintVisible)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_ItemByEnumAndCount      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_ItemByEnumAndCount      K2Node_MakeStruct_st_ItemByEnumAndCount                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_RoomSkillTreeOption_C::CalculateReclaimValue(TArray<struct FSt_ItemByEnumAndCount>& Cost, float Percentage_Reclaimed, float Round_down_to_dividor, TArray<struct FSt_ItemByEnumAndCount>* Reclaim_value, const TArray<struct FSt_ItemByEnumAndCount>& Result, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FSt_ItemByEnumAndCount& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, const struct FSt_ItemByEnumAndCount& K2Node_MakeStruct_st_ItemByEnumAndCount, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_RoomSkillTreeOption_C", "CalculateReclaimValue");

	Params::UWid_RoomSkillTreeOption_C_CalculateReclaimValue_Params Parms{};

	Parms.Cost = Cost;
	Parms.Percentage_Reclaimed = Percentage_Reclaimed;
	Parms.Round_down_to_dividor = Round_down_to_dividor;
	Parms.Result = Result;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.K2Node_MakeStruct_st_ItemByEnumAndCount = K2Node_MakeStruct_st_ItemByEnumAndCount;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Reclaim_value != nullptr)
		*Reclaim_value = std::move(Parms.Reclaim_value);

}


// Function wid_RoomSkillTreeOption.wid_RoomSkillTreeOption_C.SetResourcesVisiblity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        NewVisibility                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_RoomSkillTreeOption_C::SetResourcesVisiblity(enum class ESlateVisibility NewVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_RoomSkillTreeOption_C", "SetResourcesVisiblity");

	Params::UWid_RoomSkillTreeOption_C_SetResourcesVisiblity_Params Parms{};

	Parms.NewVisibility = NewVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_RoomSkillTreeOption.wid_RoomSkillTreeOption_C.GetNumAncestors
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              Level                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Counter                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_RoomSkillTreeOption_C*  TmpNode                                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_RoomSkillTreeOption_C::GetNumAncestors(int32* Level, int32 Counter, class UWid_RoomSkillTreeOption_C* TmpNode, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_RoomSkillTreeOption_C", "GetNumAncestors");

	Params::UWid_RoomSkillTreeOption_C_GetNumAncestors_Params Parms{};

	Parms.Counter = Counter;
	Parms.TmpNode = TmpNode;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_1 = CallFunc_NotEqual_ObjectObject_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Level != nullptr)
		*Level = Parms.Level;

}


// Function wid_RoomSkillTreeOption.wid_RoomSkillTreeOption_C.CanBeBought
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Can                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNumAncestors_Level                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesThePlayerHaveItems_Has_enough_items                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_RoomSkillTreeOption_C::CanBeBought(bool* Can, int32 CallFunc_GetNumAncestors_Level, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_DoesThePlayerHaveItems_Has_enough_items)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_RoomSkillTreeOption_C", "CanBeBought");

	Params::UWid_RoomSkillTreeOption_C_CanBeBought_Params Parms{};

	Parms.CallFunc_GetNumAncestors_Level = CallFunc_GetNumAncestors_Level;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_DoesThePlayerHaveItems_Has_enough_items = CallFunc_DoesThePlayerHaveItems_Has_enough_items;

	UObject::ProcessEvent(Func, &Parms);

	if (Can != nullptr)
		*Can = Parms.Can;

}


// Function wid_RoomSkillTreeOption.wid_RoomSkillTreeOption_C.GetColorAndOpacity_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (UObjectWrapper)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (UObjectWrapper)
// struct FSlateColor                 K2Node_Select_Default                                            (None)

struct FSlateColor UWid_RoomSkillTreeOption_C::GetColorAndOpacity_0(bool Temp_bool_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_RoomSkillTreeOption_C", "GetColorAndOpacity_0");

	Params::UWid_RoomSkillTreeOption_C_GetColorAndOpacity_0_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_RoomSkillTreeOption.wid_RoomSkillTreeOption_C.GetBackground_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_Select_Default                                            (None)
// struct FSlateBrush                 K2Node_Select_Default_1                                          (None)
// struct FSlateBrush                 K2Node_Select_Default_2                                          (None)
// struct FSlateBrush                 K2Node_Select_Default_3                                          (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_Select_Default_4                                          (None)
// int32                              CallFunc_GetNumAncestors_Level                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_Select_Default_5                                          (None)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_Select_Default_6                                          (None)
// struct FSlateBrush                 K2Node_Select_Default_7                                          (None)
// struct FSlateBrush                 K2Node_Select_Default_8                                          (None)

struct FSlateBrush UWid_RoomSkillTreeOption_C::GetBackground_0(bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, bool Temp_bool_Variable_8, const struct FSlateBrush& K2Node_Select_Default, const struct FSlateBrush& K2Node_Select_Default_1, const struct FSlateBrush& K2Node_Select_Default_2, const struct FSlateBrush& K2Node_Select_Default_3, int32 CallFunc_Add_IntInt_ReturnValue, const struct FSlateBrush& K2Node_Select_Default_4, int32 CallFunc_GetNumAncestors_Level, const struct FSlateBrush& K2Node_Select_Default_5, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FSlateBrush& K2Node_Select_Default_6, const struct FSlateBrush& K2Node_Select_Default_7, const struct FSlateBrush& K2Node_Select_Default_8)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_RoomSkillTreeOption_C", "GetBackground_0");

	Params::UWid_RoomSkillTreeOption_C_GetBackground_0_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.Temp_bool_Variable_8 = Temp_bool_Variable_8;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_GetNumAncestors_Level = CallFunc_GetNumAncestors_Level;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_RoomSkillTreeOption.wid_RoomSkillTreeOption_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_RoomSkillTreeOption_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_RoomSkillTreeOption_C", "PreConstruct");

	Params::UWid_RoomSkillTreeOption_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_RoomSkillTreeOption.wid_RoomSkillTreeOption_C.Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_RoomSkillTreeOption_C::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_RoomSkillTreeOption_C", "Update");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_RoomSkillTreeOption.wid_RoomSkillTreeOption_C.ExecuteUbergraph_wid_RoomSkillTreeOption
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_GetBackground_0_ReturnValue                             (None)
// struct FSlateColor                 CallFunc_GetColorAndOpacity_0_ReturnValue                        (None)
// class UWid_RoomSkillTreeOption_C*  CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSt_ItemByEnumAndCount>CallFunc_CalculateReclaimValue_Reclaim_value                     (ReferenceParm)
// bool                               CallFunc_DoesThePlayerHaveItems_Has_enough_items                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_GetBackground_0_ReturnValue_1                           (None)
// struct FSt_RoomUpgrade             CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetLevelNameFromAsset_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_RoomSkillTreeOption_C::ExecuteUbergraph_wid_RoomSkillTreeOption(int32 EntryPoint, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, bool K2Node_Event_IsDesignTime, const struct FSlateBrush& CallFunc_GetBackground_0_ReturnValue, const struct FSlateColor& CallFunc_GetColorAndOpacity_0_ReturnValue, class UWid_RoomSkillTreeOption_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TArray<struct FSt_ItemByEnumAndCount>& CallFunc_CalculateReclaimValue_Reclaim_value, bool CallFunc_DoesThePlayerHaveItems_Has_enough_items, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FSlateBrush& CallFunc_GetBackground_0_ReturnValue_1, const struct FSt_RoomUpgrade& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FName CallFunc_GetLevelNameFromAsset_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_RoomSkillTreeOption_C", "ExecuteUbergraph_wid_RoomSkillTreeOption");

	Params::UWid_RoomSkillTreeOption_C_ExecuteUbergraph_wid_RoomSkillTreeOption_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetBackground_0_ReturnValue = CallFunc_GetBackground_0_ReturnValue;
	Parms.CallFunc_GetColorAndOpacity_0_ReturnValue = CallFunc_GetColorAndOpacity_0_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_CalculateReclaimValue_Reclaim_value = CallFunc_CalculateReclaimValue_Reclaim_value;
	Parms.CallFunc_DoesThePlayerHaveItems_Has_enough_items = CallFunc_DoesThePlayerHaveItems_Has_enough_items;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetBackground_0_ReturnValue_1 = CallFunc_GetBackground_0_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetLevelNameFromAsset_ReturnValue = CallFunc_GetLevelNameFromAsset_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


