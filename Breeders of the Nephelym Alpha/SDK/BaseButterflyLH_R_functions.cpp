#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyLH_R.BaseButterflyLH_R_C
// (None)

class UClass* UBaseButterflyLH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyLH_R_C");

	return Clss;
}


// BaseButterflyLH_R_C BaseButterflyLH_R.Default__BaseButterflyLH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyLH_R_C* UBaseButterflyLH_R_C::GetDefaultObj()
{
	static class UBaseButterflyLH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyLH_R_C*>(UBaseButterflyLH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


