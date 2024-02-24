#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Slippers.BP_Slippers_C
// (Actor)

class UClass* ABP_Slippers_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Slippers_C");

	return Clss;
}


// BP_Slippers_C BP_Slippers.Default__BP_Slippers_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Slippers_C* ABP_Slippers_C::GetDefaultObj()
{
	static class ABP_Slippers_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Slippers_C*>(ABP_Slippers_C::StaticClass()->DefaultObject);

	return Default;
}

}


