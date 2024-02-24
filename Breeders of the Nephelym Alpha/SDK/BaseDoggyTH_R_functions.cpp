#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyTH_R.BaseDoggyTH_R_C
// (None)

class UClass* UBaseDoggyTH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyTH_R_C");

	return Clss;
}


// BaseDoggyTH_R_C BaseDoggyTH_R.Default__BaseDoggyTH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyTH_R_C* UBaseDoggyTH_R_C::GetDefaultObj()
{
	static class UBaseDoggyTH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyTH_R_C*>(UBaseDoggyTH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


