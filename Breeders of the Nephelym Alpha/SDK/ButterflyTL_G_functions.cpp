#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyTL_G.ButterflyTL_G_C
// (None)

class UClass* UButterflyTL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyTL_G_C");

	return Clss;
}


// ButterflyTL_G_C ButterflyTL_G.Default__ButterflyTL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyTL_G_C* UButterflyTL_G_C::GetDefaultObj()
{
	static class UButterflyTL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyTL_G_C*>(UButterflyTL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


