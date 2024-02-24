#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseDoggyHM_R.BaseDoggyHM_R_C
// (None)

class UClass* UBaseDoggyHM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseDoggyHM_R_C");

	return Clss;
}


// BaseDoggyHM_R_C BaseDoggyHM_R.Default__BaseDoggyHM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseDoggyHM_R_C* UBaseDoggyHM_R_C::GetDefaultObj()
{
	static class UBaseDoggyHM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseDoggyHM_R_C*>(UBaseDoggyHM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


