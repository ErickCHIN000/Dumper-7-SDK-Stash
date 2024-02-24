#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RCowgirlLM_G.RCowgirlLM_G_C
// (None)

class UClass* URCowgirlLM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RCowgirlLM_G_C");

	return Clss;
}


// RCowgirlLM_G_C RCowgirlLM_G.Default__RCowgirlLM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URCowgirlLM_G_C* URCowgirlLM_G_C::GetDefaultObj()
{
	static class URCowgirlLM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URCowgirlLM_G_C*>(URCowgirlLM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


