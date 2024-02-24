#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BuffObjectDrainStaminaOnHit.BuffObjectDrainStaminaOnHit_C
// (None)

class UClass* UBuffObjectDrainStaminaOnHit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BuffObjectDrainStaminaOnHit_C");

	return Clss;
}


// BuffObjectDrainStaminaOnHit_C BuffObjectDrainStaminaOnHit.Default__BuffObjectDrainStaminaOnHit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBuffObjectDrainStaminaOnHit_C* UBuffObjectDrainStaminaOnHit_C::GetDefaultObj()
{
	static class UBuffObjectDrainStaminaOnHit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBuffObjectDrainStaminaOnHit_C*>(UBuffObjectDrainStaminaOnHit_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BuffObjectDrainStaminaOnHit.BuffObjectDrainStaminaOnHit_C.UnpauseStatusIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetGameplayPCFromActor_Gameplay_PC                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBuffObjectDrainStaminaOnHit_C::UnpauseStatusIcon(class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectDrainStaminaOnHit_C", "UnpauseStatusIcon");

	Params::UBuffObjectDrainStaminaOnHit_C_UnpauseStatusIcon_Params Parms{};

	Parms.CallFunc_GetGameplayPCFromActor_Gameplay_PC = CallFunc_GetGameplayPCFromActor_Gameplay_PC;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuffObjectDrainStaminaOnHit.BuffObjectDrainStaminaOnHit_C.PauseStatusIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetGameplayPCFromActor_Gameplay_PC                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBuffObjectDrainStaminaOnHit_C::PauseStatusIcon(class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectDrainStaminaOnHit_C", "PauseStatusIcon");

	Params::UBuffObjectDrainStaminaOnHit_C_PauseStatusIcon_Params Parms{};

	Parms.CallFunc_GetGameplayPCFromActor_Gameplay_PC = CallFunc_GetGameplayPCFromActor_Gameplay_PC;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuffObjectDrainStaminaOnHit.BuffObjectDrainStaminaOnHit_C.RemoveStatusIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetGameplayPCFromActor_Gameplay_PC                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBuffObjectDrainStaminaOnHit_C::RemoveStatusIcon(class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectDrainStaminaOnHit_C", "RemoveStatusIcon");

	Params::UBuffObjectDrainStaminaOnHit_C_RemoveStatusIcon_Params Parms{};

	Parms.CallFunc_GetGameplayPCFromActor_Gameplay_PC = CallFunc_GetGameplayPCFromActor_Gameplay_PC;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuffObjectDrainStaminaOnHit.BuffObjectDrainStaminaOnHit_C.AddStatusIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              IconID                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetGameplayPCFromActor_Gameplay_PC                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AddStatusIcon_IconID                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuffObjectDrainStaminaOnHit_C::AddStatusIcon(int32* IconID, class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_AddStatusIcon_IconID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectDrainStaminaOnHit_C", "AddStatusIcon");

	Params::UBuffObjectDrainStaminaOnHit_C_AddStatusIcon_Params Parms{};

	Parms.CallFunc_GetGameplayPCFromActor_Gameplay_PC = CallFunc_GetGameplayPCFromActor_Gameplay_PC;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_AddStatusIcon_IconID = CallFunc_AddStatusIcon_IconID;

	UObject::ProcessEvent(Func, &Parms);

	if (IconID != nullptr)
		*IconID = Parms.IconID;

}


// Function BuffObjectDrainStaminaOnHit.BuffObjectDrainStaminaOnHit_C.OverrideStatusIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetGameplayPCFromActor_Gameplay_PC                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBuffObjectDrainStaminaOnHit_C::OverrideStatusIcon(float Duration, class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectDrainStaminaOnHit_C", "OverrideStatusIcon");

	Params::UBuffObjectDrainStaminaOnHit_C_OverrideStatusIcon_Params Parms{};

	Parms.Duration = Duration;
	Parms.CallFunc_GetGameplayPCFromActor_Gameplay_PC = CallFunc_GetGameplayPCFromActor_Gameplay_PC;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuffObjectDrainStaminaOnHit.BuffObjectDrainStaminaOnHit_C.OnBuffEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInterrupted                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBuffObjectDrainStaminaOnHit_C::OnBuffEnd(bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectDrainStaminaOnHit_C", "OnBuffEnd");

	Params::UBuffObjectDrainStaminaOnHit_C_OnBuffEnd_Params Parms{};

	Parms.bInterrupted = bInterrupted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuffObjectDrainStaminaOnHit.BuffObjectDrainStaminaOnHit_C.Reinitialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewDuration                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuffObjectDrainStaminaOnHit_C::Reinitialize(float NewDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectDrainStaminaOnHit_C", "Reinitialize");

	Params::UBuffObjectDrainStaminaOnHit_C_Reinitialize_Params Parms{};

	Parms.NewDuration = NewDuration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuffObjectDrainStaminaOnHit.BuffObjectDrainStaminaOnHit_C.OnBuffStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBuffObjectDrainStaminaOnHit_C::OnBuffStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectDrainStaminaOnHit_C", "OnBuffStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BuffObjectDrainStaminaOnHit.BuffObjectDrainStaminaOnHit_C.OnDamageAppliedToHitTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBuffObjectDrainStaminaOnHit_C::OnDamageAppliedToHitTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectDrainStaminaOnHit_C", "OnDamageAppliedToHitTarget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BuffObjectDrainStaminaOnHit.BuffObjectDrainStaminaOnHit_C.ExecuteUbergraph_BuffObjectDrainStaminaOnHit
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_NewDuration                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bInterrupted                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              CallFunc_AddStatusIcon_IconID                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuffObjectDrainStaminaOnHit_C::ExecuteUbergraph_BuffObjectDrainStaminaOnHit(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, float K2Node_CustomEvent_NewDuration, bool K2Node_Event_bInterrupted, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_AddStatusIcon_IconID, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectDrainStaminaOnHit_C", "ExecuteUbergraph_BuffObjectDrainStaminaOnHit");

	Params::UBuffObjectDrainStaminaOnHit_C_ExecuteUbergraph_BuffObjectDrainStaminaOnHit_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_NewDuration = K2Node_CustomEvent_NewDuration;
	Parms.K2Node_Event_bInterrupted = K2Node_Event_bInterrupted;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_AddStatusIcon_IconID = CallFunc_AddStatusIcon_IconID;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


