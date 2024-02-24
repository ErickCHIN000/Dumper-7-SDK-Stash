#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ValkyrieMag.BP_ValkyrieMag_C
// (Actor)

class UClass* ABP_ValkyrieMag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ValkyrieMag_C");

	return Clss;
}


// BP_ValkyrieMag_C BP_ValkyrieMag.Default__BP_ValkyrieMag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ValkyrieMag_C* ABP_ValkyrieMag_C::GetDefaultObj()
{
	static class ABP_ValkyrieMag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ValkyrieMag_C*>(ABP_ValkyrieMag_C::StaticClass()->DefaultObject);

	return Default;
}

}


