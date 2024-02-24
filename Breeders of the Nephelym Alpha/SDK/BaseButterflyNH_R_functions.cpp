#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyNH_R.BaseButterflyNH_R_C
// (None)

class UClass* UBaseButterflyNH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyNH_R_C");

	return Clss;
}


// BaseButterflyNH_R_C BaseButterflyNH_R.Default__BaseButterflyNH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyNH_R_C* UBaseButterflyNH_R_C::GetDefaultObj()
{
	static class UBaseButterflyNH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyNH_R_C*>(UBaseButterflyNH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


