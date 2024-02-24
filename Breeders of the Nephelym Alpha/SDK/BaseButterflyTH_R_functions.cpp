#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyTH_R.BaseButterflyTH_R_C
// (None)

class UClass* UBaseButterflyTH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyTH_R_C");

	return Clss;
}


// BaseButterflyTH_R_C BaseButterflyTH_R.Default__BaseButterflyTH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyTH_R_C* UBaseButterflyTH_R_C::GetDefaultObj()
{
	static class UBaseButterflyTH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyTH_R_C*>(UBaseButterflyTH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


