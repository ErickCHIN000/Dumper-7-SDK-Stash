#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PlayerMinimalParty.WBP_PlayerMinimalParty_C
// (None)

class UClass* UWBP_PlayerMinimalParty_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PlayerMinimalParty_C");

	return Clss;
}


// WBP_PlayerMinimalParty_C WBP_PlayerMinimalParty.Default__WBP_PlayerMinimalParty_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PlayerMinimalParty_C* UWBP_PlayerMinimalParty_C::GetDefaultObj()
{
	static class UWBP_PlayerMinimalParty_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PlayerMinimalParty_C*>(UWBP_PlayerMinimalParty_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PlayerMinimalParty.WBP_PlayerMinimalParty_C.Get_CrownImage_Visibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASophiaPlayerState*          CallFunc_TryGetPlayerState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLeader_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UWBP_PlayerMinimalParty_C::Get_CrownImage_Visibility_0(class ASophiaPlayerState* CallFunc_TryGetPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLeader_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMinimalParty_C", "Get_CrownImage_Visibility_0");

	Params::UWBP_PlayerMinimalParty_C_Get_CrownImage_Visibility_0_Params Parms{};

	Parms.CallFunc_TryGetPlayerState_ReturnValue = CallFunc_TryGetPlayerState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsLeader_ReturnValue = CallFunc_IsLeader_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


