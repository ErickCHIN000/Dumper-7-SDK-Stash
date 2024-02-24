#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyHN_R.ButterflyHN_R_C
// (None)

class UClass* UButterflyHN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyHN_R_C");

	return Clss;
}


// ButterflyHN_R_C ButterflyHN_R.Default__ButterflyHN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyHN_R_C* UButterflyHN_R_C::GetDefaultObj()
{
	static class UButterflyHN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyHN_R_C*>(UButterflyHN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


