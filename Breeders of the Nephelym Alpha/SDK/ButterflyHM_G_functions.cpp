#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyHM_G.ButterflyHM_G_C
// (None)

class UClass* UButterflyHM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyHM_G_C");

	return Clss;
}


// ButterflyHM_G_C ButterflyHM_G.Default__ButterflyHM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyHM_G_C* UButterflyHM_G_C::GetDefaultObj()
{
	static class UButterflyHM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyHM_G_C*>(UButterflyHM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


