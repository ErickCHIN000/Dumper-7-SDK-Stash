#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseButterflyML_G.BaseButterflyML_G_C
// (None)

class UClass* UBaseButterflyML_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseButterflyML_G_C");

	return Clss;
}


// BaseButterflyML_G_C BaseButterflyML_G.Default__BaseButterflyML_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseButterflyML_G_C* UBaseButterflyML_G_C::GetDefaultObj()
{
	static class UBaseButterflyML_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseButterflyML_G_C*>(UBaseButterflyML_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


