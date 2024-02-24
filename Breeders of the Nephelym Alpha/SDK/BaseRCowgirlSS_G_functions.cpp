#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlSS_G.BaseRCowgirlSS_G_C
// (None)

class UClass* UBaseRCowgirlSS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlSS_G_C");

	return Clss;
}


// BaseRCowgirlSS_G_C BaseRCowgirlSS_G.Default__BaseRCowgirlSS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlSS_G_C* UBaseRCowgirlSS_G_C::GetDefaultObj()
{
	static class UBaseRCowgirlSS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlSS_G_C*>(UBaseRCowgirlSS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


