#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlLH_R.BaseCowgirlLH_R_C
// (None)

class UClass* UBaseCowgirlLH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlLH_R_C");

	return Clss;
}


// BaseCowgirlLH_R_C BaseCowgirlLH_R.Default__BaseCowgirlLH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlLH_R_C* UBaseCowgirlLH_R_C::GetDefaultObj()
{
	static class UBaseCowgirlLH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlLH_R_C*>(UBaseCowgirlLH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


