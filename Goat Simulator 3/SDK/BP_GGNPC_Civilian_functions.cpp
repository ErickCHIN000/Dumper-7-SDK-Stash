#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GGNPC_Civilian.BP_GGNPC_Civilian_C
// (Actor, Pawn)

class UClass* ABP_GGNPC_Civilian_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GGNPC_Civilian_C");

	return Clss;
}


// BP_GGNPC_Civilian_C BP_GGNPC_Civilian.Default__BP_GGNPC_Civilian_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GGNPC_Civilian_C* ABP_GGNPC_Civilian_C::GetDefaultObj()
{
	static class ABP_GGNPC_Civilian_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GGNPC_Civilian_C*>(ABP_GGNPC_Civilian_C::StaticClass()->DefaultObject);

	return Default;
}

}


