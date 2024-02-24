#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideSensations_RL.PrideSensations_RL_C
// (None)

class UClass* UPrideSensations_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideSensations_RL_C");

	return Clss;
}


// PrideSensations_RL_C PrideSensations_RL.Default__PrideSensations_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideSensations_RL_C* UPrideSensations_RL_C::GetDefaultObj()
{
	static class UPrideSensations_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideSensations_RL_C*>(UPrideSensations_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}


