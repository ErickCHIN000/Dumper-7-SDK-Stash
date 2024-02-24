#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyNS_R.BaseButterflyNS_R_C
// (None)

class UClass* UBaseButterflyNS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyNS_R_C");

	return Clss;
}


// BaseButterflyNS_R_C BaseButterflyNS_R.Default__BaseButterflyNS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyNS_R_C* UBaseButterflyNS_R_C::GetDefaultObj()
{
	static class UBaseButterflyNS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyNS_R_C*>(UBaseButterflyNS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


