#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MagazineToughness.BP_MagazineToughness_C
// (Actor)

class UClass* ABP_MagazineToughness_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MagazineToughness_C");

	return Clss;
}


// BP_MagazineToughness_C BP_MagazineToughness.Default__BP_MagazineToughness_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MagazineToughness_C* ABP_MagazineToughness_C::GetDefaultObj()
{
	static class ABP_MagazineToughness_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MagazineToughness_C*>(ABP_MagazineToughness_C::StaticClass()->DefaultObject);

	return Default;
}

}


