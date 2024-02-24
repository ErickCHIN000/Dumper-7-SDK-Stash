#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ExterminatorCompensator.BP_ExterminatorCompensator_C
// (Actor)

class UClass* ABP_ExterminatorCompensator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ExterminatorCompensator_C");

	return Clss;
}


// BP_ExterminatorCompensator_C BP_ExterminatorCompensator.Default__BP_ExterminatorCompensator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ExterminatorCompensator_C* ABP_ExterminatorCompensator_C::GetDefaultObj()
{
	static class ABP_ExterminatorCompensator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ExterminatorCompensator_C*>(ABP_ExterminatorCompensator_C::StaticClass()->DefaultObject);

	return Default;
}

}


