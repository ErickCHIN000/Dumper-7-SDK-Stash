#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ExterminatorRedDot.BP_ExterminatorRedDot_C
// (Actor)

class UClass* ABP_ExterminatorRedDot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ExterminatorRedDot_C");

	return Clss;
}


// BP_ExterminatorRedDot_C BP_ExterminatorRedDot.Default__BP_ExterminatorRedDot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ExterminatorRedDot_C* ABP_ExterminatorRedDot_C::GetDefaultObj()
{
	static class ABP_ExterminatorRedDot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ExterminatorRedDot_C*>(ABP_ExterminatorRedDot_C::StaticClass()->DefaultObject);

	return Default;
}

}

