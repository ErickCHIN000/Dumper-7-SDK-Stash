#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseRCowgirlLM_G.BaseRCowgirlLM_G_C
// (None)

class UClass* UBaseRCowgirlLM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseRCowgirlLM_G_C");

	return Clss;
}


// BaseRCowgirlLM_G_C BaseRCowgirlLM_G.Default__BaseRCowgirlLM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseRCowgirlLM_G_C* UBaseRCowgirlLM_G_C::GetDefaultObj()
{
	static class UBaseRCowgirlLM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseRCowgirlLM_G_C*>(UBaseRCowgirlLM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


