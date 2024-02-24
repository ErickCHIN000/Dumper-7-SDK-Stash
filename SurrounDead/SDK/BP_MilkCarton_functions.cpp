#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MilkCarton.BP_MilkCarton_C
// (Actor)

class UClass* ABP_MilkCarton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MilkCarton_C");

	return Clss;
}


// BP_MilkCarton_C BP_MilkCarton.Default__BP_MilkCarton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MilkCarton_C* ABP_MilkCarton_C::GetDefaultObj()
{
	static class ABP_MilkCarton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MilkCarton_C*>(ABP_MilkCarton_C::StaticClass()->DefaultObject);

	return Default;
}

}


