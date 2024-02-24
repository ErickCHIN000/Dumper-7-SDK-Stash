#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvPartSet_Jakobs_Pistol.BPInvPartSet_Jakobs_Pistol_C
// (None)

class UClass* UBPInvPartSet_Jakobs_Pistol_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvPartSet_Jakobs_Pistol_C");

	return Clss;
}


// BPInvPartSet_Jakobs_Pistol_C BPInvPartSet_Jakobs_Pistol.Default__BPInvPartSet_Jakobs_Pistol_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvPartSet_Jakobs_Pistol_C* UBPInvPartSet_Jakobs_Pistol_C::GetDefaultObj()
{
	static class UBPInvPartSet_Jakobs_Pistol_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvPartSet_Jakobs_Pistol_C*>(UBPInvPartSet_Jakobs_Pistol_C::StaticClass()->DefaultObject);

	return Default;
}

}


