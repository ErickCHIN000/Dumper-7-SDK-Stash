#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyTS_R.BaseButterflyTS_R_C
// (None)

class UClass* UBaseButterflyTS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyTS_R_C");

	return Clss;
}


// BaseButterflyTS_R_C BaseButterflyTS_R.Default__BaseButterflyTS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyTS_R_C* UBaseButterflyTS_R_C::GetDefaultObj()
{
	static class UBaseButterflyTS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyTS_R_C*>(UBaseButterflyTS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


