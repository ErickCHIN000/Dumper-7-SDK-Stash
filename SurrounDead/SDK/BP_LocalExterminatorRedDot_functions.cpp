#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalExterminatorRedDot.BP_LocalExterminatorRedDot_C
// (Actor)

class UClass* ABP_LocalExterminatorRedDot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalExterminatorRedDot_C");

	return Clss;
}


// BP_LocalExterminatorRedDot_C BP_LocalExterminatorRedDot.Default__BP_LocalExterminatorRedDot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalExterminatorRedDot_C* ABP_LocalExterminatorRedDot_C::GetDefaultObj()
{
	static class ABP_LocalExterminatorRedDot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalExterminatorRedDot_C*>(ABP_LocalExterminatorRedDot_C::StaticClass()->DefaultObject);

	return Default;
}

}


