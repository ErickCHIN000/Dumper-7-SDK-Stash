#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyLH_R.BaseDoggyLH_R_C
// (None)

class UClass* UBaseDoggyLH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyLH_R_C");

	return Clss;
}


// BaseDoggyLH_R_C BaseDoggyLH_R.Default__BaseDoggyLH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyLH_R_C* UBaseDoggyLH_R_C::GetDefaultObj()
{
	static class UBaseDoggyLH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyLH_R_C*>(UBaseDoggyLH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


