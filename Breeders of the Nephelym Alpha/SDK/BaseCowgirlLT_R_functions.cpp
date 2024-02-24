#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCowgirlLT_R.BaseCowgirlLT_R_C
// (None)

class UClass* UBaseCowgirlLT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCowgirlLT_R_C");

	return Clss;
}


// BaseCowgirlLT_R_C BaseCowgirlLT_R.Default__BaseCowgirlLT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseCowgirlLT_R_C* UBaseCowgirlLT_R_C::GetDefaultObj()
{
	static class UBaseCowgirlLT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseCowgirlLT_R_C*>(UBaseCowgirlLT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


