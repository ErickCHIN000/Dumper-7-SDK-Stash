#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyTS_G.BaseButterflyTS_G_C
// (None)

class UClass* UBaseButterflyTS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyTS_G_C");

	return Clss;
}


// BaseButterflyTS_G_C BaseButterflyTS_G.Default__BaseButterflyTS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyTS_G_C* UBaseButterflyTS_G_C::GetDefaultObj()
{
	static class UBaseButterflyTS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyTS_G_C*>(UBaseButterflyTS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


