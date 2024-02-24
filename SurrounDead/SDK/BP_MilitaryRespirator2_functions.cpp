#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MilitaryRespirator2.BP_MilitaryRespirator2_C
// (Actor)

class UClass* ABP_MilitaryRespirator2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MilitaryRespirator2_C");

	return Clss;
}


// BP_MilitaryRespirator2_C BP_MilitaryRespirator2.Default__BP_MilitaryRespirator2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MilitaryRespirator2_C* ABP_MilitaryRespirator2_C::GetDefaultObj()
{
	static class ABP_MilitaryRespirator2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MilitaryRespirator2_C*>(ABP_MilitaryRespirator2_C::StaticClass()->DefaultObject);

	return Default;
}

}


