#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Deadeye.BP_Deadeye_C
// (Actor)

class UClass* ABP_Deadeye_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Deadeye_C");

	return Clss;
}


// BP_Deadeye_C BP_Deadeye.Default__BP_Deadeye_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Deadeye_C* ABP_Deadeye_C::GetDefaultObj()
{
	static class ABP_Deadeye_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Deadeye_C*>(ABP_Deadeye_C::StaticClass()->DefaultObject);

	return Default;
}

}


