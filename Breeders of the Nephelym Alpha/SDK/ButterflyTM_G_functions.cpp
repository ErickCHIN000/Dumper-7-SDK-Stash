#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyTM_G.ButterflyTM_G_C
// (None)

class UClass* UButterflyTM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyTM_G_C");

	return Clss;
}


// ButterflyTM_G_C ButterflyTM_G.Default__ButterflyTM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyTM_G_C* UButterflyTM_G_C::GetDefaultObj()
{
	static class UButterflyTM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyTM_G_C*>(UButterflyTM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


