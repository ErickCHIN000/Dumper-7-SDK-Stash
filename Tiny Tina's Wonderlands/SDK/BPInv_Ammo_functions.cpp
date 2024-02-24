#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInv_Ammo.BPInv_Ammo_C
// (None)

class UClass* UBPInv_Ammo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInv_Ammo_C");

	return Clss;
}


// BPInv_Ammo_C BPInv_Ammo.Default__BPInv_Ammo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInv_Ammo_C* UBPInv_Ammo_C::GetDefaultObj()
{
	static class UBPInv_Ammo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInv_Ammo_C*>(UBPInv_Ammo_C::StaticClass()->DefaultObject);

	return Default;
}

}


