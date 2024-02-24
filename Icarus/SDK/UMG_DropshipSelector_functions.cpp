#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_DropshipSelector.UMG_DropshipSelector_C
// (None)

class UClass* UUMG_DropshipSelector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_DropshipSelector_C");

	return Clss;
}


// UMG_DropshipSelector_C UMG_DropshipSelector.Default__UMG_DropshipSelector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_DropshipSelector_C* UUMG_DropshipSelector_C::GetDefaultObj()
{
	static class UUMG_DropshipSelector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_DropshipSelector_C*>(UUMG_DropshipSelector_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_DropshipSelector.UMG_DropshipSelector_C.FindDropshipIndex
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              DropshipIndex                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBackendProxyComponent*      CallFunc_GetBackendProxyComponent_BackendProxyComponent          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBackendProxyComponent_bSuccess                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FDropship>           CallFunc_GetDropships_ReturnValue                                (ConstParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDropship                   CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_DropshipSelector_C::FindDropshipIndex(const class FString& Name, int32* DropshipIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UBackendProxyComponent* CallFunc_GetBackendProxyComponent_BackendProxyComponent, bool CallFunc_GetBackendProxyComponent_bSuccess, TArray<struct FDropship>& CallFunc_GetDropships_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FDropship& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropshipSelector_C", "FindDropshipIndex");

	Params::UUMG_DropshipSelector_C_FindDropshipIndex_Params Parms{};

	Parms.Name = Name;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetBackendProxyComponent_BackendProxyComponent = CallFunc_GetBackendProxyComponent_BackendProxyComponent;
	Parms.CallFunc_GetBackendProxyComponent_bSuccess = CallFunc_GetBackendProxyComponent_bSuccess;
	Parms.CallFunc_GetDropships_ReturnValue = CallFunc_GetDropships_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DropshipIndex != nullptr)
		*DropshipIndex = Parms.DropshipIndex;

}


// Function UMG_DropshipSelector.UMG_DropshipSelector_C.DropshipSelectedHandler
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBackendProxyComponent*      CallFunc_GetBackendProxyComponent_BackendProxyComponent          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBackendProxyComponent_bSuccess                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_DropshipEntry_C*        K2Node_DynamicCast_AsUMG_Dropship_Entry                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_DropshipSelector_C::DropshipSelectedHandler(int32 Index, class UBackendProxyComponent* CallFunc_GetBackendProxyComponent_BackendProxyComponent, bool CallFunc_GetBackendProxyComponent_bSuccess, class UWidget* CallFunc_GetChildAt_ReturnValue, class UUMG_DropshipEntry_C* K2Node_DynamicCast_AsUMG_Dropship_Entry, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropshipSelector_C", "DropshipSelectedHandler");

	Params::UUMG_DropshipSelector_C_DropshipSelectedHandler_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_GetBackendProxyComponent_BackendProxyComponent = CallFunc_GetBackendProxyComponent_BackendProxyComponent;
	Parms.CallFunc_GetBackendProxyComponent_bSuccess = CallFunc_GetBackendProxyComponent_bSuccess;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsUMG_Dropship_Entry = K2Node_DynamicCast_AsUMG_Dropship_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_DropshipSelector.UMG_DropshipSelector_C.Update
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HasSelectedDropship                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDropship                   CurrentDropship                                                  (Edit, BlueprintVisible)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBackendProxyComponent*      CallFunc_GetBackendProxyComponent_BackendProxyComponent          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBackendProxyComponent_bSuccess                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FDropship>           CallFunc_GetDropships_ReturnValue                                (ConstParm, ReferenceParm)
// TArray<struct FDropship>           CallFunc_GetDropships_ReturnValue_1                              (ConstParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDropship>           CallFunc_GetDropships_ReturnValue_2                              (ConstParm, ReferenceParm)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDropship                   CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDropship                   CallFunc_Array_Get_Item_1                                        (None)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDropship                   CallFunc_Array_Get_Item_2                                        (None)
// class FString                      CallFunc_ToUpper_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_DropshipEntry_C*        K2Node_DynamicCast_AsUMG_Dropship_Entry                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_DropshipEntry_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_DropshipSelector_C::Update(bool HasSelectedDropship, const struct FDropship& CurrentDropship, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, class UBackendProxyComponent* CallFunc_GetBackendProxyComponent_BackendProxyComponent, bool CallFunc_GetBackendProxyComponent_bSuccess, TArray<struct FDropship>& CallFunc_GetDropships_ReturnValue, TArray<struct FDropship>& CallFunc_GetDropships_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, TArray<struct FDropship>& CallFunc_GetDropships_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FDropship& CallFunc_Array_Get_Item, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, const struct FDropship& CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, const struct FDropship& CallFunc_Array_Get_Item_2, const class FString& CallFunc_ToUpper_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item_3, int32 CallFunc_GetChildrenCount_ReturnValue, class UUMG_DropshipEntry_C* K2Node_DynamicCast_AsUMG_Dropship_Entry, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, class UUMG_DropshipEntry_C* CallFunc_Create_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_HasAnyChildren_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropshipSelector_C", "Update");

	Params::UUMG_DropshipSelector_C_Update_Params Parms{};

	Parms.HasSelectedDropship = HasSelectedDropship;
	Parms.CurrentDropship = CurrentDropship;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetBackendProxyComponent_BackendProxyComponent = CallFunc_GetBackendProxyComponent_BackendProxyComponent;
	Parms.CallFunc_GetBackendProxyComponent_bSuccess = CallFunc_GetBackendProxyComponent_bSuccess;
	Parms.CallFunc_GetDropships_ReturnValue = CallFunc_GetDropships_ReturnValue;
	Parms.CallFunc_GetDropships_ReturnValue_1 = CallFunc_GetDropships_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetDropships_ReturnValue_2 = CallFunc_GetDropships_ReturnValue_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_ToUpper_ReturnValue = CallFunc_ToUpper_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.K2Node_DynamicCast_AsUMG_Dropship_Entry = K2Node_DynamicCast_AsUMG_Dropship_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_DropshipSelector.UMG_DropshipSelector_C.Initialise
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBackendProxyComponent*      CallFunc_GetBackendProxyComponent_BackendProxyComponent          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBackendProxyComponent_bSuccess                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UUMG_DropshipSelector_C::Initialise(class UBackendProxyComponent* CallFunc_GetBackendProxyComponent_BackendProxyComponent, bool CallFunc_GetBackendProxyComponent_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropshipSelector_C", "Initialise");

	Params::UUMG_DropshipSelector_C_Initialise_Params Parms{};

	Parms.CallFunc_GetBackendProxyComponent_BackendProxyComponent = CallFunc_GetBackendProxyComponent_BackendProxyComponent;
	Parms.CallFunc_GetBackendProxyComponent_bSuccess = CallFunc_GetBackendProxyComponent_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_DropshipSelector.UMG_DropshipSelector_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_DropshipSelector_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropshipSelector_C", "PreConstruct");

	Params::UUMG_DropshipSelector_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_DropshipSelector.UMG_DropshipSelector_C.BndEvt__DropshipComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             SelectionType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_DropshipSelector_C::BndEvt__DropshipComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropshipSelector_C", "BndEvt__DropshipComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");

	Params::UUMG_DropshipSelector_C_BndEvt__DropshipComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_DropshipSelector.UMG_DropshipSelector_C.ExecuteUbergraph_UMG_DropshipSelector
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBackendProxyComponent*      CallFunc_GetBackendProxyComponent_BackendProxyComponent          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBackendProxyComponent_bSuccess                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem                          (ZeroConstructor, HasGetValueTypeHash)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FindDropshipIndex_DropshipIndex                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_DropshipSelector_C::ExecuteUbergraph_UMG_DropshipSelector(int32 EntryPoint, class UBackendProxyComponent* CallFunc_GetBackendProxyComponent_BackendProxyComponent, bool CallFunc_GetBackendProxyComponent_bSuccess, const class FString& K2Node_ComponentBoundEvent_SelectedItem, enum class ESelectInfo K2Node_ComponentBoundEvent_SelectionType, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_FindDropshipIndex_DropshipIndex, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropshipSelector_C", "ExecuteUbergraph_UMG_DropshipSelector");

	Params::UUMG_DropshipSelector_C_ExecuteUbergraph_UMG_DropshipSelector_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetBackendProxyComponent_BackendProxyComponent = CallFunc_GetBackendProxyComponent_BackendProxyComponent;
	Parms.CallFunc_GetBackendProxyComponent_bSuccess = CallFunc_GetBackendProxyComponent_bSuccess;
	Parms.K2Node_ComponentBoundEvent_SelectedItem = K2Node_ComponentBoundEvent_SelectedItem;
	Parms.K2Node_ComponentBoundEvent_SelectionType = K2Node_ComponentBoundEvent_SelectionType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_FindDropshipIndex_DropshipIndex = CallFunc_FindDropshipIndex_DropshipIndex;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_DropshipSelector.UMG_DropshipSelector_C.DropshipSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDropship                   Dropship                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_DropshipSelector_C::DropshipSelected__DelegateSignature(const struct FDropship& Dropship)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DropshipSelector_C", "DropshipSelected__DelegateSignature");

	Params::UUMG_DropshipSelector_C_DropshipSelected__DelegateSignature_Params Parms{};

	Parms.Dropship = Dropship;

	UObject::ProcessEvent(Func, &Parms);

}

}


