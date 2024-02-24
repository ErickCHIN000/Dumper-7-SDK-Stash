#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyNM_R.BaseButterflyNM_R_C
// (None)

class UClass* UBaseButterflyNM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyNM_R_C");

	return Clss;
}


// BaseButterflyNM_R_C BaseButterflyNM_R.Default__BaseButterflyNM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyNM_R_C* UBaseButterflyNM_R_C::GetDefaultObj()
{
	static class UBaseButterflyNM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyNM_R_C*>(UBaseButterflyNM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


