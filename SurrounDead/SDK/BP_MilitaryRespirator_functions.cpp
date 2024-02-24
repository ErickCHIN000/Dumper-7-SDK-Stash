#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MilitaryRespirator.BP_MilitaryRespirator_C
// (Actor)

class UClass* ABP_MilitaryRespirator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MilitaryRespirator_C");

	return Clss;
}


// BP_MilitaryRespirator_C BP_MilitaryRespirator.Default__BP_MilitaryRespirator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MilitaryRespirator_C* ABP_MilitaryRespirator_C::GetDefaultObj()
{
	static class ABP_MilitaryRespirator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MilitaryRespirator_C*>(ABP_MilitaryRespirator_C::StaticClass()->DefaultObject);

	return Default;
}

}


