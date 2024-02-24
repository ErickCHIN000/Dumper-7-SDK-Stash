#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlLL_G.BaseRCowgirlLL_G_C
// (None)

class UClass* UBaseRCowgirlLL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlLL_G_C");

	return Clss;
}


// BaseRCowgirlLL_G_C BaseRCowgirlLL_G.Default__BaseRCowgirlLL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlLL_G_C* UBaseRCowgirlLL_G_C::GetDefaultObj()
{
	static class UBaseRCowgirlLL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlLL_G_C*>(UBaseRCowgirlLL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


