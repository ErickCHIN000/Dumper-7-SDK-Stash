#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyMT_R.BaseButterflyMT_R_C
// (None)

class UClass* UBaseButterflyMT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyMT_R_C");

	return Clss;
}


// BaseButterflyMT_R_C BaseButterflyMT_R.Default__BaseButterflyMT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyMT_R_C* UBaseButterflyMT_R_C::GetDefaultObj()
{
	static class UBaseButterflyMT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyMT_R_C*>(UBaseButterflyMT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


