#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ValkyrieAcog.BP_ValkyrieAcog_C
// (Actor)

class UClass* ABP_ValkyrieAcog_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ValkyrieAcog_C");

	return Clss;
}


// BP_ValkyrieAcog_C BP_ValkyrieAcog.Default__BP_ValkyrieAcog_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ValkyrieAcog_C* ABP_ValkyrieAcog_C::GetDefaultObj()
{
	static class ABP_ValkyrieAcog_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ValkyrieAcog_C*>(ABP_ValkyrieAcog_C::StaticClass()->DefaultObject);

	return Default;
}

}


