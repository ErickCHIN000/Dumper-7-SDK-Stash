#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Ocean_Clear_Volume.BP_Ocean_Clear_Volume_C
// (Actor)

class UClass* ABP_Ocean_Clear_Volume_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Ocean_Clear_Volume_C");

	return Clss;
}


// BP_Ocean_Clear_Volume_C BP_Ocean_Clear_Volume.Default__BP_Ocean_Clear_Volume_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Ocean_Clear_Volume_C* ABP_Ocean_Clear_Volume_C::GetDefaultObj()
{
	static class ABP_Ocean_Clear_Volume_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Ocean_Clear_Volume_C*>(ABP_Ocean_Clear_Volume_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Ocean_Clear_Volume.BP_Ocean_Clear_Volume_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_K2_SetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Ocean_Clear_Volume_C::UserConstructionScript(bool CallFunc_K2_SetActorRotation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ocean_Clear_Volume_C", "UserConstructionScript");

	Params::ABP_Ocean_Clear_Volume_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_K2_SetActorRotation_ReturnValue = CallFunc_K2_SetActorRotation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


