#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BuffResolve.BuffResolve_C
// (None)

class UClass* UBuffResolve_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BuffResolve_C");

	return Clss;
}


// BuffResolve_C BuffResolve.Default__BuffResolve_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBuffResolve_C* UBuffResolve_C::GetDefaultObj()
{
	static class UBuffResolve_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBuffResolve_C*>(UBuffResolve_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BuffResolve.BuffResolve_C.OnBuffStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBuffResolve_C::OnBuffStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffResolve_C", "OnBuffStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BuffResolve.BuffResolve_C.OnBuffEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInterrupted                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBuffResolve_C::OnBuffEnd(bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffResolve_C", "OnBuffEnd");

	Params::UBuffResolve_C_OnBuffEnd_Params Parms{};

	Parms.bInterrupted = bInterrupted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuffResolve.BuffResolve_C.ExecuteUbergraph_BuffResolve
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bInterrupted                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetActorToBuffAs0Base_As0_Base                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetActorToBuffAs0Base_As0_Base_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuffResolve_C::ExecuteUbergraph_BuffResolve(int32 EntryPoint, bool K2Node_Event_bInterrupted, class AZero_Base_C* CallFunc_GetActorToBuffAs0Base_As0_Base, class AZero_Base_C* CallFunc_GetActorToBuffAs0Base_As0_Base_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuffResolve_C", "ExecuteUbergraph_BuffResolve");

	Params::UBuffResolve_C_ExecuteUbergraph_BuffResolve_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bInterrupted = K2Node_Event_bInterrupted;
	Parms.CallFunc_GetActorToBuffAs0Base_As0_Base = CallFunc_GetActorToBuffAs0Base_As0_Base;
	Parms.CallFunc_GetActorToBuffAs0Base_As0_Base_1 = CallFunc_GetActorToBuffAs0Base_As0_Base_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


