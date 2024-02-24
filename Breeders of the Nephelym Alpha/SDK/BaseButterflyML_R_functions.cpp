#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyML_R.BaseButterflyML_R_C
// (None)

class UClass* UBaseButterflyML_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyML_R_C");

	return Clss;
}


// BaseButterflyML_R_C BaseButterflyML_R.Default__BaseButterflyML_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyML_R_C* UBaseButterflyML_R_C::GetDefaultObj()
{
	static class UBaseButterflyML_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyML_R_C*>(UBaseButterflyML_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


