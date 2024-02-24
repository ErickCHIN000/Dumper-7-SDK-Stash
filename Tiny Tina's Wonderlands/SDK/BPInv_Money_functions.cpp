#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInv_Money.BPInv_Money_C
// (None)

class UClass* UBPInv_Money_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInv_Money_C");

	return Clss;
}


// BPInv_Money_C BPInv_Money.Default__BPInv_Money_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInv_Money_C* UBPInv_Money_C::GetDefaultObj()
{
	static class UBPInv_Money_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInv_Money_C*>(UBPInv_Money_C::StaticClass()->DefaultObject);

	return Default;
}

}


