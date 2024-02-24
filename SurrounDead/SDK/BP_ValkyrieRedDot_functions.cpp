#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ValkyrieRedDot.BP_ValkyrieRedDot_C
// (Actor)

class UClass* ABP_ValkyrieRedDot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ValkyrieRedDot_C");

	return Clss;
}


// BP_ValkyrieRedDot_C BP_ValkyrieRedDot.Default__BP_ValkyrieRedDot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ValkyrieRedDot_C* ABP_ValkyrieRedDot_C::GetDefaultObj()
{
	static class ABP_ValkyrieRedDot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ValkyrieRedDot_C*>(ABP_ValkyrieRedDot_C::StaticClass()->DefaultObject);

	return Default;
}

}


