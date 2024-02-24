#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BuffDamageResist.BuffDamageResist_C
// (None)

class UClass* UBuffDamageResist_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BuffDamageResist_C");

	return Clss;
}


// BuffDamageResist_C BuffDamageResist.Default__BuffDamageResist_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBuffDamageResist_C* UBuffDamageResist_C::GetDefaultObj()
{
	static class UBuffDamageResist_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBuffDamageResist_C*>(UBuffDamageResist_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BuffDamageResist.BuffDamageResist_C.OnBuffStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBuffDamageResist_C::OnBuffStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffDamageResist_C", "OnBuffStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BuffDamageResist.BuffDamageResist_C.OnBuffEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInterrupted                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBuffDamageResist_C::OnBuffEnd(bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffDamageResist_C", "OnBuffEnd");

	Params::UBuffDamageResist_C_OnBuffEnd_Params Parms{};

	Parms.bInterrupted = bInterrupted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuffDamageResist.BuffDamageResist_C.ExecuteUbergraph_BuffDamageResist
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetGameplayPCFromActor_Gameplay_PC                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bInterrupted                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetGameplayPCFromActor_Gameplay_PC_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuffDamageResist_C::ExecuteUbergraph_BuffDamageResist(int32 EntryPoint, class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC, bool K2Node_Event_bInterrupted, float CallFunc_Add_FloatFloat_ReturnValue, class AGameplayPC_C* CallFunc_GetGameplayPCFromActor_Gameplay_PC_1, float CallFunc_Subtract_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffDamageResist_C", "ExecuteUbergraph_BuffDamageResist");

	Params::UBuffDamageResist_C_ExecuteUbergraph_BuffDamageResist_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameplayPCFromActor_Gameplay_PC = CallFunc_GetGameplayPCFromActor_Gameplay_PC;
	Parms.K2Node_Event_bInterrupted = K2Node_Event_bInterrupted;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetGameplayPCFromActor_Gameplay_PC_1 = CallFunc_GetGameplayPCFromActor_Gameplay_PC_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


