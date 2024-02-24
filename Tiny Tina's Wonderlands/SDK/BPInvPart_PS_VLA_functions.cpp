#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvPart_PS_VLA.BPInvPart_PS_VLA_C
// (None)

class UClass* UBPInvPart_PS_VLA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvPart_PS_VLA_C");

	return Clss;
}


// BPInvPart_PS_VLA_C BPInvPart_PS_VLA.Default__BPInvPart_PS_VLA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvPart_PS_VLA_C* UBPInvPart_PS_VLA_C::GetDefaultObj()
{
	static class UBPInvPart_PS_VLA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvPart_PS_VLA_C*>(UBPInvPart_PS_VLA_C::StaticClass()->DefaultObject);

	return Default;
}

}


