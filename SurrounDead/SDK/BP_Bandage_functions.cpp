#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Bandage.BP_Bandage_C
// (Actor)

class UClass* ABP_Bandage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Bandage_C");

	return Clss;
}


// BP_Bandage_C BP_Bandage.Default__BP_Bandage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Bandage_C* ABP_Bandage_C::GetDefaultObj()
{
	static class ABP_Bandage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Bandage_C*>(ABP_Bandage_C::StaticClass()->DefaultObject);

	return Default;
}

}


