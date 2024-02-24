#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseSemenNM_G.BaseSemenNM_G_C
// (None)

class UClass* UBaseSemenNM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseSemenNM_G_C");

	return Clss;
}


// BaseSemenNM_G_C BaseSemenNM_G.Default__BaseSemenNM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseSemenNM_G_C* UBaseSemenNM_G_C::GetDefaultObj()
{
	static class UBaseSemenNM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseSemenNM_G_C*>(UBaseSemenNM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


