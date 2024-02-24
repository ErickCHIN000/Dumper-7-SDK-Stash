#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlLT_R.BaseRCowgirlLT_R_C
// (None)

class UClass* UBaseRCowgirlLT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlLT_R_C");

	return Clss;
}


// BaseRCowgirlLT_R_C BaseRCowgirlLT_R.Default__BaseRCowgirlLT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlLT_R_C* UBaseRCowgirlLT_R_C::GetDefaultObj()
{
	static class UBaseRCowgirlLT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlLT_R_C*>(UBaseRCowgirlLT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


