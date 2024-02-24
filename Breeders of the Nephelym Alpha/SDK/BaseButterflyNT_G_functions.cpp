#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyNT_G.BaseButterflyNT_G_C
// (None)

class UClass* UBaseButterflyNT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyNT_G_C");

	return Clss;
}


// BaseButterflyNT_G_C BaseButterflyNT_G.Default__BaseButterflyNT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyNT_G_C* UBaseButterflyNT_G_C::GetDefaultObj()
{
	static class UBaseButterflyNT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyNT_G_C*>(UBaseButterflyNT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


