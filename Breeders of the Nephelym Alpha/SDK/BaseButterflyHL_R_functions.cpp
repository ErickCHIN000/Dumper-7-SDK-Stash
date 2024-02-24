#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyHL_R.BaseButterflyHL_R_C
// (None)

class UClass* UBaseButterflyHL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyHL_R_C");

	return Clss;
}


// BaseButterflyHL_R_C BaseButterflyHL_R.Default__BaseButterflyHL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyHL_R_C* UBaseButterflyHL_R_C::GetDefaultObj()
{
	static class UBaseButterflyHL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyHL_R_C*>(UBaseButterflyHL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


