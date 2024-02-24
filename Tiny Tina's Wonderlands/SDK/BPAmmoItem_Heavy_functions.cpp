#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPAmmoItem_Heavy.BPAmmoItem_Heavy_C
// (Actor)

class UClass* ABPAmmoItem_Heavy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAmmoItem_Heavy_C");

	return Clss;
}


// BPAmmoItem_Heavy_C BPAmmoItem_Heavy.Default__BPAmmoItem_Heavy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPAmmoItem_Heavy_C* ABPAmmoItem_Heavy_C::GetDefaultObj()
{
	static class ABPAmmoItem_Heavy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPAmmoItem_Heavy_C*>(ABPAmmoItem_Heavy_C::StaticClass()->DefaultObject);

	return Default;
}

}


