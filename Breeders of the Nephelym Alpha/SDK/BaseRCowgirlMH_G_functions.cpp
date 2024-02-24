#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlMH_G.BaseRCowgirlMH_G_C
// (None)

class UClass* UBaseRCowgirlMH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlMH_G_C");

	return Clss;
}


// BaseRCowgirlMH_G_C BaseRCowgirlMH_G.Default__BaseRCowgirlMH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlMH_G_C* UBaseRCowgirlMH_G_C::GetDefaultObj()
{
	static class UBaseRCowgirlMH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlMH_G_C*>(UBaseRCowgirlMH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


