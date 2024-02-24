#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalValkyrieAcog.BP_LocalValkyrieAcog_C
// (Actor)

class UClass* ABP_LocalValkyrieAcog_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalValkyrieAcog_C");

	return Clss;
}


// BP_LocalValkyrieAcog_C BP_LocalValkyrieAcog.Default__BP_LocalValkyrieAcog_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalValkyrieAcog_C* ABP_LocalValkyrieAcog_C::GetDefaultObj()
{
	static class ABP_LocalValkyrieAcog_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalValkyrieAcog_C*>(ABP_LocalValkyrieAcog_C::StaticClass()->DefaultObject);

	return Default;
}

}


