#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RCowgirlSM_G.RCowgirlSM_G_C
// (None)

class UClass* URCowgirlSM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RCowgirlSM_G_C");

	return Clss;
}


// RCowgirlSM_G_C RCowgirlSM_G.Default__RCowgirlSM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URCowgirlSM_G_C* URCowgirlSM_G_C::GetDefaultObj()
{
	static class URCowgirlSM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URCowgirlSM_G_C*>(URCowgirlSM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


