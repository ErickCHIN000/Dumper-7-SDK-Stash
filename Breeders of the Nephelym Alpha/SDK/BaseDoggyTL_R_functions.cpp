#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyTL_R.BaseDoggyTL_R_C
// (None)

class UClass* UBaseDoggyTL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyTL_R_C");

	return Clss;
}


// BaseDoggyTL_R_C BaseDoggyTL_R.Default__BaseDoggyTL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyTL_R_C* UBaseDoggyTL_R_C::GetDefaultObj()
{
	static class UBaseDoggyTL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyTL_R_C*>(UBaseDoggyTL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


