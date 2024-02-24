#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RCowgirlHM_G.RCowgirlHM_G_C
// (None)

class UClass* URCowgirlHM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RCowgirlHM_G_C");

	return Clss;
}


// RCowgirlHM_G_C RCowgirlHM_G.Default__RCowgirlHM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URCowgirlHM_G_C* URCowgirlHM_G_C::GetDefaultObj()
{
	static class URCowgirlHM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URCowgirlHM_G_C*>(URCowgirlHM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


