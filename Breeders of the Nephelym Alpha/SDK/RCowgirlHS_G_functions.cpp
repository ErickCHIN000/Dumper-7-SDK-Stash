#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RCowgirlHS_G.RCowgirlHS_G_C
// (None)

class UClass* URCowgirlHS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RCowgirlHS_G_C");

	return Clss;
}


// RCowgirlHS_G_C RCowgirlHS_G.Default__RCowgirlHS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URCowgirlHS_G_C* URCowgirlHS_G_C::GetDefaultObj()
{
	static class URCowgirlHS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URCowgirlHS_G_C*>(URCowgirlHS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


