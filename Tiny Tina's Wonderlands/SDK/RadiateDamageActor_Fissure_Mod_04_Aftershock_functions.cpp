#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RadiateDamageActor_Fissure_Mod_04_Aftershock.RadiateDamageActor_Fissure_Mod_04_Aftershock_C
// (Actor)

class UClass* ARadiateDamageActor_Fissure_Mod_04_Aftershock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RadiateDamageActor_Fissure_Mod_04_Aftershock_C");

	return Clss;
}


// RadiateDamageActor_Fissure_Mod_04_Aftershock_C RadiateDamageActor_Fissure_Mod_04_Aftershock.Default__RadiateDamageActor_Fissure_Mod_04_Aftershock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARadiateDamageActor_Fissure_Mod_04_Aftershock_C* ARadiateDamageActor_Fissure_Mod_04_Aftershock_C::GetDefaultObj()
{
	static class ARadiateDamageActor_Fissure_Mod_04_Aftershock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARadiateDamageActor_Fissure_Mod_04_Aftershock_C*>(ARadiateDamageActor_Fissure_Mod_04_Aftershock_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RadiateDamageActor_Fissure_Mod_04_Aftershock.RadiateDamageActor_Fissure_Mod_04_Aftershock_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ARadiateDamageActor_Fissure_Mod_04_Aftershock_C::UserConstructionScript(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RadiateDamageActor_Fissure_Mod_04_Aftershock_C", "UserConstructionScript");

	Params::ARadiateDamageActor_Fissure_Mod_04_Aftershock_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


