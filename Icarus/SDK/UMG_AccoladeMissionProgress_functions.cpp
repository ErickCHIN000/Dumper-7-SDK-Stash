#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_AccoladeMissionProgress.UMG_AccoladeMissionProgress_C
// (None)

class UClass* UUMG_AccoladeMissionProgress_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_AccoladeMissionProgress_C");

	return Clss;
}


// UMG_AccoladeMissionProgress_C UMG_AccoladeMissionProgress.Default__UMG_AccoladeMissionProgress_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_AccoladeMissionProgress_C* UUMG_AccoladeMissionProgress_C::GetDefaultObj()
{
	static class UUMG_AccoladeMissionProgress_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_AccoladeMissionProgress_C*>(UUMG_AccoladeMissionProgress_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_AccoladeMissionProgress.UMG_AccoladeMissionProgress_C.InitAccolade
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_AccoladeTooltip_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAccoladeData               CallFunc_GetAccoladesStruct_Accolades                            (None)
// enum class EValid                  CallFunc_GetAccoladesStruct_Paths                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_AccoladeMissionProgress_C::InitAccolade(class UUMG_AccoladeTooltip_C* CallFunc_Create_ReturnValue, const struct FAccoladeData& CallFunc_GetAccoladesStruct_Accolades, enum class EValid CallFunc_GetAccoladesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AccoladeMissionProgress_C", "InitAccolade");

	Params::UUMG_AccoladeMissionProgress_C_InitAccolade_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetAccoladesStruct_Accolades = CallFunc_GetAccoladesStruct_Accolades;
	Parms.CallFunc_GetAccoladesStruct_Paths = CallFunc_GetAccoladesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_AccoladeMissionProgress.UMG_AccoladeMissionProgress_C.UpdateState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FAccoladeTaskState>  TaskStates                                                       (Edit, BlueprintVisible)
// class UAccoladeSubsystem*          CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerCharacter_IsValid                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAccoladeSubsystem*          CallFunc_GetWorldSubsystem_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAccoladeTaskState>  CallFunc_GetAccoladeTaskStates_ReturnValue                       (ReferenceParm)
// int32                              CallFunc_GetAccoladeProgress_CurrentValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetAccoladeProgress_MaxValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_GetAccoladeProgress_TimeCompleted                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAccoladeProgress_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTaskListAccolade_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_AccoladeMissionProgress_C::UpdateState(const TArray<struct FAccoladeTaskState>& TaskStates, class UAccoladeSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, class UAccoladeSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, TArray<struct FAccoladeTaskState>& CallFunc_GetAccoladeTaskStates_ReturnValue, int32 CallFunc_GetAccoladeProgress_CurrentValue, int32 CallFunc_GetAccoladeProgress_MaxValue, const struct FDateTime& CallFunc_GetAccoladeProgress_TimeCompleted, bool CallFunc_GetAccoladeProgress_ReturnValue, float K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Min_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, float CallFunc_Divide_FloatFloat_ReturnValue, class FText CallFunc_Format_ReturnValue, float CallFunc_FClamp_ReturnValue, bool CallFunc_IsTaskListAccolade_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AccoladeMissionProgress_C", "UpdateState");

	Params::UUMG_AccoladeMissionProgress_C_UpdateState_Params Parms{};

	Parms.TaskStates = TaskStates;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerCharacter_IsValid = CallFunc_GetIcarusPlayerCharacter_IsValid;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_1 = CallFunc_GetWorldSubsystem_ReturnValue_1;
	Parms.CallFunc_GetAccoladeTaskStates_ReturnValue = CallFunc_GetAccoladeTaskStates_ReturnValue;
	Parms.CallFunc_GetAccoladeProgress_CurrentValue = CallFunc_GetAccoladeProgress_CurrentValue;
	Parms.CallFunc_GetAccoladeProgress_MaxValue = CallFunc_GetAccoladeProgress_MaxValue;
	Parms.CallFunc_GetAccoladeProgress_TimeCompleted = CallFunc_GetAccoladeProgress_TimeCompleted;
	Parms.CallFunc_GetAccoladeProgress_ReturnValue = CallFunc_GetAccoladeProgress_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_IsTaskListAccolade_ReturnValue = CallFunc_IsTaskListAccolade_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_AccoladeMissionProgress.UMG_AccoladeMissionProgress_C.Finished_ECE88B094DF845745D1F47869C29E97C
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_AccoladeMissionProgress_C::Finished_ECE88B094DF845745D1F47869C29E97C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AccoladeMissionProgress_C", "Finished_ECE88B094DF845745D1F47869C29E97C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_AccoladeMissionProgress.UMG_AccoladeMissionProgress_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_AccoladeMissionProgress_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AccoladeMissionProgress_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_AccoladeMissionProgress.UMG_AccoladeMissionProgress_C.PlayCompleteAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_AccoladeMissionProgress_C::PlayCompleteAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AccoladeMissionProgress_C", "PlayCompleteAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_AccoladeMissionProgress.UMG_AccoladeMissionProgress_C.ExecuteUbergraph_UMG_AccoladeMissionProgress
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_AccoladeMissionProgress_C::ExecuteUbergraph_UMG_AccoladeMissionProgress(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AccoladeMissionProgress_C", "ExecuteUbergraph_UMG_AccoladeMissionProgress");

	Params::UUMG_AccoladeMissionProgress_C_ExecuteUbergraph_UMG_AccoladeMissionProgress_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


