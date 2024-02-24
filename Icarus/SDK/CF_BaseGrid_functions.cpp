#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CF_BaseGrid.CF_BaseGrid_C
// (None)

class UClass* UCF_BaseGrid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CF_BaseGrid_C");

	return Clss;
}


// CF_BaseGrid_C CF_BaseGrid.Default__CF_BaseGrid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCF_BaseGrid_C* UCF_BaseGrid_C::GetDefaultObj()
{
	static class UCF_BaseGrid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCF_BaseGrid_C*>(UCF_BaseGrid_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CF_BaseGrid.CF_BaseGrid_C.HandleArg
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Arg                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_StringToFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCF_BaseGrid_C::HandleArg(int32 Index, const class FString& Arg, float CallFunc_Conv_StringToFloat_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_Conv_IntToBool_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_BaseGrid_C", "HandleArg");

	Params::UCF_BaseGrid_C_HandleArg_Params Parms{};

	Parms.Index = Index;
	Parms.Arg = Arg;
	Parms.CallFunc_Conv_StringToFloat_ReturnValue = CallFunc_Conv_StringToFloat_ReturnValue;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_BaseGrid.CF_BaseGrid_C.UpdatePreview
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class FString>              Args                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCF_BaseGrid_C::UpdatePreview(TArray<class FString>& Args)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_BaseGrid_C", "UpdatePreview");

	Params::UCF_BaseGrid_C_UpdatePreview_Params Parms{};

	Parms.Args = Args;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_BaseGrid.CF_BaseGrid_C.BndEvt__Count_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCF_BaseGrid_C::BndEvt__Count_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_BaseGrid_C", "BndEvt__Count_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UCF_BaseGrid_C_BndEvt__Count_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_BaseGrid.CF_BaseGrid_C.Execute
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCF_BaseGrid_C::Execute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_BaseGrid_C", "Execute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_BaseGrid.CF_BaseGrid_C.Handle Execute
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Grid                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                              UV_x                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              UV_y                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCF_BaseGrid_C::Handle_Execute(const class FString& Grid, float UV_x, float UV_y)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_BaseGrid_C", "Handle Execute");

	Params::UCF_BaseGrid_C_Handle_Execute_Params Parms{};

	Parms.Grid = Grid;
	Parms.UV_x = UV_x;
	Parms.UV_y = UV_y;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_BaseGrid.CF_BaseGrid_C.BndEvt__ComboBox_K2Node_ComponentBoundEvent_1_OnItemSet__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      NameString                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCF_BaseGrid_C::BndEvt__ComboBox_K2Node_ComponentBoundEvent_1_OnItemSet__DelegateSignature(const class FString& NameString, class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_BaseGrid_C", "BndEvt__ComboBox_K2Node_ComponentBoundEvent_1_OnItemSet__DelegateSignature");

	Params::UCF_BaseGrid_C_BndEvt__ComboBox_K2Node_ComponentBoundEvent_1_OnItemSet__DelegateSignature_Params Parms{};

	Parms.NameString = NameString;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_BaseGrid.CF_BaseGrid_C.Handle On Item Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCF_BaseGrid_C::Handle_On_Item_Set(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_BaseGrid_C", "Handle On Item Set");

	Params::UCF_BaseGrid_C_Handle_On_Item_Set_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_BaseGrid.CF_BaseGrid_C.BndEvt__UMG_IconTextButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCF_BaseGrid_C::BndEvt__UMG_IconTextButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_BaseGrid_C", "BndEvt__UMG_IconTextButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_BaseGrid.CF_BaseGrid_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCF_BaseGrid_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_BaseGrid_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_BaseGrid.CF_BaseGrid_C.BndEvt__UV_Y_K2Node_ComponentBoundEvent_3_OnSpinBoxValueCommittedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              InValue                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCF_BaseGrid_C::BndEvt__UV_Y_K2Node_ComponentBoundEvent_3_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_BaseGrid_C", "BndEvt__UV_Y_K2Node_ComponentBoundEvent_3_OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::UCF_BaseGrid_C_BndEvt__UV_Y_K2Node_ComponentBoundEvent_3_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_BaseGrid.CF_BaseGrid_C.ExecuteUbergraph_CF_BaseGrid
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_ComponentBoundEvent_InValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStringRow_C*                CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<class FString>              K2Node_Event_Args                                                (ConstParm, ReferenceParm)
// float                              K2Node_ComponentBoundEvent_InValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Grid                                          (ZeroConstructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_UV_x                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_UV_y                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_ComponentBoundEvent_NameString                            (ZeroConstructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_CustomEvent_Widget                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSubstring_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetCharacterArrayFromString_ReturnValue                 (ReferenceParm)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetSelectedWidget_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStringRow_C*                K2Node_DynamicCast_AsString_Row                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCF_BaseGrid_C::ExecuteUbergraph_CF_BaseGrid(int32 EntryPoint, float K2Node_ComponentBoundEvent_InValue, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, class UStringRow_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<class FString>& K2Node_Event_Args, float K2Node_ComponentBoundEvent_InValue_1, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod_1, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& K2Node_CustomEvent_Grid, float K2Node_CustomEvent_UV_x, float K2Node_CustomEvent_UV_y, const class FString& K2Node_ComponentBoundEvent_NameString, class UUserWidget* K2Node_ComponentBoundEvent_Widget, class UUserWidget* K2Node_CustomEvent_Widget, const class FString& CallFunc_MakeLiteralString_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, const class FString& CallFunc_GetSubstring_ReturnValue, TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Array_Get_Item_1, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, class UUserWidget* CallFunc_GetSelectedWidget_ReturnValue, class UStringRow_C* K2Node_DynamicCast_AsString_Row, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_BaseGrid_C", "ExecuteUbergraph_CF_BaseGrid");

	Params::UCF_BaseGrid_C_ExecuteUbergraph_CF_BaseGrid_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_InValue = K2Node_ComponentBoundEvent_InValue;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_Event_Args = K2Node_Event_Args;
	Parms.K2Node_ComponentBoundEvent_InValue_1 = K2Node_ComponentBoundEvent_InValue_1;
	Parms.K2Node_ComponentBoundEvent_CommitMethod_1 = K2Node_ComponentBoundEvent_CommitMethod_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_CustomEvent_Grid = K2Node_CustomEvent_Grid;
	Parms.K2Node_CustomEvent_UV_x = K2Node_CustomEvent_UV_x;
	Parms.K2Node_CustomEvent_UV_y = K2Node_CustomEvent_UV_y;
	Parms.K2Node_ComponentBoundEvent_NameString = K2Node_ComponentBoundEvent_NameString;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;
	Parms.K2Node_CustomEvent_Widget = K2Node_CustomEvent_Widget;
	Parms.CallFunc_MakeLiteralString_ReturnValue = CallFunc_MakeLiteralString_ReturnValue;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_GetSubstring_ReturnValue = CallFunc_GetSubstring_ReturnValue;
	Parms.CallFunc_GetCharacterArrayFromString_ReturnValue = CallFunc_GetCharacterArrayFromString_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_GetSelectedWidget_ReturnValue = CallFunc_GetSelectedWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsString_Row = K2Node_DynamicCast_AsString_Row;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


