#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BuffObjectStaggerImmunity.BuffObjectStaggerImmunity_C
// (None)

class UClass* UBuffObjectStaggerImmunity_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BuffObjectStaggerImmunity_C");

	return Clss;
}


// BuffObjectStaggerImmunity_C BuffObjectStaggerImmunity.Default__BuffObjectStaggerImmunity_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBuffObjectStaggerImmunity_C* UBuffObjectStaggerImmunity_C::GetDefaultObj()
{
	static class UBuffObjectStaggerImmunity_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBuffObjectStaggerImmunity_C*>(UBuffObjectStaggerImmunity_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BuffObjectStaggerImmunity.BuffObjectStaggerImmunity_C.UnpauseStatusIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetGameplayPCFromActor_Gameplay_PC                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBuffObjectStaggerImmunity_C::UnpauseStatusIcon(class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectStaggerImmunity_C", "UnpauseStatusIcon");

	Params::UBuffObjectStaggerImmunity_C_UnpauseStatusIcon_Params Parms{};

	Parms.CallFunc_GetGameplayPCFromActor_Gameplay_PC = CallFunc_GetGameplayPCFromActor_Gameplay_PC;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuffObjectStaggerImmunity.BuffObjectStaggerImmunity_C.PauseStatusIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetGameplayPCFromActor_Gameplay_PC                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBuffObjectStaggerImmunity_C::PauseStatusIcon(class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectStaggerImmunity_C", "PauseStatusIcon");

	Params::UBuffObjectStaggerImmunity_C_PauseStatusIcon_Params Parms{};

	Parms.CallFunc_GetGameplayPCFromActor_Gameplay_PC = CallFunc_GetGameplayPCFromActor_Gameplay_PC;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuffObjectStaggerImmunity.BuffObjectStaggerImmunity_C.RemoveStatusIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetGameplayPCFromActor_Gameplay_PC                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBuffObjectStaggerImmunity_C::RemoveStatusIcon(class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectStaggerImmunity_C", "RemoveStatusIcon");

	Params::UBuffObjectStaggerImmunity_C_RemoveStatusIcon_Params Parms{};

	Parms.CallFunc_GetGameplayPCFromActor_Gameplay_PC = CallFunc_GetGameplayPCFromActor_Gameplay_PC;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuffObjectStaggerImmunity.BuffObjectStaggerImmunity_C.AddStatusIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              IconID                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetGameplayPCFromActor_Gameplay_PC                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AddStatusIcon_IconID                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuffObjectStaggerImmunity_C::AddStatusIcon(int32* IconID, class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_AddStatusIcon_IconID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectStaggerImmunity_C", "AddStatusIcon");

	Params::UBuffObjectStaggerImmunity_C_AddStatusIcon_Params Parms{};

	Parms.CallFunc_GetGameplayPCFromActor_Gameplay_PC = CallFunc_GetGameplayPCFromActor_Gameplay_PC;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_AddStatusIcon_IconID = CallFunc_AddStatusIcon_IconID;

	UObject::ProcessEvent(Func, &Parms);

	if (IconID != nullptr)
		*IconID = Parms.IconID;

}


// Function BuffObjectStaggerImmunity.BuffObjectStaggerImmunity_C.OverrideStatusIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetGameplayPCFromActor_Gameplay_PC                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBuffObjectStaggerImmunity_C::OverrideStatusIcon(float Duration, class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectStaggerImmunity_C", "OverrideStatusIcon");

	Params::UBuffObjectStaggerImmunity_C_OverrideStatusIcon_Params Parms{};

	Parms.Duration = Duration;
	Parms.CallFunc_GetGameplayPCFromActor_Gameplay_PC = CallFunc_GetGameplayPCFromActor_Gameplay_PC;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuffObjectStaggerImmunity.BuffObjectStaggerImmunity_C.OnBuffStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBuffObjectStaggerImmunity_C::OnBuffStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectStaggerImmunity_C", "OnBuffStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BuffObjectStaggerImmunity.BuffObjectStaggerImmunity_C.OnBuffEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInterrupted                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBuffObjectStaggerImmunity_C::OnBuffEnd(bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectStaggerImmunity_C", "OnBuffEnd");

	Params::UBuffObjectStaggerImmunity_C_OnBuffEnd_Params Parms{};

	Parms.bInterrupted = bInterrupted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuffObjectStaggerImmunity.BuffObjectStaggerImmunity_C.Reinitialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewDuration                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuffObjectStaggerImmunity_C::Reinitialize(float NewDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectStaggerImmunity_C", "Reinitialize");

	Params::UBuffObjectStaggerImmunity_C_Reinitialize_Params Parms{};

	Parms.NewDuration = NewDuration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuffObjectStaggerImmunity.BuffObjectStaggerImmunity_C.ExecuteUbergraph_BuffObjectStaggerImmunity
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_NewDuration                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bInterrupted                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AddStatusIcon_IconID                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBuffObjectStaggerImmunity_C::ExecuteUbergraph_BuffObjectStaggerImmunity(int32 EntryPoint, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, float K2Node_CustomEvent_NewDuration, bool K2Node_Event_bInterrupted, int32 CallFunc_AddStatusIcon_IconID, class AZero_Base_C* K2Node_DynamicCast_As0_Base_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffObjectStaggerImmunity_C", "ExecuteUbergraph_BuffObjectStaggerImmunity");

	Params::UBuffObjectStaggerImmunity_C_ExecuteUbergraph_BuffObjectStaggerImmunity_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_NewDuration = K2Node_CustomEvent_NewDuration;
	Parms.K2Node_Event_bInterrupted = K2Node_Event_bInterrupted;
	Parms.CallFunc_AddStatusIcon_IconID = CallFunc_AddStatusIcon_IconID;
	Parms.K2Node_DynamicCast_As0_Base_1 = K2Node_DynamicCast_As0_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


