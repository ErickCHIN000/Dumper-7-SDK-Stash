#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlMM_G.BaseRCowgirlMM_G_C
// (None)

class UClass* UBaseRCowgirlMM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlMM_G_C");

	return Clss;
}


// BaseRCowgirlMM_G_C BaseRCowgirlMM_G.Default__BaseRCowgirlMM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlMM_G_C* UBaseRCowgirlMM_G_C::GetDefaultObj()
{
	static class UBaseRCowgirlMM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlMM_G_C*>(UBaseRCowgirlMM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


