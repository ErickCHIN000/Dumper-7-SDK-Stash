#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Landshark_Spit.BP_Landshark_Spit_C
// (Actor)

class UClass* ABP_Landshark_Spit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Landshark_Spit_C");

	return Clss;
}


// BP_Landshark_Spit_C BP_Landshark_Spit.Default__BP_Landshark_Spit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Landshark_Spit_C* ABP_Landshark_Spit_C::GetDefaultObj()
{
	static class ABP_Landshark_Spit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Landshark_Spit_C*>(ABP_Landshark_Spit_C::StaticClass()->DefaultObject);

	return Default;
}

}


