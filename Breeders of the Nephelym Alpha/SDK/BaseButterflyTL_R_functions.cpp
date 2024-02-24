#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyTL_R.BaseButterflyTL_R_C
// (None)

class UClass* UBaseButterflyTL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyTL_R_C");

	return Clss;
}


// BaseButterflyTL_R_C BaseButterflyTL_R.Default__BaseButterflyTL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyTL_R_C* UBaseButterflyTL_R_C::GetDefaultObj()
{
	static class UBaseButterflyTL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyTL_R_C*>(UBaseButterflyTL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


