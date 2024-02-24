#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvPartSet_PS_VLA.BPInvPartSet_PS_VLA_C
// (None)

class UClass* UBPInvPartSet_PS_VLA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvPartSet_PS_VLA_C");

	return Clss;
}


// BPInvPartSet_PS_VLA_C BPInvPartSet_PS_VLA.Default__BPInvPartSet_PS_VLA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvPartSet_PS_VLA_C* UBPInvPartSet_PS_VLA_C::GetDefaultObj()
{
	static class UBPInvPartSet_PS_VLA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvPartSet_PS_VLA_C*>(UBPInvPartSet_PS_VLA_C::StaticClass()->DefaultObject);

	return Default;
}

}


