#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_DB_Shard_sw_DeploymentSelect.WBP_DB_Shard_sw_DeploymentSelect_C
// (None)

class UClass* UWBP_DB_Shard_sw_DeploymentSelect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_DB_Shard_sw_DeploymentSelect_C");

	return Clss;
}


// WBP_DB_Shard_sw_DeploymentSelect_C WBP_DB_Shard_sw_DeploymentSelect.Default__WBP_DB_Shard_sw_DeploymentSelect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_DB_Shard_sw_DeploymentSelect_C* UWBP_DB_Shard_sw_DeploymentSelect_C::GetDefaultObj()
{
	static class UWBP_DB_Shard_sw_DeploymentSelect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_DB_Shard_sw_DeploymentSelect_C*>(UWBP_DB_Shard_sw_DeploymentSelect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_DB_Shard_sw_DeploymentSelect.WBP_DB_Shard_sw_DeploymentSelect_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_DB_Shard_sw_DeploymentSelect_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Shard_sw_DeploymentSelect_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_DB_Shard_sw_DeploymentSelect_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_DB_Shard_sw_DeploymentSelect.WBP_DB_Shard_sw_DeploymentSelect_C.GetDefaultFocusWidget
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_DB_Shard_sw_DeploymentSelect_C::GetDefaultFocusWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Shard_sw_DeploymentSelect_C", "GetDefaultFocusWidget");

	Params::UWBP_DB_Shard_sw_DeploymentSelect_C_GetDefaultFocusWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_DB_Shard_sw_DeploymentSelect.WBP_DB_Shard_sw_DeploymentSelect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_DB_Shard_sw_DeploymentSelect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Shard_sw_DeploymentSelect_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Shard_sw_DeploymentSelect.WBP_DB_Shard_sw_DeploymentSelect_C.OnDeploymentSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDeployment                 Deployment                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_DB_Shard_sw_DeploymentSelect_C::OnDeploymentSelected(const struct FDeployment& Deployment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Shard_sw_DeploymentSelect_C", "OnDeploymentSelected");

	Params::UWBP_DB_Shard_sw_DeploymentSelect_C_OnDeploymentSelected_Params Parms{};

	Parms.Deployment = Deployment;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Shard_sw_DeploymentSelect.WBP_DB_Shard_sw_DeploymentSelect_C.BndEvt__WBP_DB_Shard_sw_DeploymentSelect_WBP_Default_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Shard_sw_DeploymentSelect_C::BndEvt__WBP_DB_Shard_sw_DeploymentSelect_WBP_Default_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Shard_sw_DeploymentSelect_C", "BndEvt__WBP_DB_Shard_sw_DeploymentSelect_WBP_Default_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_DB_Shard_sw_DeploymentSelect_C_BndEvt__WBP_DB_Shard_sw_DeploymentSelect_WBP_Default_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Shard_sw_DeploymentSelect.WBP_DB_Shard_sw_DeploymentSelect_C.BndEvt__WBP_DB_Shard_sw_DeploymentSelect_WBP_Sanctuary_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Shard_sw_DeploymentSelect_C::BndEvt__WBP_DB_Shard_sw_DeploymentSelect_WBP_Sanctuary_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Shard_sw_DeploymentSelect_C", "BndEvt__WBP_DB_Shard_sw_DeploymentSelect_WBP_Sanctuary_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_DB_Shard_sw_DeploymentSelect_C_BndEvt__WBP_DB_Shard_sw_DeploymentSelect_WBP_Sanctuary_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Shard_sw_DeploymentSelect.WBP_DB_Shard_sw_DeploymentSelect_C.BndEvt__WBP_DB_Shard_sw_DeploymentSelect_WBP_Cancel_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Shard_sw_DeploymentSelect_C::BndEvt__WBP_DB_Shard_sw_DeploymentSelect_WBP_Cancel_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Shard_sw_DeploymentSelect_C", "BndEvt__WBP_DB_Shard_sw_DeploymentSelect_WBP_Cancel_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_DB_Shard_sw_DeploymentSelect_C_BndEvt__WBP_DB_Shard_sw_DeploymentSelect_WBP_Cancel_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Shard_sw_DeploymentSelect.WBP_DB_Shard_sw_DeploymentSelect_C.ExecuteUbergraph_WBP_DB_Shard_sw_DeploymentSelect
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_DB_Deploy_ListEntry_C*  CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FDeployment                 CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDeployment                 K2Node_CustomEvent_Deployment                                    (None)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FDeployment                 K2Node_MakeStruct_Deployment                                     (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_DB_Shard_sw_DeploymentSelect_C::ExecuteUbergraph_WBP_DB_Shard_sw_DeploymentSelect(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWBP_DB_Deploy_ListEntry_C* CallFunc_Create_ReturnValue, const struct FDeployment& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FDeployment& K2Node_CustomEvent_Deployment, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, const struct FDeployment& K2Node_MakeStruct_Deployment, int32 Temp_int_Loop_Counter_Variable, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Shard_sw_DeploymentSelect_C", "ExecuteUbergraph_WBP_DB_Shard_sw_DeploymentSelect");

	Params::UWBP_DB_Shard_sw_DeploymentSelect_C_ExecuteUbergraph_WBP_DB_Shard_sw_DeploymentSelect_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_CustomEvent_Deployment = K2Node_CustomEvent_Deployment;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.K2Node_MakeStruct_Deployment = K2Node_MakeStruct_Deployment;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_DB_Shard_sw_DeploymentSelect.WBP_DB_Shard_sw_DeploymentSelect_C.SanctuarySelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_DB_Shard_sw_DeploymentSelect_C::SanctuarySelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Shard_sw_DeploymentSelect_C", "SanctuarySelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Shard_sw_DeploymentSelect.WBP_DB_Shard_sw_DeploymentSelect_C.SelectDeploymentCancelled__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_DB_Shard_sw_DeploymentSelect_C::SelectDeploymentCancelled__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Shard_sw_DeploymentSelect_C", "SelectDeploymentCancelled__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_DB_Shard_sw_DeploymentSelect.WBP_DB_Shard_sw_DeploymentSelect_C.DeploymentSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDeployment                 Deployment                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_DB_Shard_sw_DeploymentSelect_C::DeploymentSelected__DelegateSignature(const struct FDeployment& Deployment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_DB_Shard_sw_DeploymentSelect_C", "DeploymentSelected__DelegateSignature");

	Params::UWBP_DB_Shard_sw_DeploymentSelect_C_DeploymentSelected__DelegateSignature_Params Parms{};

	Parms.Deployment = Deployment;

	UObject::ProcessEvent(Func, &Parms);

}

}


