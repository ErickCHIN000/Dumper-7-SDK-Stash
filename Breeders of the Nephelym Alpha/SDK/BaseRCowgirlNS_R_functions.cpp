#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlNS_R.BaseRCowgirlNS_R_C
// (None)

class UClass* UBaseRCowgirlNS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlNS_R_C");

	return Clss;
}


// BaseRCowgirlNS_R_C BaseRCowgirlNS_R.Default__BaseRCowgirlNS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlNS_R_C* UBaseRCowgirlNS_R_C::GetDefaultObj()
{
	static class UBaseRCowgirlNS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlNS_R_C*>(UBaseRCowgirlNS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


