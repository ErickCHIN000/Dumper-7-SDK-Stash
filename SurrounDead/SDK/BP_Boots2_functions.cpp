#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Boots2.BP_Boots2_C
// (Actor)

class UClass* ABP_Boots2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Boots2_C");

	return Clss;
}


// BP_Boots2_C BP_Boots2.Default__BP_Boots2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Boots2_C* ABP_Boots2_C::GetDefaultObj()
{
	static class ABP_Boots2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Boots2_C*>(ABP_Boots2_C::StaticClass()->DefaultObject);

	return Default;
}

}


