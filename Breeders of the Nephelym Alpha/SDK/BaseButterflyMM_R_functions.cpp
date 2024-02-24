#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyMM_R.BaseButterflyMM_R_C
// (None)

class UClass* UBaseButterflyMM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyMM_R_C");

	return Clss;
}


// BaseButterflyMM_R_C BaseButterflyMM_R.Default__BaseButterflyMM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyMM_R_C* UBaseButterflyMM_R_C::GetDefaultObj()
{
	static class UBaseButterflyMM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyMM_R_C*>(UBaseButterflyMM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


