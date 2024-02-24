#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyHN_R.BaseButterflyHN_R_C
// (None)

class UClass* UBaseButterflyHN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyHN_R_C");

	return Clss;
}


// BaseButterflyHN_R_C BaseButterflyHN_R.Default__BaseButterflyHN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyHN_R_C* UBaseButterflyHN_R_C::GetDefaultObj()
{
	static class UBaseButterflyHN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyHN_R_C*>(UBaseButterflyHN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


