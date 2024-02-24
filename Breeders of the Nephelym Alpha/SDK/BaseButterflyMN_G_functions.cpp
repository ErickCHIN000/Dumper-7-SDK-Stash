#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyMN_G.BaseButterflyMN_G_C
// (None)

class UClass* UBaseButterflyMN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyMN_G_C");

	return Clss;
}


// BaseButterflyMN_G_C BaseButterflyMN_G.Default__BaseButterflyMN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyMN_G_C* UBaseButterflyMN_G_C::GetDefaultObj()
{
	static class UBaseButterflyMN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyMN_G_C*>(UBaseButterflyMN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


