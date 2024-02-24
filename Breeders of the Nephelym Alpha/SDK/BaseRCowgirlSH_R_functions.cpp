#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlSH_R.BaseRCowgirlSH_R_C
// (None)

class UClass* UBaseRCowgirlSH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlSH_R_C");

	return Clss;
}


// BaseRCowgirlSH_R_C BaseRCowgirlSH_R.Default__BaseRCowgirlSH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlSH_R_C* UBaseRCowgirlSH_R_C::GetDefaultObj()
{
	static class UBaseRCowgirlSH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlSH_R_C*>(UBaseRCowgirlSH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


