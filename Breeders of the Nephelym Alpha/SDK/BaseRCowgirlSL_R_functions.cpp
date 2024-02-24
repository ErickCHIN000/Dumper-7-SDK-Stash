#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlSL_R.BaseRCowgirlSL_R_C
// (None)

class UClass* UBaseRCowgirlSL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlSL_R_C");

	return Clss;
}


// BaseRCowgirlSL_R_C BaseRCowgirlSL_R.Default__BaseRCowgirlSL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlSL_R_C* UBaseRCowgirlSL_R_C::GetDefaultObj()
{
	static class UBaseRCowgirlSL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlSL_R_C*>(UBaseRCowgirlSL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


