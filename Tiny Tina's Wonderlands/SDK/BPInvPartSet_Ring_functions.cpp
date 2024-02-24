#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvPartSet_Ring.BPInvPartSet_Ring_C
// (None)

class UClass* UBPInvPartSet_Ring_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvPartSet_Ring_C");

	return Clss;
}


// BPInvPartSet_Ring_C BPInvPartSet_Ring.Default__BPInvPartSet_Ring_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvPartSet_Ring_C* UBPInvPartSet_Ring_C::GetDefaultObj()
{
	static class UBPInvPartSet_Ring_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvPartSet_Ring_C*>(UBPInvPartSet_Ring_C::StaticClass()->DefaultObject);

	return Default;
}

}


