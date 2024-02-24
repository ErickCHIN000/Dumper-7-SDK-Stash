#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyTM_R.BaseButterflyTM_R_C
// (None)

class UClass* UBaseButterflyTM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyTM_R_C");

	return Clss;
}


// BaseButterflyTM_R_C BaseButterflyTM_R.Default__BaseButterflyTM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyTM_R_C* UBaseButterflyTM_R_C::GetDefaultObj()
{
	static class UBaseButterflyTM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyTM_R_C*>(UBaseButterflyTM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


