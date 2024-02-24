#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseSemenNT_G.BaseSemenNT_G_C
// (None)

class UClass* UBaseSemenNT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseSemenNT_G_C");

	return Clss;
}


// BaseSemenNT_G_C BaseSemenNT_G.Default__BaseSemenNT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseSemenNT_G_C* UBaseSemenNT_G_C::GetDefaultObj()
{
	static class UBaseSemenNT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseSemenNT_G_C*>(UBaseSemenNT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


