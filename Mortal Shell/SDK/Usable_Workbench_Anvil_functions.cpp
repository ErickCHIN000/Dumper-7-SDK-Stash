#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Usable_Workbench_Anvil.Usable_Workbench_Anvil_C
// (Actor)

class UClass* AUsable_Workbench_Anvil_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Usable_Workbench_Anvil_C");

	return Clss;
}


// Usable_Workbench_Anvil_C Usable_Workbench_Anvil.Default__Usable_Workbench_Anvil_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AUsable_Workbench_Anvil_C* AUsable_Workbench_Anvil_C::GetDefaultObj()
{
	static class AUsable_Workbench_Anvil_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AUsable_Workbench_Anvil_C*>(AUsable_Workbench_Anvil_C::StaticClass()->DefaultObject);

	return Default;
}

}


