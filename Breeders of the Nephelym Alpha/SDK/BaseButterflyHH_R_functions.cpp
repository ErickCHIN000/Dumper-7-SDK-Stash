#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyHH_R.BaseButterflyHH_R_C
// (None)

class UClass* UBaseButterflyHH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyHH_R_C");

	return Clss;
}


// BaseButterflyHH_R_C BaseButterflyHH_R.Default__BaseButterflyHH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyHH_R_C* UBaseButterflyHH_R_C::GetDefaultObj()
{
	static class UBaseButterflyHH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyHH_R_C*>(UBaseButterflyHH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


