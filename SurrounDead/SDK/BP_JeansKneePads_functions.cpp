#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_JeansKneePads.BP_JeansKneePads_C
// (Actor)

class UClass* ABP_JeansKneePads_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_JeansKneePads_C");

	return Clss;
}


// BP_JeansKneePads_C BP_JeansKneePads.Default__BP_JeansKneePads_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_JeansKneePads_C* ABP_JeansKneePads_C::GetDefaultObj()
{
	static class ABP_JeansKneePads_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_JeansKneePads_C*>(ABP_JeansKneePads_C::StaticClass()->DefaultObject);

	return Default;
}

}


