#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RCowgirlSH_G.RCowgirlSH_G_C
// (None)

class UClass* URCowgirlSH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RCowgirlSH_G_C");

	return Clss;
}


// RCowgirlSH_G_C RCowgirlSH_G.Default__RCowgirlSH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URCowgirlSH_G_C* URCowgirlSH_G_C::GetDefaultObj()
{
	static class URCowgirlSH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URCowgirlSH_G_C*>(URCowgirlSH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


