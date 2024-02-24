#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RCowgirlNN_G.RCowgirlNN_G_C
// (None)

class UClass* URCowgirlNN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RCowgirlNN_G_C");

	return Clss;
}


// RCowgirlNN_G_C RCowgirlNN_G.Default__RCowgirlNN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URCowgirlNN_G_C* URCowgirlNN_G_C::GetDefaultObj()
{
	static class URCowgirlNN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URCowgirlNN_G_C*>(URCowgirlNN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


