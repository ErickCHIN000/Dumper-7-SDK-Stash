#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyTH_G.ButterflyTH_G_C
// (None)

class UClass* UButterflyTH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyTH_G_C");

	return Clss;
}


// ButterflyTH_G_C ButterflyTH_G.Default__ButterflyTH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyTH_G_C* UButterflyTH_G_C::GetDefaultObj()
{
	static class UButterflyTH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyTH_G_C*>(UButterflyTH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


