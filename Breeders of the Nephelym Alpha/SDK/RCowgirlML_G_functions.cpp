#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RCowgirlML_G.RCowgirlML_G_C
// (None)

class UClass* URCowgirlML_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RCowgirlML_G_C");

	return Clss;
}


// RCowgirlML_G_C RCowgirlML_G.Default__RCowgirlML_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URCowgirlML_G_C* URCowgirlML_G_C::GetDefaultObj()
{
	static class URCowgirlML_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URCowgirlML_G_C*>(URCowgirlML_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


