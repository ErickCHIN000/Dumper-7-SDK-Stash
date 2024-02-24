#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlHM_R.BaseRCowgirlHM_R_C
// (None)

class UClass* UBaseRCowgirlHM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlHM_R_C");

	return Clss;
}


// BaseRCowgirlHM_R_C BaseRCowgirlHM_R.Default__BaseRCowgirlHM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlHM_R_C* UBaseRCowgirlHM_R_C::GetDefaultObj()
{
	static class UBaseRCowgirlHM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlHM_R_C*>(UBaseRCowgirlHM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


