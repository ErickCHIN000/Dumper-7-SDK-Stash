#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseSemenNS_G.BaseSemenNS_G_C
// (None)

class UClass* UBaseSemenNS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseSemenNS_G_C");

	return Clss;
}


// BaseSemenNS_G_C BaseSemenNS_G.Default__BaseSemenNS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseSemenNS_G_C* UBaseSemenNS_G_C::GetDefaultObj()
{
	static class UBaseSemenNS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseSemenNS_G_C*>(UBaseSemenNS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


