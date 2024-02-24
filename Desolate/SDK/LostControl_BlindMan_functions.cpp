#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LostControl_BlindMan.LostControl_BlindMan_C
// (Actor)

class UClass* ALostControl_BlindMan_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LostControl_BlindMan_C");

	return Clss;
}


// LostControl_BlindMan_C LostControl_BlindMan.Default__LostControl_BlindMan_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALostControl_BlindMan_C* ALostControl_BlindMan_C::GetDefaultObj()
{
	static class ALostControl_BlindMan_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALostControl_BlindMan_C*>(ALostControl_BlindMan_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LostControl_BlindMan.LostControl_BlindMan_C.OnApply
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ALostControl_BlindMan_C::OnApply()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LostControl_BlindMan_C", "OnApply");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LostControl_BlindMan.LostControl_BlindMan_C.OnFinish
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bWasInterruptedByQTE                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ALostControl_BlindMan_C::OnFinish(bool bWasInterruptedByQTE)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LostControl_BlindMan_C", "OnFinish");

	Params::ALostControl_BlindMan_C_OnFinish_Params Parms{};

	Parms.bWasInterruptedByQTE = bWasInterruptedByQTE;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LostControl_BlindMan.LostControl_BlindMan_C.ExecuteUbergraph_LostControl_BlindMan
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasInterruptedByQTE                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWeaponAnimMontageInfo      CallFunc_GetCurrentWeaponMontage_ReturnValue                     (ConstParm, NoDestructor)
// float                              CallFunc_PlayWeaponAnimation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALostControl_BlindMan_C::ExecuteUbergraph_LostControl_BlindMan(int32 EntryPoint, bool K2Node_Event_bWasInterruptedByQTE, const struct FWeaponAnimMontageInfo& CallFunc_GetCurrentWeaponMontage_ReturnValue, float CallFunc_PlayWeaponAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LostControl_BlindMan_C", "ExecuteUbergraph_LostControl_BlindMan");

	Params::ALostControl_BlindMan_C_ExecuteUbergraph_LostControl_BlindMan_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bWasInterruptedByQTE = K2Node_Event_bWasInterruptedByQTE;
	Parms.CallFunc_GetCurrentWeaponMontage_ReturnValue = CallFunc_GetCurrentWeaponMontage_ReturnValue;
	Parms.CallFunc_PlayWeaponAnimation_ReturnValue = CallFunc_PlayWeaponAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


