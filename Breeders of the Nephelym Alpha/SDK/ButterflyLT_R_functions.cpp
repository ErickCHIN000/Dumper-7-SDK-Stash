#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyLT_R.ButterflyLT_R_C
// (None)

class UClass* UButterflyLT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyLT_R_C");

	return Clss;
}


// ButterflyLT_R_C ButterflyLT_R.Default__ButterflyLT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyLT_R_C* UButterflyLT_R_C::GetDefaultObj()
{
	static class UButterflyLT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyLT_R_C*>(UButterflyLT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


