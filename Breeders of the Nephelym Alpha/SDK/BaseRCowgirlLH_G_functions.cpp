#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlLH_G.BaseRCowgirlLH_G_C
// (None)

class UClass* UBaseRCowgirlLH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlLH_G_C");

	return Clss;
}


// BaseRCowgirlLH_G_C BaseRCowgirlLH_G.Default__BaseRCowgirlLH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlLH_G_C* UBaseRCowgirlLH_G_C::GetDefaultObj()
{
	static class UBaseRCowgirlLH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlLH_G_C*>(UBaseRCowgirlLH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


