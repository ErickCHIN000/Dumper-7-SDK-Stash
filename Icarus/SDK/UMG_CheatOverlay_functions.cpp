#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_CheatOverlay.UMG_CheatOverlay_C
// (None)

class UClass* UUMG_CheatOverlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_CheatOverlay_C");

	return Clss;
}


// UMG_CheatOverlay_C UMG_CheatOverlay.Default__UMG_CheatOverlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_CheatOverlay_C* UUMG_CheatOverlay_C::GetDefaultObj()
{
	static class UUMG_CheatOverlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_CheatOverlay_C*>(UUMG_CheatOverlay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_CheatOverlay.UMG_CheatOverlay_C.SetTopFunction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCheatFunctionBase*          NewTop                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCF_Base_C*                  K2Node_DynamicCast_AsCF_Base                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCheatFunctionBase*          K2Node_DynamicCast_AsCheat_Function_Base                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UCF_Base_C>   CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (InstancedReference, UObjectWrapper, HasGetValueTypeHash)
// class UCF_Base_C*                  K2Node_DynamicCast_AsCF_Base_1                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CheatOverlay_C::SetTopFunction(class UCheatFunctionBase* NewTop, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UCF_Base_C* K2Node_DynamicCast_AsCF_Base, bool K2Node_DynamicCast_bSuccess, class UCheatFunctionBase* K2Node_DynamicCast_AsCheat_Function_Base, bool K2Node_DynamicCast_bSuccess_1, TSoftObjectPtr<class UCF_Base_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, class UCF_Base_C* K2Node_DynamicCast_AsCF_Base_1, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CheatOverlay_C", "SetTopFunction");

	Params::UUMG_CheatOverlay_C_SetTopFunction_Params Parms{};

	Parms.NewTop = NewTop;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsCF_Base = K2Node_DynamicCast_AsCF_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsCheat_Function_Base = K2Node_DynamicCast_AsCheat_Function_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.K2Node_DynamicCast_AsCF_Base_1 = K2Node_DynamicCast_AsCF_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CheatOverlay.UMG_CheatOverlay_C.OnSetFilteredWidgets
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UCheatFunctionBase*>  Array                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<class UWidget*>             NewSet                                                           (Edit, BlueprintVisible, ContainsInstancedReference)
// TSet<class UWidget*>               CurrentSet                                                       (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCheatFunctionBase*          CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCheatFunctionBase*          CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCF_Base_C*                  K2Node_DynamicCast_AsCF_Base                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_CheatFunctionBorder_C*  K2Node_DynamicCast_AsUMG_Cheat_Function_Border                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CheatOverlay_C::OnSetFilteredWidgets(TArray<class UCheatFunctionBase*>& Array, const TArray<class UWidget*>& NewSet, TSet<class UWidget*> CurrentSet, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UCheatFunctionBase* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UCheatFunctionBase* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class UCF_Base_C* K2Node_DynamicCast_AsCF_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UUMG_CheatFunctionBorder_C* K2Node_DynamicCast_AsUMG_Cheat_Function_Border, bool K2Node_DynamicCast_bSuccess_1, class UWidget* CallFunc_Array_Get_Item_2, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CheatOverlay_C", "OnSetFilteredWidgets");

	Params::UUMG_CheatOverlay_C_OnSetFilteredWidgets_Params Parms{};

	Parms.Array = Array;
	Parms.NewSet = NewSet;
	Parms.CurrentSet = CurrentSet;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsCF_Base = K2Node_DynamicCast_AsCF_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsUMG_Cheat_Function_Border = K2Node_DynamicCast_AsUMG_Cheat_Function_Border;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CheatOverlay.UMG_CheatOverlay_C.AddCustomAutomationFunctionImpl
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              Instructions                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                      Description                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UCF_AutomationInstructionSet_C*_NewFunc                                                         (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCF_AutomationInstructionSet_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CheatOverlay_C::AddCustomAutomationFunctionImpl(const class FString& Name, TArray<class FString>& Instructions, const class FString& Description, class UCF_AutomationInstructionSet_C* _NewFunc, class UCF_AutomationInstructionSet_C* CallFunc_Create_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CheatOverlay_C", "AddCustomAutomationFunctionImpl");

	Params::UUMG_CheatOverlay_C_AddCustomAutomationFunctionImpl_Params Parms{};

	Parms.Name = Name;
	Parms.Instructions = Instructions;
	Parms.Description = Description;
	Parms._NewFunc = _NewFunc;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CheatOverlay.UMG_CheatOverlay_C.AddCustomFunctionImpl
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              Instructions                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                      Description                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UCF_BaseInstructionSet_C*    _NewFunc                                                         (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCF_BaseInstructionSet_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CheatOverlay_C::AddCustomFunctionImpl(const class FString& Name, TArray<class FString>& Instructions, const class FString& Description, class UCF_BaseInstructionSet_C* _NewFunc, class UCF_BaseInstructionSet_C* CallFunc_Create_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CheatOverlay_C", "AddCustomFunctionImpl");

	Params::UUMG_CheatOverlay_C_AddCustomFunctionImpl_Params Parms{};

	Parms.Name = Name;
	Parms.Instructions = Instructions;
	Parms.Description = Description;
	Parms._NewFunc = _NewFunc;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CheatOverlay.UMG_CheatOverlay_C.GetPanelVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsWaiting_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsShowing_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UUMG_CheatOverlay_C::GetPanelVisibility(bool CallFunc_IsWaiting_ReturnValue, bool CallFunc_IsShowing_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CheatOverlay_C", "GetPanelVisibility");

	Params::UUMG_CheatOverlay_C_GetPanelVisibility_Params Parms{};

	Parms.CallFunc_IsWaiting_ReturnValue = CallFunc_IsWaiting_ReturnValue;
	Parms.CallFunc_IsShowing_ReturnValue = CallFunc_IsShowing_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_CheatOverlay.UMG_CheatOverlay_C.BuildWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>              ClassList                                                        (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCheatFunctionRow           CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CheatOverlay_C::BuildWidget(const TArray<class UClass*>& ClassList, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FCheatFunctionRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CheatOverlay_C", "BuildWidget");

	Params::UUMG_CheatOverlay_C_BuildWidget_Params Parms{};

	Parms.ClassList = ClassList;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CheatOverlay.UMG_CheatOverlay_C.GetTopFunction
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCheatFunctionBase*          Top                                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCheatFunctionBase*          K2Node_DynamicCast_AsCheat_Function_Base                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CheatOverlay_C::GetTopFunction(class UCheatFunctionBase** Top, class FText CallFunc_GetText_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class UCheatFunctionBase* K2Node_DynamicCast_AsCheat_Function_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CheatOverlay_C", "GetTopFunction");

	Params::UUMG_CheatOverlay_C_GetTopFunction_Params Parms{};

	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_DynamicCast_AsCheat_Function_Base = K2Node_DynamicCast_AsCheat_Function_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Top != nullptr)
		*Top = Parms.Top;

}


// Function UMG_CheatOverlay.UMG_CheatOverlay_C.OnAddCheat
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCheatFunctionBase*          Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_CheatFunctionBorder_C*  NewWidget                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_CheatFunctionBorder_C*  CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeLiteralFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeLiteralFloat_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UUMG_CheatOverlay_C>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (InstancedReference, UObjectWrapper, HasGetValueTypeHash)

void UUMG_CheatOverlay_C::OnAddCheat(class UCheatFunctionBase* Widget, class UUMG_CheatFunctionBorder_C* NewWidget, class UUMG_CheatFunctionBorder_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin, TSoftObjectPtr<class UUMG_CheatOverlay_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CheatOverlay_C", "OnAddCheat");

	Params::UUMG_CheatOverlay_C_OnAddCheat_Params Parms{};

	Parms.Widget = Widget;
	Parms.NewWidget = NewWidget;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue = CallFunc_MakeLiteralFloat_ReturnValue;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue_1 = CallFunc_MakeLiteralFloat_ReturnValue_1;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CheatOverlay.UMG_CheatOverlay_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)

struct FEventReply UUMG_CheatOverlay_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CheatOverlay_C", "OnKeyDown");

	Params::UUMG_CheatOverlay_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_CheatOverlay.UMG_CheatOverlay_C.Toggle
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_CheatOverlay_C::Toggle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CheatOverlay_C", "Toggle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CheatOverlay.UMG_CheatOverlay_C.ClearFilteredWidgets
// (Event, Public, BlueprintEvent)
// Parameters:

void UUMG_CheatOverlay_C::ClearFilteredWidgets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CheatOverlay_C", "ClearFilteredWidgets");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CheatOverlay.UMG_CheatOverlay_C.AddFilteredWidget
// (BlueprintEvent)
// Parameters:
// class UCheatFunctionBase*          Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CheatOverlay_C::AddFilteredWidget(class UCheatFunctionBase* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CheatOverlay_C", "AddFilteredWidget");

	Params::UUMG_CheatOverlay_C_AddFilteredWidget_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CheatOverlay.UMG_CheatOverlay_C.BndEvt__SearchBar_K2Node_ComponentBoundEvent_2_OnSearchBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_CheatOverlay_C::BndEvt__SearchBar_K2Node_ComponentBoundEvent_2_OnSearchBoxChangedEvent__DelegateSignature(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CheatOverlay_C", "BndEvt__SearchBar_K2Node_ComponentBoundEvent_2_OnSearchBoxChangedEvent__DelegateSignature");

	Params::UUMG_CheatOverlay_C_BndEvt__SearchBar_K2Node_ComponentBoundEvent_2_OnSearchBoxChangedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CheatOverlay.UMG_CheatOverlay_C.BndEvt__SearchBar_K2Node_ComponentBoundEvent_1_OnSearchBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CheatOverlay_C::BndEvt__SearchBar_K2Node_ComponentBoundEvent_1_OnSearchBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CheatOverlay_C", "BndEvt__SearchBar_K2Node_ComponentBoundEvent_1_OnSearchBoxCommittedEvent__DelegateSignature");

	Params::UUMG_CheatOverlay_C_BndEvt__SearchBar_K2Node_ComponentBoundEvent_1_OnSearchBoxCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CheatOverlay.UMG_CheatOverlay_C.BndEvt__SearchBar_K2Node_ComponentBoundEvent_3_SearchBoxReply__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// struct FKeyEvent                   KeyEvent                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_CheatOverlay_C::BndEvt__SearchBar_K2Node_ComponentBoundEvent_3_SearchBoxReply__DelegateSignature(struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CheatOverlay_C", "BndEvt__SearchBar_K2Node_ComponentBoundEvent_3_SearchBoxReply__DelegateSignature");

	Params::UUMG_CheatOverlay_C_BndEvt__SearchBar_K2Node_ComponentBoundEvent_3_SearchBoxReply__DelegateSignature_Params Parms{};

	Parms.KeyEvent = KeyEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CheatOverlay.UMG_CheatOverlay_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECheatContext           Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CheatOverlay_C::Setup(enum class ECheatContext Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CheatOverlay_C", "Setup");

	Params::UUMG_CheatOverlay_C_Setup_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CheatOverlay.UMG_CheatOverlay_C.AddCustomFunction
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              ScriptLines                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                      Description                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUMG_CheatOverlay_C::AddCustomFunction(const class FString& Name, TArray<class FString>& ScriptLines, const class FString& Description)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CheatOverlay_C", "AddCustomFunction");

	Params::UUMG_CheatOverlay_C_AddCustomFunction_Params Parms{};

	Parms.Name = Name;
	Parms.ScriptLines = ScriptLines;
	Parms.Description = Description;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CheatOverlay.UMG_CheatOverlay_C.AddCheat
// (Event, Public, BlueprintEvent)
// Parameters:
// class UCheatFunctionBase*          Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CheatOverlay_C::AddCheat(class UCheatFunctionBase* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CheatOverlay_C", "AddCheat");

	Params::UUMG_CheatOverlay_C_AddCheat_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CheatOverlay.UMG_CheatOverlay_C.AddCustomAutomationFunction
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              ScriptLines                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                      Description                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUMG_CheatOverlay_C::AddCustomAutomationFunction(const class FString& Name, TArray<class FString>& ScriptLines, const class FString& Description)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CheatOverlay_C", "AddCustomAutomationFunction");

	Params::UUMG_CheatOverlay_C_AddCustomAutomationFunction_Params Parms{};

	Parms.Name = Name;
	Parms.ScriptLines = ScriptLines;
	Parms.Description = Description;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CheatOverlay.UMG_CheatOverlay_C.BndEvt__UMG_CloseButton_2_C_1_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_CheatOverlay_C::BndEvt__UMG_CloseButton_2_C_1_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CheatOverlay_C", "BndEvt__UMG_CloseButton_2_C_1_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CheatOverlay.UMG_CheatOverlay_C.RequestReloadCheats
// (Event, Public, BlueprintEvent)
// Parameters:

void UUMG_CheatOverlay_C::RequestReloadCheats()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CheatOverlay_C", "RequestReloadCheats");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CheatOverlay.UMG_CheatOverlay_C.OnShowChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bNewShow                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CheatOverlay_C::OnShowChanged(bool bNewShow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CheatOverlay_C", "OnShowChanged");

	Params::UUMG_CheatOverlay_C_OnShowChanged_Params Parms{};

	Parms.bNewShow = bNewShow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CheatOverlay.UMG_CheatOverlay_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CheatOverlay_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CheatOverlay_C", "Tick");

	Params::UUMG_CheatOverlay_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CheatOverlay.UMG_CheatOverlay_C.SetFilteredWidgets
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class UCheatFunctionBase*>  Widgets                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UUMG_CheatOverlay_C::SetFilteredWidgets(TArray<class UCheatFunctionBase*>& Widgets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CheatOverlay_C", "SetFilteredWidgets");

	Params::UUMG_CheatOverlay_C_SetFilteredWidgets_Params Parms{};

	Parms.Widgets = Widgets;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CheatOverlay.UMG_CheatOverlay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_CheatOverlay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CheatOverlay_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CheatOverlay.UMG_CheatOverlay_C.HidePanelDisplay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_CheatOverlay_C::HidePanelDisplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CheatOverlay_C", "HidePanelDisplay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CheatOverlay.UMG_CheatOverlay_C.OnWaitingChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bNewWaiting                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_CheatOverlay_C::OnWaitingChanged(bool bNewWaiting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CheatOverlay_C", "OnWaitingChanged");

	Params::UUMG_CheatOverlay_C_OnWaitingChanged_Params Parms{};

	Parms.bNewWaiting = bNewWaiting;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CheatOverlay.UMG_CheatOverlay_C.UpdateVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_CheatOverlay_C::UpdateVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CheatOverlay_C", "UpdateVisibility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CheatOverlay.UMG_CheatOverlay_C.ExecuteUbergraph_UMG_CheatOverlay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCheatFunctionBase*          K2Node_Event_Widget_1                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text_1                                (ConstParm)
// class UCF_Base_C*                  K2Node_DynamicCast_AsCF_Base                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UCF_Base_C>   CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (InstancedReference, UObjectWrapper, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_CheatFunctionBorder_C*  K2Node_DynamicCast_AsUMG_Cheat_Function_Border                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCheatFunctionBase*          K2Node_DynamicCast_AsCheat_Function_Base                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   K2Node_ComponentBoundEvent_KeyEvent                              (ConstParm)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECheatContext           K2Node_CustomEvent_Context                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_Name_1                                              (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_Event_ScriptLines_1                                       (ConstParm, ReferenceParm)
// class FString                      K2Node_Event_Description_1                                       (ZeroConstructor, HasGetValueTypeHash)
// class UCheatFunctionBase*          K2Node_Event_Widget                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_Name                                                (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_Event_ScriptLines                                         (ConstParm, ReferenceParm)
// class FString                      K2Node_Event_Description                                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsShowing_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCheatFunctionBase*          K2Node_DynamicCast_AsCheat_Function_Base_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCF_Base_C*                  K2Node_DynamicCast_AsCF_Base_1                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bNewShow                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     K2Node_DynamicCast_AsIcarus_Player_Controller                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UCheatFunctionBase*>  K2Node_Event_Widgets                                             (ConstParm, ReferenceParm, ContainsInstancedReference)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsShowing_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bNewWaiting                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetPanelVisibility_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_CheatOverlay_C::ExecuteUbergraph_UMG_CheatOverlay(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable, class UCheatFunctionBase* K2Node_Event_Widget_1, class FText K2Node_ComponentBoundEvent_Text_1, class UCF_Base_C* K2Node_DynamicCast_AsCF_Base, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_TextToString_ReturnValue, TSoftObjectPtr<class UCF_Base_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UUMG_CheatFunctionBorder_C* K2Node_DynamicCast_AsUMG_Cheat_Function_Border, bool K2Node_DynamicCast_bSuccess_1, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class UCheatFunctionBase* K2Node_DynamicCast_AsCheat_Function_Base, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue, const struct FKeyEvent& K2Node_ComponentBoundEvent_KeyEvent, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, enum class ECheatContext K2Node_CustomEvent_Context, const class FString& K2Node_Event_Name_1, TArray<class FString>& K2Node_Event_ScriptLines_1, const class FString& K2Node_Event_Description_1, class UCheatFunctionBase* K2Node_Event_Widget, const class FString& K2Node_Event_Name, TArray<class FString>& K2Node_Event_ScriptLines, const class FString& K2Node_Event_Description, bool CallFunc_IsShowing_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, class UCheatFunctionBase* K2Node_DynamicCast_AsCheat_Function_Base_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_1, class UCF_Base_C* K2Node_DynamicCast_AsCF_Base_1, bool K2Node_DynamicCast_bSuccess_4, bool K2Node_Event_bNewShow, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AIcarusPlayerController* K2Node_DynamicCast_AsIcarus_Player_Controller, bool K2Node_DynamicCast_bSuccess_5, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, TArray<class UCheatFunctionBase*>& K2Node_Event_Widgets, class UPanelSlot* CallFunc_AddChild_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess_6, bool K2Node_SwitchEnum_CmpSuccess_1, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsShowing_ReturnValue_1, bool K2Node_Event_bNewWaiting, enum class ESlateVisibility CallFunc_GetPanelVisibility_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CheatOverlay_C", "ExecuteUbergraph_UMG_CheatOverlay");

	Params::UUMG_CheatOverlay_C_ExecuteUbergraph_UMG_CheatOverlay_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_Event_Widget_1 = K2Node_Event_Widget_1;
	Parms.K2Node_ComponentBoundEvent_Text_1 = K2Node_ComponentBoundEvent_Text_1;
	Parms.K2Node_DynamicCast_AsCF_Base = K2Node_DynamicCast_AsCF_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsUMG_Cheat_Function_Border = K2Node_DynamicCast_AsUMG_Cheat_Function_Border;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsCheat_Function_Base = K2Node_DynamicCast_AsCheat_Function_Base;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_KeyEvent = K2Node_ComponentBoundEvent_KeyEvent;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.K2Node_CustomEvent_Context = K2Node_CustomEvent_Context;
	Parms.K2Node_Event_Name_1 = K2Node_Event_Name_1;
	Parms.K2Node_Event_ScriptLines_1 = K2Node_Event_ScriptLines_1;
	Parms.K2Node_Event_Description_1 = K2Node_Event_Description_1;
	Parms.K2Node_Event_Widget = K2Node_Event_Widget;
	Parms.K2Node_Event_Name = K2Node_Event_Name;
	Parms.K2Node_Event_ScriptLines = K2Node_Event_ScriptLines;
	Parms.K2Node_Event_Description = K2Node_Event_Description;
	Parms.CallFunc_IsShowing_ReturnValue = CallFunc_IsShowing_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_DynamicCast_AsCheat_Function_Base_1 = K2Node_DynamicCast_AsCheat_Function_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsCF_Base_1 = K2Node_DynamicCast_AsCF_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_Event_bNewShow = K2Node_Event_bNewShow;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Controller = K2Node_DynamicCast_AsIcarus_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_Event_Widgets = K2Node_Event_Widgets;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsUIController_Interface = K2Node_DynamicCast_AsUIController_Interface;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetUserInterface_UserInterface = CallFunc_GetUserInterface_UserInterface;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsShowing_ReturnValue_1 = CallFunc_IsShowing_ReturnValue_1;
	Parms.K2Node_Event_bNewWaiting = K2Node_Event_bNewWaiting;
	Parms.CallFunc_GetPanelVisibility_ReturnValue = CallFunc_GetPanelVisibility_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


