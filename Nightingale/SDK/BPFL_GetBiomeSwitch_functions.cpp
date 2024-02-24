#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_GetBiomeSwitch.BPFL_GetBiomeSwitch_C
// (None)

class UClass* UBPFL_GetBiomeSwitch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_GetBiomeSwitch_C");

	return Clss;
}


// BPFL_GetBiomeSwitch_C BPFL_GetBiomeSwitch.Default__BPFL_GetBiomeSwitch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_GetBiomeSwitch_C* UBPFL_GetBiomeSwitch_C::GetDefaultObj()
{
	static class UBPFL_GetBiomeSwitch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_GetBiomeSwitch_C*>(UBPFL_GetBiomeSwitch_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_GetBiomeSwitch.BPFL_GetBiomeSwitch_C.GetBiomeAudioSwitch
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              SWITCH                                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkSwitchValue*              BiomeSwitch                                                      (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXWorldSettings*           CallFunc_GetWorldSettings_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_GetBiomeSwitch_C::GetBiomeAudioSwitch(class UObject* __WorldContext, bool* Success, class UAkSwitchValue** SWITCH, class UAkSwitchValue* BiomeSwitch, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class ANWXWorldSettings* CallFunc_GetWorldSettings_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_GetBiomeSwitch_C", "GetBiomeAudioSwitch");

	Params::UBPFL_GetBiomeSwitch_C_GetBiomeAudioSwitch_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.BiomeSwitch = BiomeSwitch;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_GetWorldSettings_ReturnValue = CallFunc_GetWorldSettings_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (SWITCH != nullptr)
		*SWITCH = Parms.SWITCH;

}

}


