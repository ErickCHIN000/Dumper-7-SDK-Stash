#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalValkyrieRedDot.BP_LocalValkyrieRedDot_C
// (Actor)

class UClass* ABP_LocalValkyrieRedDot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalValkyrieRedDot_C");

	return Clss;
}


// BP_LocalValkyrieRedDot_C BP_LocalValkyrieRedDot.Default__BP_LocalValkyrieRedDot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalValkyrieRedDot_C* ABP_LocalValkyrieRedDot_C::GetDefaultObj()
{
	static class ABP_LocalValkyrieRedDot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalValkyrieRedDot_C*>(ABP_LocalValkyrieRedDot_C::StaticClass()->DefaultObject);

	return Default;
}

}


