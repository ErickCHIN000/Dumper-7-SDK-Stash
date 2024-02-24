#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyNS_G.BaseButterflyNS_G_C
// (None)

class UClass* UBaseButterflyNS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyNS_G_C");

	return Clss;
}


// BaseButterflyNS_G_C BaseButterflyNS_G.Default__BaseButterflyNS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyNS_G_C* UBaseButterflyNS_G_C::GetDefaultObj()
{
	static class UBaseButterflyNS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyNS_G_C*>(UBaseButterflyNS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


