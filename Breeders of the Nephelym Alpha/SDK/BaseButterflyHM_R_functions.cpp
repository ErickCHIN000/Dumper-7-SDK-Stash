#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyHM_R.BaseButterflyHM_R_C
// (None)

class UClass* UBaseButterflyHM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyHM_R_C");

	return Clss;
}


// BaseButterflyHM_R_C BaseButterflyHM_R.Default__BaseButterflyHM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyHM_R_C* UBaseButterflyHM_R_C::GetDefaultObj()
{
	static class UBaseButterflyHM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyHM_R_C*>(UBaseButterflyHM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


