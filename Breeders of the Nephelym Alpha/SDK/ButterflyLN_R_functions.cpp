#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyLN_R.ButterflyLN_R_C
// (None)

class UClass* UButterflyLN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyLN_R_C");

	return Clss;
}


// ButterflyLN_R_C ButterflyLN_R.Default__ButterflyLN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyLN_R_C* UButterflyLN_R_C::GetDefaultObj()
{
	static class UButterflyLN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyLN_R_C*>(UButterflyLN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


