#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPAmmoItem_SMG.BPAmmoItem_SMG_C
// (Actor)

class UClass* ABPAmmoItem_SMG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAmmoItem_SMG_C");

	return Clss;
}


// BPAmmoItem_SMG_C BPAmmoItem_SMG.Default__BPAmmoItem_SMG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPAmmoItem_SMG_C* ABPAmmoItem_SMG_C::GetDefaultObj()
{
	static class ABPAmmoItem_SMG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPAmmoItem_SMG_C*>(ABPAmmoItem_SMG_C::StaticClass()->DefaultObject);

	return Default;
}

}


