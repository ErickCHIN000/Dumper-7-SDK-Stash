#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyMH_R.BaseDoggyMH_R_C
// (None)

class UClass* UBaseDoggyMH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyMH_R_C");

	return Clss;
}


// BaseDoggyMH_R_C BaseDoggyMH_R.Default__BaseDoggyMH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyMH_R_C* UBaseDoggyMH_R_C::GetDefaultObj()
{
	static class UBaseDoggyMH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyMH_R_C*>(UBaseDoggyMH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


