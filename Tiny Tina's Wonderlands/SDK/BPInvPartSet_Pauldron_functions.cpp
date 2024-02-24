#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvPartSet_Pauldron.BPInvPartSet_Pauldron_C
// (None)

class UClass* UBPInvPartSet_Pauldron_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvPartSet_Pauldron_C");

	return Clss;
}


// BPInvPartSet_Pauldron_C BPInvPartSet_Pauldron.Default__BPInvPartSet_Pauldron_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvPartSet_Pauldron_C* UBPInvPartSet_Pauldron_C::GetDefaultObj()
{
	static class UBPInvPartSet_Pauldron_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvPartSet_Pauldron_C*>(UBPInvPartSet_Pauldron_C::StaticClass()->DefaultObject);

	return Default;
}

}


