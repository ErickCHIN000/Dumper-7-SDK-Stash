#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyTN_R.ButterflyTN_R_C
// (None)

class UClass* UButterflyTN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyTN_R_C");

	return Clss;
}


// ButterflyTN_R_C ButterflyTN_R.Default__ButterflyTN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyTN_R_C* UButterflyTN_R_C::GetDefaultObj()
{
	static class UButterflyTN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyTN_R_C*>(UButterflyTN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


