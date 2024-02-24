#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Lunchbox.BP_Lunchbox_C
// (Actor)

class UClass* ABP_Lunchbox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Lunchbox_C");

	return Clss;
}


// BP_Lunchbox_C BP_Lunchbox.Default__BP_Lunchbox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Lunchbox_C* ABP_Lunchbox_C::GetDefaultObj()
{
	static class ABP_Lunchbox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Lunchbox_C*>(ABP_Lunchbox_C::StaticClass()->DefaultObject);

	return Default;
}

}


