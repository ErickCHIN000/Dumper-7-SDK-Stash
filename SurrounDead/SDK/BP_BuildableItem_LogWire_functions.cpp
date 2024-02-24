#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BuildableItem_LogWire.BP_BuildableItem_LogWire_C
// (Actor)

class UClass* ABP_BuildableItem_LogWire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BuildableItem_LogWire_C");

	return Clss;
}


// BP_BuildableItem_LogWire_C BP_BuildableItem_LogWire.Default__BP_BuildableItem_LogWire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BuildableItem_LogWire_C* ABP_BuildableItem_LogWire_C::GetDefaultObj()
{
	static class ABP_BuildableItem_LogWire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BuildableItem_LogWire_C*>(ABP_BuildableItem_LogWire_C::StaticClass()->DefaultObject);

	return Default;
}

}


