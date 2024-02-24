#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MilitaryHeavyArmor.BP_MilitaryHeavyArmor_C
// (Actor)

class UClass* ABP_MilitaryHeavyArmor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MilitaryHeavyArmor_C");

	return Clss;
}


// BP_MilitaryHeavyArmor_C BP_MilitaryHeavyArmor.Default__BP_MilitaryHeavyArmor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MilitaryHeavyArmor_C* ABP_MilitaryHeavyArmor_C::GetDefaultObj()
{
	static class ABP_MilitaryHeavyArmor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MilitaryHeavyArmor_C*>(ABP_MilitaryHeavyArmor_C::StaticClass()->DefaultObject);

	return Default;
}

}


