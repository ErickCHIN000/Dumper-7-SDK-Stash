#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyNT_R.BaseButterflyNT_R_C
// (None)

class UClass* UBaseButterflyNT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyNT_R_C");

	return Clss;
}


// BaseButterflyNT_R_C BaseButterflyNT_R.Default__BaseButterflyNT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyNT_R_C* UBaseButterflyNT_R_C::GetDefaultObj()
{
	static class UBaseButterflyNT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyNT_R_C*>(UBaseButterflyNT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


