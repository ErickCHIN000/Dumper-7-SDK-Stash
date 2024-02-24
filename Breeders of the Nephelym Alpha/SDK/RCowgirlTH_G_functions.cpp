#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RCowgirlTH_G.RCowgirlTH_G_C
// (None)

class UClass* URCowgirlTH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RCowgirlTH_G_C");

	return Clss;
}


// RCowgirlTH_G_C RCowgirlTH_G.Default__RCowgirlTH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URCowgirlTH_G_C* URCowgirlTH_G_C::GetDefaultObj()
{
	static class URCowgirlTH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URCowgirlTH_G_C*>(URCowgirlTH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


