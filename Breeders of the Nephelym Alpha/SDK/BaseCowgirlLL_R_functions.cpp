#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlLL_R.BaseCowgirlLL_R_C
// (None)

class UClass* UBaseCowgirlLL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlLL_R_C");

	return Clss;
}


// BaseCowgirlLL_R_C BaseCowgirlLL_R.Default__BaseCowgirlLL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlLL_R_C* UBaseCowgirlLL_R_C::GetDefaultObj()
{
	static class UBaseCowgirlLL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlLL_R_C*>(UBaseCowgirlLL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


