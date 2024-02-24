#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BikerHelmet.BP_BikerHelmet_C
// (Actor)

class UClass* ABP_BikerHelmet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BikerHelmet_C");

	return Clss;
}


// BP_BikerHelmet_C BP_BikerHelmet.Default__BP_BikerHelmet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BikerHelmet_C* ABP_BikerHelmet_C::GetDefaultObj()
{
	static class ABP_BikerHelmet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BikerHelmet_C*>(ABP_BikerHelmet_C::StaticClass()->DefaultObject);

	return Default;
}

}


