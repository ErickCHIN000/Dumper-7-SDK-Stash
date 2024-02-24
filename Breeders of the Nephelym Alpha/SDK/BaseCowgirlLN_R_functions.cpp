#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlLN_R.BaseCowgirlLN_R_C
// (None)

class UClass* UBaseCowgirlLN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlLN_R_C");

	return Clss;
}


// BaseCowgirlLN_R_C BaseCowgirlLN_R.Default__BaseCowgirlLN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlLN_R_C* UBaseCowgirlLN_R_C::GetDefaultObj()
{
	static class UBaseCowgirlLN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlLN_R_C*>(UBaseCowgirlLN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


