#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SharpBlade.BP_SharpBlade_C
// (Actor)

class UClass* ABP_SharpBlade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SharpBlade_C");

	return Clss;
}


// BP_SharpBlade_C BP_SharpBlade.Default__BP_SharpBlade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SharpBlade_C* ABP_SharpBlade_C::GetDefaultObj()
{
	static class ABP_SharpBlade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SharpBlade_C*>(ABP_SharpBlade_C::StaticClass()->DefaultObject);

	return Default;
}

}


