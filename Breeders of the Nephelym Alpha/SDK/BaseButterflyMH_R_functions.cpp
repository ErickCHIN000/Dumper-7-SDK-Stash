#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyMH_R.BaseButterflyMH_R_C
// (None)

class UClass* UBaseButterflyMH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyMH_R_C");

	return Clss;
}


// BaseButterflyMH_R_C BaseButterflyMH_R.Default__BaseButterflyMH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyMH_R_C* UBaseButterflyMH_R_C::GetDefaultObj()
{
	static class UBaseButterflyMH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyMH_R_C*>(UBaseButterflyMH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


