#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_Resources.wid_Resources_C
// (None)

class UClass* UWid_Resources_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_Resources_C");

	return Clss;
}


// wid_Resources_C wid_Resources.Default__wid_Resources_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_Resources_C* UWid_Resources_C::GetDefaultObj()
{
	static class UWid_Resources_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_Resources_C*>(UWid_Resources_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_Resources.wid_Resources_C.UpdateForScrap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EResourceType           Enum                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ComparedAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsFirstItem                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_Resources_Entry_C*      CallFunc_GetResourceWidget_Widget                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EResourceType>   K2Node_MakeArray_Array                                           (ReferenceParm)
// enum class EResourceType           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Resources_Entry_C*      CallFunc_GetResourceWidget_Widget_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UpdateBorderColor_RequirementsMet                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Resources_C::UpdateForScrap(enum class EResourceType Enum, float ComparedAmount, float Amount, bool IsFirstItem, class FName RowName, bool Temp_bool_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, class UWid_Resources_Entry_C* CallFunc_GetResourceWidget_Widget, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<enum class EResourceType>& K2Node_MakeArray_Array, enum class EResourceType CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UWid_Resources_Entry_C* CallFunc_GetResourceWidget_Widget_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_UpdateBorderColor_RequirementsMet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Resources_C", "UpdateForScrap");

	Params::UWid_Resources_C_UpdateForScrap_Params Parms{};

	Parms.Enum = Enum;
	Parms.ComparedAmount = ComparedAmount;
	Parms.Amount = Amount;
	Parms.IsFirstItem = IsFirstItem;
	Parms.RowName = RowName;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetResourceWidget_Widget = CallFunc_GetResourceWidget_Widget;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetResourceWidget_Widget_1 = CallFunc_GetResourceWidget_Widget_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_UpdateBorderColor_RequirementsMet = CallFunc_UpdateBorderColor_RequirementsMet;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Resources.wid_Resources_C.CheckIfAllResourceRequirementsAreMet
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPanelWidget*                Self2                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RequirementsMet                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Requiriments_met                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Resources_Entry_C*      K2Node_DynamicCast_AsWid_Resources_Entry                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Resources_C::CheckIfAllResourceRequirementsAreMet(class UPanelWidget* Self2, bool* RequirementsMet, bool Requiriments_met, int32 Temp_int_Variable, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWid_Resources_Entry_C* K2Node_DynamicCast_AsWid_Resources_Entry, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Resources_C", "CheckIfAllResourceRequirementsAreMet");

	Params::UWid_Resources_C_CheckIfAllResourceRequirementsAreMet_Params Parms{};

	Parms.Self2 = Self2;
	Parms.Requiriments_met = Requiriments_met;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWid_Resources_Entry = K2Node_DynamicCast_AsWid_Resources_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RequirementsMet != nullptr)
		*RequirementsMet = Parms.RequirementsMet;

}


// Function wid_Resources.wid_Resources_C.UpdateBorderColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               RequirementsMet                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckIfAllResourceRequirementsAreMet_RequirementsMet    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Resources_C::UpdateBorderColor(bool* RequirementsMet, bool CallFunc_CheckIfAllResourceRequirementsAreMet_RequirementsMet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Resources_C", "UpdateBorderColor");

	Params::UWid_Resources_C_UpdateBorderColor_Params Parms{};

	Parms.CallFunc_CheckIfAllResourceRequirementsAreMet_RequirementsMet = CallFunc_CheckIfAllResourceRequirementsAreMet_RequirementsMet;

	UObject::ProcessEvent(Func, &Parms);

	if (RequirementsMet != nullptr)
		*RequirementsMet = Parms.RequirementsMet;

}


// Function wid_Resources.wid_Resources_C.GetResourceWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EResourceType           Enum                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Resources_Entry_C*      Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Resources_C::GetResourceWidget(enum class EResourceType Enum, class UWid_Resources_Entry_C** Widget, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Resources_C", "GetResourceWidget");

	Params::UWid_Resources_C_GetResourceWidget_Params Parms{};

	Parms.Enum = Enum;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function wid_Resources.wid_Resources_C.Update
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EResourceType           Enum                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ComparedAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Red                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShowOnlyNon0Values                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              AmountNoPerks                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               RequirementsMet                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_Resources_Entry_C*      CallFunc_GetResourceWidget_Widget                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EResourceType>   K2Node_MakeArray_Array                                           (ReferenceParm)
// enum class EResourceType           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Resources_Entry_C*      CallFunc_GetResourceWidget_Widget_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UpdateBorderColor_RequirementsMet                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Resources_C::Update(enum class EResourceType Enum, float ComparedAmount, float Amount, bool Red, bool ShowOnlyNon0Values, class FName RowName, float AmountNoPerks, bool* RequirementsMet, bool Temp_bool_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UWid_Resources_Entry_C* CallFunc_GetResourceWidget_Widget, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<enum class EResourceType>& K2Node_MakeArray_Array, enum class EResourceType CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UWid_Resources_Entry_C* CallFunc_GetResourceWidget_Widget_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_UpdateBorderColor_RequirementsMet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Resources_C", "Update");

	Params::UWid_Resources_C_Update_Params Parms{};

	Parms.Enum = Enum;
	Parms.ComparedAmount = ComparedAmount;
	Parms.Amount = Amount;
	Parms.Red = Red;
	Parms.ShowOnlyNon0Values = ShowOnlyNon0Values;
	Parms.RowName = RowName;
	Parms.AmountNoPerks = AmountNoPerks;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetResourceWidget_Widget = CallFunc_GetResourceWidget_Widget;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetResourceWidget_Widget_1 = CallFunc_GetResourceWidget_Widget_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_UpdateBorderColor_RequirementsMet = CallFunc_UpdateBorderColor_RequirementsMet;

	UObject::ProcessEvent(Func, &Parms);

	if (RequirementsMet != nullptr)
		*RequirementsMet = Parms.RequirementsMet;

}


// Function wid_Resources.wid_Resources_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Resources_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Resources_C", "PreConstruct");

	Params::UWid_Resources_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Resources.wid_Resources_C.ExecuteUbergraph_wid_Resources
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Resources_C::ExecuteUbergraph_wid_Resources(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Resources_C", "ExecuteUbergraph_wid_Resources");

	Params::UWid_Resources_C_ExecuteUbergraph_wid_Resources_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


