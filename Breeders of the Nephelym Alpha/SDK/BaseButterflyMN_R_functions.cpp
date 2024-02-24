#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyMN_R.BaseButterflyMN_R_C
// (None)

class UClass* UBaseButterflyMN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyMN_R_C");

	return Clss;
}


// BaseButterflyMN_R_C BaseButterflyMN_R.Default__BaseButterflyMN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyMN_R_C* UBaseButterflyMN_R_C::GetDefaultObj()
{
	static class UBaseButterflyMN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyMN_R_C*>(UBaseButterflyMN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


