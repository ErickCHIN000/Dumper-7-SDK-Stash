#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlSS_R.BaseRCowgirlSS_R_C
// (None)

class UClass* UBaseRCowgirlSS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlSS_R_C");

	return Clss;
}


// BaseRCowgirlSS_R_C BaseRCowgirlSS_R.Default__BaseRCowgirlSS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlSS_R_C* UBaseRCowgirlSS_R_C::GetDefaultObj()
{
	static class UBaseRCowgirlSS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlSS_R_C*>(UBaseRCowgirlSS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


