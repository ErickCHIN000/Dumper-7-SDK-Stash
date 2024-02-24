#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Can1.BP_Can1_C
// (Actor)

class UClass* ABP_Can1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Can1_C");

	return Clss;
}


// BP_Can1_C BP_Can1.Default__BP_Can1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Can1_C* ABP_Can1_C::GetDefaultObj()
{
	static class ABP_Can1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Can1_C*>(ABP_Can1_C::StaticClass()->DefaultObject);

	return Default;
}

}


