#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RCowgirlHN_G.RCowgirlHN_G_C
// (None)

class UClass* URCowgirlHN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RCowgirlHN_G_C");

	return Clss;
}


// RCowgirlHN_G_C RCowgirlHN_G.Default__RCowgirlHN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URCowgirlHN_G_C* URCowgirlHN_G_C::GetDefaultObj()
{
	static class URCowgirlHN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URCowgirlHN_G_C*>(URCowgirlHN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


