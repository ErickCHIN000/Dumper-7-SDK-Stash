#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvPartSet_Amulet.BPInvPartSet_Amulet_C
// (None)

class UClass* UBPInvPartSet_Amulet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvPartSet_Amulet_C");

	return Clss;
}


// BPInvPartSet_Amulet_C BPInvPartSet_Amulet.Default__BPInvPartSet_Amulet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvPartSet_Amulet_C* UBPInvPartSet_Amulet_C::GetDefaultObj()
{
	static class UBPInvPartSet_Amulet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvPartSet_Amulet_C*>(UBPInvPartSet_Amulet_C::StaticClass()->DefaultObject);

	return Default;
}

}


