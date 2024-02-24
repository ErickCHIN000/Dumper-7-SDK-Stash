#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MilitaryHeavyArmor2.BP_MilitaryHeavyArmor2_C
// (Actor)

class UClass* ABP_MilitaryHeavyArmor2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MilitaryHeavyArmor2_C");

	return Clss;
}


// BP_MilitaryHeavyArmor2_C BP_MilitaryHeavyArmor2.Default__BP_MilitaryHeavyArmor2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MilitaryHeavyArmor2_C* ABP_MilitaryHeavyArmor2_C::GetDefaultObj()
{
	static class ABP_MilitaryHeavyArmor2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MilitaryHeavyArmor2_C*>(ABP_MilitaryHeavyArmor2_C::StaticClass()->DefaultObject);

	return Default;
}

}


