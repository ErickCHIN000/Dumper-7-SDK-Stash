#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlHM_G.BaseRCowgirlHM_G_C
// (None)

class UClass* UBaseRCowgirlHM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlHM_G_C");

	return Clss;
}


// BaseRCowgirlHM_G_C BaseRCowgirlHM_G.Default__BaseRCowgirlHM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlHM_G_C* UBaseRCowgirlHM_G_C::GetDefaultObj()
{
	static class UBaseRCowgirlHM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlHM_G_C*>(UBaseRCowgirlHM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


