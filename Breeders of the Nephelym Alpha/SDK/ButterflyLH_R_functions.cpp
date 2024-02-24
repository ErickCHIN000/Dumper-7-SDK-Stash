#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyLH_R.ButterflyLH_R_C
// (None)

class UClass* UButterflyLH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyLH_R_C");

	return Clss;
}


// ButterflyLH_R_C ButterflyLH_R.Default__ButterflyLH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyLH_R_C* UButterflyLH_R_C::GetDefaultObj()
{
	static class UButterflyLH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyLH_R_C*>(UButterflyLH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


