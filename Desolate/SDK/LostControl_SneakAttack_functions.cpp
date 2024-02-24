#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LostControl_SneakAttack.LostControl_SneakAttack_C
// (Actor)

class UClass* ALostControl_SneakAttack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LostControl_SneakAttack_C");

	return Clss;
}


// LostControl_SneakAttack_C LostControl_SneakAttack.Default__LostControl_SneakAttack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALostControl_SneakAttack_C* ALostControl_SneakAttack_C::GetDefaultObj()
{
	static class ALostControl_SneakAttack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALostControl_SneakAttack_C*>(ALostControl_SneakAttack_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LostControl_SneakAttack.LostControl_SneakAttack_C.DisableAllNegativeEffects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASHPlayerCharacter*          CallFunc_GetCharacter_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASHPlayerCharacter*          CallFunc_GetCharacter_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USHCuringEvent*              CallFunc_CreateCuringEvent_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USHCuringEvent*              CallFunc_CreateCuringEvent_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USHTraumaCuringEvent*        CallFunc_CreateTraumaCuringEvent_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Apply_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Apply_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ApplyTraumaCuring_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASHPlayerCharacter*          CallFunc_GetCharacter_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDefaultMaxValue_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDefaultMaxValue_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDefaultMaxValue_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALostControl_SneakAttack_C::DisableAllNegativeEffects(class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue, class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue_1, class USHCuringEvent* CallFunc_CreateCuringEvent_ReturnValue, class USHCuringEvent* CallFunc_CreateCuringEvent_ReturnValue_1, class USHTraumaCuringEvent* CallFunc_CreateTraumaCuringEvent_ReturnValue, bool CallFunc_Apply_ReturnValue, bool CallFunc_Apply_ReturnValue_1, bool CallFunc_ApplyTraumaCuring_ReturnValue, class ASHPlayerCharacter* CallFunc_GetCharacter_ReturnValue_2, float CallFunc_GetDefaultMaxValue_ReturnValue, float CallFunc_GetDefaultMaxValue_ReturnValue_1, float CallFunc_GetDefaultMaxValue_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LostControl_SneakAttack_C", "DisableAllNegativeEffects");

	Params::ALostControl_SneakAttack_C_DisableAllNegativeEffects_Params Parms{};

	Parms.CallFunc_GetCharacter_ReturnValue = CallFunc_GetCharacter_ReturnValue;
	Parms.CallFunc_GetCharacter_ReturnValue_1 = CallFunc_GetCharacter_ReturnValue_1;
	Parms.CallFunc_CreateCuringEvent_ReturnValue = CallFunc_CreateCuringEvent_ReturnValue;
	Parms.CallFunc_CreateCuringEvent_ReturnValue_1 = CallFunc_CreateCuringEvent_ReturnValue_1;
	Parms.CallFunc_CreateTraumaCuringEvent_ReturnValue = CallFunc_CreateTraumaCuringEvent_ReturnValue;
	Parms.CallFunc_Apply_ReturnValue = CallFunc_Apply_ReturnValue;
	Parms.CallFunc_Apply_ReturnValue_1 = CallFunc_Apply_ReturnValue_1;
	Parms.CallFunc_ApplyTraumaCuring_ReturnValue = CallFunc_ApplyTraumaCuring_ReturnValue;
	Parms.CallFunc_GetCharacter_ReturnValue_2 = CallFunc_GetCharacter_ReturnValue_2;
	Parms.CallFunc_GetDefaultMaxValue_ReturnValue = CallFunc_GetDefaultMaxValue_ReturnValue;
	Parms.CallFunc_GetDefaultMaxValue_ReturnValue_1 = CallFunc_GetDefaultMaxValue_ReturnValue_1;
	Parms.CallFunc_GetDefaultMaxValue_ReturnValue_2 = CallFunc_GetDefaultMaxValue_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


