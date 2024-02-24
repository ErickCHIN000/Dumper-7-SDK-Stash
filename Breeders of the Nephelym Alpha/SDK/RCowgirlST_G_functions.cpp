#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RCowgirlST_G.RCowgirlST_G_C
// (None)

class UClass* URCowgirlST_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RCowgirlST_G_C");

	return Clss;
}


// RCowgirlST_G_C RCowgirlST_G.Default__RCowgirlST_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URCowgirlST_G_C* URCowgirlST_G_C::GetDefaultObj()
{
	static class URCowgirlST_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URCowgirlST_G_C*>(URCowgirlST_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


