#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyNL_R.BaseButterflyNL_R_C
// (None)

class UClass* UBaseButterflyNL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyNL_R_C");

	return Clss;
}


// BaseButterflyNL_R_C BaseButterflyNL_R.Default__BaseButterflyNL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyNL_R_C* UBaseButterflyNL_R_C::GetDefaultObj()
{
	static class UBaseButterflyNL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyNL_R_C*>(UBaseButterflyNL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


