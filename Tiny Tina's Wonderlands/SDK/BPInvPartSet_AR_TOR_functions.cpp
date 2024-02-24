#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvPartSet_AR_TOR.BPInvPartSet_AR_TOR_C
// (None)

class UClass* UBPInvPartSet_AR_TOR_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvPartSet_AR_TOR_C");

	return Clss;
}


// BPInvPartSet_AR_TOR_C BPInvPartSet_AR_TOR.Default__BPInvPartSet_AR_TOR_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvPartSet_AR_TOR_C* UBPInvPartSet_AR_TOR_C::GetDefaultObj()
{
	static class UBPInvPartSet_AR_TOR_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvPartSet_AR_TOR_C*>(UBPInvPartSet_AR_TOR_C::StaticClass()->DefaultObject);

	return Default;
}

}


