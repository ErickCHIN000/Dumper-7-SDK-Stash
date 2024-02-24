#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TemperatureVolume_Campfire.TemperatureVolume_Campfire_C
// (Actor)

class UClass* ATemperatureVolume_Campfire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TemperatureVolume_Campfire_C");

	return Clss;
}


// TemperatureVolume_Campfire_C TemperatureVolume_Campfire.Default__TemperatureVolume_Campfire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATemperatureVolume_Campfire_C* ATemperatureVolume_Campfire_C::GetDefaultObj()
{
	static class ATemperatureVolume_Campfire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATemperatureVolume_Campfire_C*>(ATemperatureVolume_Campfire_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TemperatureVolume_Campfire.TemperatureVolume_Campfire_C.OnPlayerEnterEvent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASHPlayerCharacter*          Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnPlayerEnterEvent_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ATemperatureVolume_Campfire_C::OnPlayerEnterEvent(class ASHPlayerCharacter* Character, bool CallFunc_OnPlayerEnterEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TemperatureVolume_Campfire_C", "OnPlayerEnterEvent");

	Params::ATemperatureVolume_Campfire_C_OnPlayerEnterEvent_Params Parms{};

	Parms.Character = Character;
	Parms.CallFunc_OnPlayerEnterEvent_ReturnValue = CallFunc_OnPlayerEnterEvent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TemperatureVolume_Campfire.TemperatureVolume_Campfire_C.OnPlayerLeaveEvent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASHPlayerCharacter*          Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnPlayerLeaveEvent_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ATemperatureVolume_Campfire_C::OnPlayerLeaveEvent(class ASHPlayerCharacter* Character, bool CallFunc_OnPlayerLeaveEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TemperatureVolume_Campfire_C", "OnPlayerLeaveEvent");

	Params::ATemperatureVolume_Campfire_C_OnPlayerLeaveEvent_Params Parms{};

	Parms.Character = Character;
	Parms.CallFunc_OnPlayerLeaveEvent_ReturnValue = CallFunc_OnPlayerLeaveEvent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


