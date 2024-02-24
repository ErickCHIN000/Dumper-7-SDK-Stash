#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyHT_R.ButterflyHT_R_C
// (None)

class UClass* UButterflyHT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyHT_R_C");

	return Clss;
}


// ButterflyHT_R_C ButterflyHT_R.Default__ButterflyHT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyHT_R_C* UButterflyHT_R_C::GetDefaultObj()
{
	static class UButterflyHT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyHT_R_C*>(UButterflyHT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


