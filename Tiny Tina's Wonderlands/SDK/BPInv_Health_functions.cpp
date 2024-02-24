#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInv_Health.BPInv_Health_C
// (None)

class UClass* UBPInv_Health_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInv_Health_C");

	return Clss;
}


// BPInv_Health_C BPInv_Health.Default__BPInv_Health_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInv_Health_C* UBPInv_Health_C::GetDefaultObj()
{
	static class UBPInv_Health_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInv_Health_C*>(UBPInv_Health_C::StaticClass()->DefaultObject);

	return Default;
}

}


