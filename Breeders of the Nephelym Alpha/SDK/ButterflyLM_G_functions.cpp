#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyLM_G.ButterflyLM_G_C
// (None)

class UClass* UButterflyLM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyLM_G_C");

	return Clss;
}


// ButterflyLM_G_C ButterflyLM_G.Default__ButterflyLM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyLM_G_C* UButterflyLM_G_C::GetDefaultObj()
{
	static class UButterflyLM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyLM_G_C*>(UButterflyLM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


