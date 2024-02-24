#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyLS_G.BaseButterflyLS_G_C
// (None)

class UClass* UBaseButterflyLS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyLS_G_C");

	return Clss;
}


// BaseButterflyLS_G_C BaseButterflyLS_G.Default__BaseButterflyLS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyLS_G_C* UBaseButterflyLS_G_C::GetDefaultObj()
{
	static class UBaseButterflyLS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyLS_G_C*>(UBaseButterflyLS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


