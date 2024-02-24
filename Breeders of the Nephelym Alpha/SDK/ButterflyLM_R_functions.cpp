#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyLM_R.ButterflyLM_R_C
// (None)

class UClass* UButterflyLM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyLM_R_C");

	return Clss;
}


// ButterflyLM_R_C ButterflyLM_R.Default__ButterflyLM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyLM_R_C* UButterflyLM_R_C::GetDefaultObj()
{
	static class UButterflyLM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyLM_R_C*>(UButterflyLM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


