#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlMN_R.BaseRCowgirlMN_R_C
// (None)

class UClass* UBaseRCowgirlMN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlMN_R_C");

	return Clss;
}


// BaseRCowgirlMN_R_C BaseRCowgirlMN_R.Default__BaseRCowgirlMN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlMN_R_C* UBaseRCowgirlMN_R_C::GetDefaultObj()
{
	static class UBaseRCowgirlMN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlMN_R_C*>(UBaseRCowgirlMN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


