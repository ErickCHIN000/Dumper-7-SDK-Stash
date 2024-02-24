#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlSN_R.BaseRCowgirlSN_R_C
// (None)

class UClass* UBaseRCowgirlSN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlSN_R_C");

	return Clss;
}


// BaseRCowgirlSN_R_C BaseRCowgirlSN_R.Default__BaseRCowgirlSN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlSN_R_C* UBaseRCowgirlSN_R_C::GetDefaultObj()
{
	static class UBaseRCowgirlSN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlSN_R_C*>(UBaseRCowgirlSN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


