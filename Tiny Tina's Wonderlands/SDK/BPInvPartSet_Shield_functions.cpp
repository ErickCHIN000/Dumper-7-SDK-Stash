#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvPartSet_Shield.BPInvPartSet_Shield_C
// (None)

class UClass* UBPInvPartSet_Shield_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvPartSet_Shield_C");

	return Clss;
}


// BPInvPartSet_Shield_C BPInvPartSet_Shield.Default__BPInvPartSet_Shield_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvPartSet_Shield_C* UBPInvPartSet_Shield_C::GetDefaultObj()
{
	static class UBPInvPartSet_Shield_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvPartSet_Shield_C*>(UBPInvPartSet_Shield_C::StaticClass()->DefaultObject);

	return Default;
}

}


