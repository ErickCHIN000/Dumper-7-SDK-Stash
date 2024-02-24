#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlHH_R.BaseRCowgirlHH_R_C
// (None)

class UClass* UBaseRCowgirlHH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlHH_R_C");

	return Clss;
}


// BaseRCowgirlHH_R_C BaseRCowgirlHH_R.Default__BaseRCowgirlHH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlHH_R_C* UBaseRCowgirlHH_R_C::GetDefaultObj()
{
	static class UBaseRCowgirlHH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlHH_R_C*>(UBaseRCowgirlHH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


