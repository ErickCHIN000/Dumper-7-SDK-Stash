#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Robe.BP_Robe_C
// (Actor)

class UClass* ABP_Robe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Robe_C");

	return Clss;
}


// BP_Robe_C BP_Robe.Default__BP_Robe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Robe_C* ABP_Robe_C::GetDefaultObj()
{
	static class ABP_Robe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Robe_C*>(ABP_Robe_C::StaticClass()->DefaultObject);

	return Default;
}

}


