#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyLL_R.BaseDoggyLL_R_C
// (None)

class UClass* UBaseDoggyLL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyLL_R_C");

	return Clss;
}


// BaseDoggyLL_R_C BaseDoggyLL_R.Default__BaseDoggyLL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyLL_R_C* UBaseDoggyLL_R_C::GetDefaultObj()
{
	static class UBaseDoggyLL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyLL_R_C*>(UBaseDoggyLL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


