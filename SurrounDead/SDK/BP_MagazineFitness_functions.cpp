#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MagazineFitness.BP_MagazineFitness_C
// (Actor)

class UClass* ABP_MagazineFitness_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MagazineFitness_C");

	return Clss;
}


// BP_MagazineFitness_C BP_MagazineFitness.Default__BP_MagazineFitness_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MagazineFitness_C* ABP_MagazineFitness_C::GetDefaultObj()
{
	static class ABP_MagazineFitness_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MagazineFitness_C*>(ABP_MagazineFitness_C::StaticClass()->DefaultObject);

	return Default;
}

}


