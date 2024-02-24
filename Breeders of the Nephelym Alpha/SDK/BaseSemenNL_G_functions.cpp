#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseSemenNL_G.BaseSemenNL_G_C
// (None)

class UClass* UBaseSemenNL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseSemenNL_G_C");

	return Clss;
}


// BaseSemenNL_G_C BaseSemenNL_G.Default__BaseSemenNL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseSemenNL_G_C* UBaseSemenNL_G_C::GetDefaultObj()
{
	static class UBaseSemenNL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseSemenNL_G_C*>(UBaseSemenNL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


