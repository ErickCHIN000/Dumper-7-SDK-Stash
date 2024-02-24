#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlLN_G.BaseRCowgirlLN_G_C
// (None)

class UClass* UBaseRCowgirlLN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlLN_G_C");

	return Clss;
}


// BaseRCowgirlLN_G_C BaseRCowgirlLN_G.Default__BaseRCowgirlLN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlLN_G_C* UBaseRCowgirlLN_G_C::GetDefaultObj()
{
	static class UBaseRCowgirlLN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlLN_G_C*>(UBaseRCowgirlLN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


