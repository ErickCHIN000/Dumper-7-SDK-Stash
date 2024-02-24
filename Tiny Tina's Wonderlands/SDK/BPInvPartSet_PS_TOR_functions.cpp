#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvPartSet_PS_TOR.BPInvPartSet_PS_TOR_C
// (None)

class UClass* UBPInvPartSet_PS_TOR_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvPartSet_PS_TOR_C");

	return Clss;
}


// BPInvPartSet_PS_TOR_C BPInvPartSet_PS_TOR.Default__BPInvPartSet_PS_TOR_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvPartSet_PS_TOR_C* UBPInvPartSet_PS_TOR_C::GetDefaultObj()
{
	static class UBPInvPartSet_PS_TOR_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvPartSet_PS_TOR_C*>(UBPInvPartSet_PS_TOR_C::StaticClass()->DefaultObject);

	return Default;
}

}


