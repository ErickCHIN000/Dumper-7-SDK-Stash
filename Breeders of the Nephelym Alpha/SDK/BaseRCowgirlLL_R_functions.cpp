#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlLL_R.BaseRCowgirlLL_R_C
// (None)

class UClass* UBaseRCowgirlLL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlLL_R_C");

	return Clss;
}


// BaseRCowgirlLL_R_C BaseRCowgirlLL_R.Default__BaseRCowgirlLL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlLL_R_C* UBaseRCowgirlLL_R_C::GetDefaultObj()
{
	static class UBaseRCowgirlLL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlLL_R_C*>(UBaseRCowgirlLL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


