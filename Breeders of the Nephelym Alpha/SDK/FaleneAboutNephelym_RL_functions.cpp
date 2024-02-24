#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FaleneAboutNephelym_RL.FaleneAboutNephelym_RL_C
// (None)

class UClass* UFaleneAboutNephelym_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FaleneAboutNephelym_RL_C");

	return Clss;
}


// FaleneAboutNephelym_RL_C FaleneAboutNephelym_RL.Default__FaleneAboutNephelym_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFaleneAboutNephelym_RL_C* UFaleneAboutNephelym_RL_C::GetDefaultObj()
{
	static class UFaleneAboutNephelym_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFaleneAboutNephelym_RL_C*>(UFaleneAboutNephelym_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}


