#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_StatusEffectAccumulationBox.WBP_StatusEffectAccumulationBox_C
// (None)

class UClass* UWBP_StatusEffectAccumulationBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_StatusEffectAccumulationBox_C");

	return Clss;
}


// WBP_StatusEffectAccumulationBox_C WBP_StatusEffectAccumulationBox.Default__WBP_StatusEffectAccumulationBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_StatusEffectAccumulationBox_C* UWBP_StatusEffectAccumulationBox_C::GetDefaultObj()
{
	static class UWBP_StatusEffectAccumulationBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_StatusEffectAccumulationBox_C*>(UWBP_StatusEffectAccumulationBox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_StatusEffectAccumulationBox.WBP_StatusEffectAccumulationBox_C.UpdateBar
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAccumulationHandle         Handle                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// float                              Value                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_StatusEffect_AccumulationBar_C*CurrentBar                                                       (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_StatusEffect_AccumulationBar_C*CallFunc_AddNewBar_ReturnValue                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_StatusEffect_AccumulationBar_C*CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UpdateValue_NewProgress_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StatusEffectAccumulationBox_C::UpdateBar(struct FAccumulationHandle& Handle, float Value, class UWBP_StatusEffect_AccumulationBar_C* CurrentBar, class UWBP_StatusEffect_AccumulationBar_C* CallFunc_AddNewBar_ReturnValue, class UWBP_StatusEffect_AccumulationBar_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, double CallFunc_UpdateValue_NewProgress_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StatusEffectAccumulationBox_C", "UpdateBar");

	Params::UWBP_StatusEffectAccumulationBox_C_UpdateBar_Params Parms{};

	Parms.Handle = Handle;
	Parms.Value = Value;
	Parms.CurrentBar = CurrentBar;
	Parms.CallFunc_AddNewBar_ReturnValue = CallFunc_AddNewBar_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_UpdateValue_NewProgress_ImplicitCast = CallFunc_UpdateValue_NewProgress_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StatusEffectAccumulationBox.WBP_StatusEffectAccumulationBox_C.AddNewBar
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAccumulationHandle         Handle                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UWBP_StatusEffect_AccumulationBar_C*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_StatusEffect_AccumulationBar_C*NewBar                                                           (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IAccumulationAccessInterface>K2Node_DynamicCast_AsAccumulation_Access_Interface               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_StatusEffect_AccumulationBar_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FAccumulationUIData         CallFunc_TryGetAccumulationInstanceUIData_OutData                (None)
// bool                               CallFunc_TryGetAccumulationInstanceUIData_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

class UWBP_StatusEffect_AccumulationBar_C* UWBP_StatusEffectAccumulationBox_C::AddNewBar(const struct FAccumulationHandle& Handle, class UWBP_StatusEffect_AccumulationBar_C* NewBar, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IAccumulationAccessInterface> K2Node_DynamicCast_AsAccumulation_Access_Interface, bool K2Node_DynamicCast_bSuccess, class UWBP_StatusEffect_AccumulationBar_C* CallFunc_SpawnObject_ReturnValue, const struct FAccumulationUIData& CallFunc_TryGetAccumulationInstanceUIData_OutData, bool CallFunc_TryGetAccumulationInstanceUIData_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StatusEffectAccumulationBox_C", "AddNewBar");

	Params::UWBP_StatusEffectAccumulationBox_C_AddNewBar_Params Parms{};

	Parms.Handle = Handle;
	Parms.NewBar = NewBar;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsAccumulation_Access_Interface = K2Node_DynamicCast_AsAccumulation_Access_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_TryGetAccumulationInstanceUIData_OutData = CallFunc_TryGetAccumulationInstanceUIData_OutData;
	Parms.CallFunc_TryGetAccumulationInstanceUIData_ReturnValue = CallFunc_TryGetAccumulationInstanceUIData_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_StatusEffectAccumulationBox.WBP_StatusEffectAccumulationBox_C.SetupExistingHandles
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAccumulationHandle> Handles                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FAccumulationHandle         CurrentHandle                                                    (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAccumulationHandle         CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IAccumulationAccessInterface>K2Node_DynamicCast_AsAccumulation_Access_Interface               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_TryGetAccumulationInstanceValue_OutValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetAccumulationInstanceValue_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StatusEffectAccumulationBox_C::SetupExistingHandles(TArray<struct FAccumulationHandle>& Handles, const struct FAccumulationHandle& CurrentHandle, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FAccumulationHandle& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IAccumulationAccessInterface> K2Node_DynamicCast_AsAccumulation_Access_Interface, bool K2Node_DynamicCast_bSuccess, float CallFunc_TryGetAccumulationInstanceValue_OutValue, bool CallFunc_TryGetAccumulationInstanceValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StatusEffectAccumulationBox_C", "SetupExistingHandles");

	Params::UWBP_StatusEffectAccumulationBox_C_SetupExistingHandles_Params Parms{};

	Parms.Handles = Handles;
	Parms.CurrentHandle = CurrentHandle;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsAccumulation_Access_Interface = K2Node_DynamicCast_AsAccumulation_Access_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_TryGetAccumulationInstanceValue_OutValue = CallFunc_TryGetAccumulationInstanceValue_OutValue;
	Parms.CallFunc_TryGetAccumulationInstanceValue_ReturnValue = CallFunc_TryGetAccumulationInstanceValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StatusEffectAccumulationBox.WBP_StatusEffectAccumulationBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_StatusEffectAccumulationBox_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StatusEffectAccumulationBox_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StatusEffectAccumulationBox.WBP_StatusEffectAccumulationBox_C.OnPawnPossessedAndReady
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                       NewPawn                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_StatusEffectAccumulationBox_C::OnPawnPossessedAndReady(class APawn* NewPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StatusEffectAccumulationBox_C", "OnPawnPossessedAndReady");

	Params::UWBP_StatusEffectAccumulationBox_C_OnPawnPossessedAndReady_Params Parms{};

	Parms.NewPawn = NewPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StatusEffectAccumulationBox.WBP_StatusEffectAccumulationBox_C.OnPawnUnpossessed
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                       OldPawn                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_StatusEffectAccumulationBox_C::OnPawnUnpossessed(class APawn* OldPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StatusEffectAccumulationBox_C", "OnPawnUnpossessed");

	Params::UWBP_StatusEffectAccumulationBox_C_OnPawnUnpossessed_Params Parms{};

	Parms.OldPawn = OldPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StatusEffectAccumulationBox.WBP_StatusEffectAccumulationBox_C.ExecuteUbergraph_WBP_StatusEffectAccumulationBox
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_NewPawn                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IAccumulationAccessInterface>K2Node_DynamicCast_AsAccumulation_Access_Interface               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IAccumulationAccessInterface>K2Node_DynamicCast_AsAccumulation_Access_Interface_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAccumulationHandle> CallFunc_TryGetAllAccumulationHandles_OutHandles                 (ReferenceParm)
// bool                               CallFunc_TryGetAllAccumulationHandles_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IAccumulationAccessInterface>K2Node_DynamicCast_AsAccumulation_Access_Interface_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_OldPawn                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_StatusEffectAccumulationBox_C::ExecuteUbergraph_WBP_StatusEffectAccumulationBox(int32 EntryPoint, class APawn* K2Node_Event_NewPawn, TScriptInterface<class IAccumulationAccessInterface> K2Node_DynamicCast_AsAccumulation_Access_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IAccumulationAccessInterface> K2Node_DynamicCast_AsAccumulation_Access_Interface_1, bool K2Node_DynamicCast_bSuccess_1, TArray<struct FAccumulationHandle>& CallFunc_TryGetAllAccumulationHandles_OutHandles, bool CallFunc_TryGetAllAccumulationHandles_ReturnValue, TScriptInterface<class IAccumulationAccessInterface> K2Node_DynamicCast_AsAccumulation_Access_Interface_2, bool K2Node_DynamicCast_bSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APawn* K2Node_Event_OldPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StatusEffectAccumulationBox_C", "ExecuteUbergraph_WBP_StatusEffectAccumulationBox");

	Params::UWBP_StatusEffectAccumulationBox_C_ExecuteUbergraph_WBP_StatusEffectAccumulationBox_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NewPawn = K2Node_Event_NewPawn;
	Parms.K2Node_DynamicCast_AsAccumulation_Access_Interface = K2Node_DynamicCast_AsAccumulation_Access_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsAccumulation_Access_Interface_1 = K2Node_DynamicCast_AsAccumulation_Access_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_TryGetAllAccumulationHandles_OutHandles = CallFunc_TryGetAllAccumulationHandles_OutHandles;
	Parms.CallFunc_TryGetAllAccumulationHandles_ReturnValue = CallFunc_TryGetAllAccumulationHandles_ReturnValue;
	Parms.K2Node_DynamicCast_AsAccumulation_Access_Interface_2 = K2Node_DynamicCast_AsAccumulation_Access_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_OldPawn = K2Node_Event_OldPawn;

	UObject::ProcessEvent(Func, &Parms);

}

}


