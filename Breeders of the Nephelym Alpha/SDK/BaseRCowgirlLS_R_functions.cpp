#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlLS_R.BaseRCowgirlLS_R_C
// (None)

class UClass* UBaseRCowgirlLS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlLS_R_C");

	return Clss;
}


// BaseRCowgirlLS_R_C BaseRCowgirlLS_R.Default__BaseRCowgirlLS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlLS_R_C* UBaseRCowgirlLS_R_C::GetDefaultObj()
{
	static class UBaseRCowgirlLS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlLS_R_C*>(UBaseRCowgirlLS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


