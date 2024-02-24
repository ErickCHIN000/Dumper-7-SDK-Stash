#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlSH_R.BaseCowgirlSH_R_C
// (None)

class UClass* UBaseCowgirlSH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlSH_R_C");

	return Clss;
}


// BaseCowgirlSH_R_C BaseCowgirlSH_R.Default__BaseCowgirlSH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlSH_R_C* UBaseCowgirlSH_R_C::GetDefaultObj()
{
	static class UBaseCowgirlSH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlSH_R_C*>(UBaseCowgirlSH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


