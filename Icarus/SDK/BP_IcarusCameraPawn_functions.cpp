#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusCameraPawn.BP_IcarusCameraPawn_C
// (Actor, Pawn)

class UClass* ABP_IcarusCameraPawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusCameraPawn_C");

	return Clss;
}


// BP_IcarusCameraPawn_C BP_IcarusCameraPawn.Default__BP_IcarusCameraPawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_IcarusCameraPawn_C* ABP_IcarusCameraPawn_C::GetDefaultObj()
{
	static class ABP_IcarusCameraPawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_IcarusCameraPawn_C*>(ABP_IcarusCameraPawn_C::StaticClass()->DefaultObject);

	return Default;
}

}


