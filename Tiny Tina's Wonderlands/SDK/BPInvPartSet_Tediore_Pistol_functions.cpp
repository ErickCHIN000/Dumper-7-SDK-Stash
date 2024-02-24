#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvPartSet_Tediore_Pistol.BPInvPartSet_Tediore_Pistol_C
// (None)

class UClass* UBPInvPartSet_Tediore_Pistol_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvPartSet_Tediore_Pistol_C");

	return Clss;
}


// BPInvPartSet_Tediore_Pistol_C BPInvPartSet_Tediore_Pistol.Default__BPInvPartSet_Tediore_Pistol_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvPartSet_Tediore_Pistol_C* UBPInvPartSet_Tediore_Pistol_C::GetDefaultObj()
{
	static class UBPInvPartSet_Tediore_Pistol_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvPartSet_Tediore_Pistol_C*>(UBPInvPartSet_Tediore_Pistol_C::StaticClass()->DefaultObject);

	return Default;
}

}


