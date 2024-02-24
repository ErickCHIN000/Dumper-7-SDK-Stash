#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RCowgirlHL_G.RCowgirlHL_G_C
// (None)

class UClass* URCowgirlHL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RCowgirlHL_G_C");

	return Clss;
}


// RCowgirlHL_G_C RCowgirlHL_G.Default__RCowgirlHL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URCowgirlHL_G_C* URCowgirlHL_G_C::GetDefaultObj()
{
	static class URCowgirlHL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URCowgirlHL_G_C*>(URCowgirlHL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


