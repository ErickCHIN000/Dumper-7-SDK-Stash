#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Phantasm.BP_Phantasm_C
// (Actor)

class UClass* ABP_Phantasm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Phantasm_C");

	return Clss;
}


// BP_Phantasm_C BP_Phantasm.Default__BP_Phantasm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Phantasm_C* ABP_Phantasm_C::GetDefaultObj()
{
	static class ABP_Phantasm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Phantasm_C*>(ABP_Phantasm_C::StaticClass()->DefaultObject);

	return Default;
}

}


