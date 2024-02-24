#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPAmmoItem_Pistol.BPAmmoItem_Pistol_C
// (Actor)

class UClass* ABPAmmoItem_Pistol_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAmmoItem_Pistol_C");

	return Clss;
}


// BPAmmoItem_Pistol_C BPAmmoItem_Pistol.Default__BPAmmoItem_Pistol_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPAmmoItem_Pistol_C* ABPAmmoItem_Pistol_C::GetDefaultObj()
{
	static class ABPAmmoItem_Pistol_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPAmmoItem_Pistol_C*>(ABPAmmoItem_Pistol_C::StaticClass()->DefaultObject);

	return Default;
}

}


