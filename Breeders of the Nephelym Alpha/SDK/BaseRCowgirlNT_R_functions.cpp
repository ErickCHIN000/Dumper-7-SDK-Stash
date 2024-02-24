#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlNT_R.BaseRCowgirlNT_R_C
// (None)

class UClass* UBaseRCowgirlNT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlNT_R_C");

	return Clss;
}


// BaseRCowgirlNT_R_C BaseRCowgirlNT_R.Default__BaseRCowgirlNT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlNT_R_C* UBaseRCowgirlNT_R_C::GetDefaultObj()
{
	static class UBaseRCowgirlNT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlNT_R_C*>(UBaseRCowgirlNT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


