#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseSemenNH_G.BaseSemenNH_G_C
// (None)

class UClass* UBaseSemenNH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseSemenNH_G_C");

	return Clss;
}


// BaseSemenNH_G_C BaseSemenNH_G.Default__BaseSemenNH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseSemenNH_G_C* UBaseSemenNH_G_C::GetDefaultObj()
{
	static class UBaseSemenNH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseSemenNH_G_C*>(UBaseSemenNH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


