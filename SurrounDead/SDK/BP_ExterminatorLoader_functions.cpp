#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ExterminatorLoader.BP_ExterminatorLoader_C
// (Actor)

class UClass* ABP_ExterminatorLoader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ExterminatorLoader_C");

	return Clss;
}


// BP_ExterminatorLoader_C BP_ExterminatorLoader.Default__BP_ExterminatorLoader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ExterminatorLoader_C* ABP_ExterminatorLoader_C::GetDefaultObj()
{
	static class ABP_ExterminatorLoader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ExterminatorLoader_C*>(ABP_ExterminatorLoader_C::StaticClass()->DefaultObject);

	return Default;
}

}


