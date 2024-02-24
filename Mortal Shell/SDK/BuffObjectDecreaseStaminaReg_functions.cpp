#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BuffObjectDecreaseStaminaReg.BuffObjectDecreaseStaminaReg_C
// (None)

class UClass* UBuffObjectDecreaseStaminaReg_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BuffObjectDecreaseStaminaReg_C");

	return Clss;
}


// BuffObjectDecreaseStaminaReg_C BuffObjectDecreaseStaminaReg.Default__BuffObjectDecreaseStaminaReg_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBuffObjectDecreaseStaminaReg_C* UBuffObjectDecreaseStaminaReg_C::GetDefaultObj()
{
	static class UBuffObjectDecreaseStaminaReg_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBuffObjectDecreaseStaminaReg_C*>(UBuffObjectDecreaseStaminaReg_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BuffObjectDecreaseStaminaReg.BuffObjectDecreaseStaminaReg_C.UnpauseStatusIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetGameplayPCFromActor_Gameplay_PC                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBuffObjectDecreaseStaminaReg_C::UnpauseStatusIcon(class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectDecreaseStaminaReg_C", "UnpauseStatusIcon");

	Params::UBuffObjectDecreaseStaminaReg_C_UnpauseStatusIcon_Params Parms{};

	Parms.CallFunc_GetGameplayPCFromActor_Gameplay_PC = CallFunc_GetGameplayPCFromActor_Gameplay_PC;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuffObjectDecreaseStaminaReg.BuffObjectDecreaseStaminaReg_C.PauseStatusIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetGameplayPCFromActor_Gameplay_PC                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBuffObjectDecreaseStaminaReg_C::PauseStatusIcon(class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectDecreaseStaminaReg_C", "PauseStatusIcon");

	Params::UBuffObjectDecreaseStaminaReg_C_PauseStatusIcon_Params Parms{};

	Parms.CallFunc_GetGameplayPCFromActor_Gameplay_PC = CallFunc_GetGameplayPCFromActor_Gameplay_PC;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuffObjectDecreaseStaminaReg.BuffObjectDecreaseStaminaReg_C.RemoveStatusIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetGameplayPCFromActor_Gameplay_PC                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBuffObjectDecreaseStaminaReg_C::RemoveStatusIcon(class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectDecreaseStaminaReg_C", "RemoveStatusIcon");

	Params::UBuffObjectDecreaseStaminaReg_C_RemoveStatusIcon_Params Parms{};

	Parms.CallFunc_GetGameplayPCFromActor_Gameplay_PC = CallFunc_GetGameplayPCFromActor_Gameplay_PC;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuffObjectDecreaseStaminaReg.BuffObjectDecreaseStaminaReg_C.AddStatusIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              IconID                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetGameplayPCFromActor_Gameplay_PC                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AddStatusIcon_IconID                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuffObjectDecreaseStaminaReg_C::AddStatusIcon(int32* IconID, class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_AddStatusIcon_IconID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectDecreaseStaminaReg_C", "AddStatusIcon");

	Params::UBuffObjectDecreaseStaminaReg_C_AddStatusIcon_Params Parms{};

	Parms.CallFunc_GetGameplayPCFromActor_Gameplay_PC = CallFunc_GetGameplayPCFromActor_Gameplay_PC;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_AddStatusIcon_IconID = CallFunc_AddStatusIcon_IconID;

	UObject::ProcessEvent(Func, &Parms);

	if (IconID != nullptr)
		*IconID = Parms.IconID;

}


// Function BuffObjectDecreaseStaminaReg.BuffObjectDecreaseStaminaReg_C.OverrideStatusIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetGameplayPCFromActor_Gameplay_PC                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBuffObjectDecreaseStaminaReg_C::OverrideStatusIcon(float Duration, class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectDecreaseStaminaReg_C", "OverrideStatusIcon");

	Params::UBuffObjectDecreaseStaminaReg_C_OverrideStatusIcon_Params Parms{};

	Parms.Duration = Duration;
	Parms.CallFunc_GetGameplayPCFromActor_Gameplay_PC = CallFunc_GetGameplayPCFromActor_Gameplay_PC;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuffObjectDecreaseStaminaReg.BuffObjectDecreaseStaminaReg_C.OnBuffEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInterrupted                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBuffObjectDecreaseStaminaReg_C::OnBuffEnd(bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectDecreaseStaminaReg_C", "OnBuffEnd");

	Params::UBuffObjectDecreaseStaminaReg_C_OnBuffEnd_Params Parms{};

	Parms.bInterrupted = bInterrupted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuffObjectDecreaseStaminaReg.BuffObjectDecreaseStaminaReg_C.Reinitialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewDuration                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuffObjectDecreaseStaminaReg_C::Reinitialize(float NewDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectDecreaseStaminaReg_C", "Reinitialize");

	Params::UBuffObjectDecreaseStaminaReg_C_Reinitialize_Params Parms{};

	Parms.NewDuration = NewDuration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuffObjectDecreaseStaminaReg.BuffObjectDecreaseStaminaReg_C.OnBuffStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBuffObjectDecreaseStaminaReg_C::OnBuffStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectDecreaseStaminaReg_C", "OnBuffStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BuffObjectDecreaseStaminaReg.BuffObjectDecreaseStaminaReg_C.ModifyTargetStaminaReg
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Sign                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuffObjectDecreaseStaminaReg_C::ModifyTargetStaminaReg(int32 Sign)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectDecreaseStaminaReg_C", "ModifyTargetStaminaReg");

	Params::UBuffObjectDecreaseStaminaReg_C_ModifyTargetStaminaReg_Params Parms{};

	Parms.Sign = Sign;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuffObjectDecreaseStaminaReg.BuffObjectDecreaseStaminaReg_C.ExecuteUbergraph_BuffObjectDecreaseStaminaReg
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bInterrupted                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_NewDuration                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AddStatusIcon_IconID                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Sign                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetActorToBuffAs0Base_As0_Base                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuffObjectDecreaseStaminaReg_C::ExecuteUbergraph_BuffObjectDecreaseStaminaReg(int32 EntryPoint, bool K2Node_Event_bInterrupted, float K2Node_CustomEvent_NewDuration, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_AddStatusIcon_IconID, int32 K2Node_CustomEvent_Sign, class AZero_Base_C* CallFunc_GetActorToBuffAs0Base_As0_Base, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectDecreaseStaminaReg_C", "ExecuteUbergraph_BuffObjectDecreaseStaminaReg");

	Params::UBuffObjectDecreaseStaminaReg_C_ExecuteUbergraph_BuffObjectDecreaseStaminaReg_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bInterrupted = K2Node_Event_bInterrupted;
	Parms.K2Node_CustomEvent_NewDuration = K2Node_CustomEvent_NewDuration;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_AddStatusIcon_IconID = CallFunc_AddStatusIcon_IconID;
	Parms.K2Node_CustomEvent_Sign = K2Node_CustomEvent_Sign;
	Parms.CallFunc_GetActorToBuffAs0Base_As0_Base = CallFunc_GetActorToBuffAs0Base_As0_Base;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


