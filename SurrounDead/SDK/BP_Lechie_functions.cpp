#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Lechie.BP_Lechie_C
// (Actor)

class UClass* ABP_Lechie_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Lechie_C");

	return Clss;
}


// BP_Lechie_C BP_Lechie.Default__BP_Lechie_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Lechie_C* ABP_Lechie_C::GetDefaultObj()
{
	static class ABP_Lechie_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Lechie_C*>(ABP_Lechie_C::StaticClass()->DefaultObject);

	return Default;
}

}


