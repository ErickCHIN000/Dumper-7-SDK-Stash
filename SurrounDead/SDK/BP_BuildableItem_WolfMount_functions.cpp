#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BuildableItem_WolfMount.BP_BuildableItem_WolfMount_C
// (Actor)

class UClass* ABP_BuildableItem_WolfMount_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BuildableItem_WolfMount_C");

	return Clss;
}


// BP_BuildableItem_WolfMount_C BP_BuildableItem_WolfMount.Default__BP_BuildableItem_WolfMount_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BuildableItem_WolfMount_C* ABP_BuildableItem_WolfMount_C::GetDefaultObj()
{
	static class ABP_BuildableItem_WolfMount_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BuildableItem_WolfMount_C*>(ABP_BuildableItem_WolfMount_C::StaticClass()->DefaultObject);

	return Default;
}

}

