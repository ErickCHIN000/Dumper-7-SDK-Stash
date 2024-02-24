#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Antiseptic.BP_Antiseptic_C
// (Actor)

class UClass* ABP_Antiseptic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Antiseptic_C");

	return Clss;
}


// BP_Antiseptic_C BP_Antiseptic.Default__BP_Antiseptic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Antiseptic_C* ABP_Antiseptic_C::GetDefaultObj()
{
	static class ABP_Antiseptic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Antiseptic_C*>(ABP_Antiseptic_C::StaticClass()->DefaultObject);

	return Default;
}

}


