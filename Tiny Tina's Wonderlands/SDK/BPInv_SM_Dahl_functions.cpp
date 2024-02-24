#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInv_SM_Dahl.BPInv_SM_Dahl_C
// (None)

class UClass* UBPInv_SM_Dahl_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInv_SM_Dahl_C");

	return Clss;
}


// BPInv_SM_Dahl_C BPInv_SM_Dahl.Default__BPInv_SM_Dahl_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInv_SM_Dahl_C* UBPInv_SM_Dahl_C::GetDefaultObj()
{
	static class UBPInv_SM_Dahl_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInv_SM_Dahl_C*>(UBPInv_SM_Dahl_C::StaticClass()->DefaultObject);

	return Default;
}

}


