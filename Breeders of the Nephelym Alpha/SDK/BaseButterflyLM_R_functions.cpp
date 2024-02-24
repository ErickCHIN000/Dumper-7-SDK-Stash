#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyLM_R.BaseButterflyLM_R_C
// (None)

class UClass* UBaseButterflyLM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyLM_R_C");

	return Clss;
}


// BaseButterflyLM_R_C BaseButterflyLM_R.Default__BaseButterflyLM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyLM_R_C* UBaseButterflyLM_R_C::GetDefaultObj()
{
	static class UBaseButterflyLM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyLM_R_C*>(UBaseButterflyLM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


