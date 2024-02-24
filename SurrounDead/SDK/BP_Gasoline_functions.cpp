#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Gasoline.BP_Gasoline_C
// (Actor)

class UClass* ABP_Gasoline_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Gasoline_C");

	return Clss;
}


// BP_Gasoline_C BP_Gasoline.Default__BP_Gasoline_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Gasoline_C* ABP_Gasoline_C::GetDefaultObj()
{
	static class ABP_Gasoline_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Gasoline_C*>(ABP_Gasoline_C::StaticClass()->DefaultObject);

	return Default;
}

}


