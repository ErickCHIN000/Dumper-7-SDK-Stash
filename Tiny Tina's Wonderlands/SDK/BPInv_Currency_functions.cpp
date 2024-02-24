#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInv_Currency.BPInv_Currency_C
// (None)

class UClass* UBPInv_Currency_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInv_Currency_C");

	return Clss;
}


// BPInv_Currency_C BPInv_Currency.Default__BPInv_Currency_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInv_Currency_C* UBPInv_Currency_C::GetDefaultObj()
{
	static class UBPInv_Currency_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInv_Currency_C*>(UBPInv_Currency_C::StaticClass()->DefaultObject);

	return Default;
}

}


