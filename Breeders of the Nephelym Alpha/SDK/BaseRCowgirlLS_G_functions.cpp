#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlLS_G.BaseRCowgirlLS_G_C
// (None)

class UClass* UBaseRCowgirlLS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlLS_G_C");

	return Clss;
}


// BaseRCowgirlLS_G_C BaseRCowgirlLS_G.Default__BaseRCowgirlLS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlLS_G_C* UBaseRCowgirlLS_G_C::GetDefaultObj()
{
	static class UBaseRCowgirlLS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlLS_G_C*>(UBaseRCowgirlLS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


