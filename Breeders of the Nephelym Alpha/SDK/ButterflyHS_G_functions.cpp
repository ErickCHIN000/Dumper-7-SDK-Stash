#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyHS_G.ButterflyHS_G_C
// (None)

class UClass* UButterflyHS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyHS_G_C");

	return Clss;
}


// ButterflyHS_G_C ButterflyHS_G.Default__ButterflyHS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyHS_G_C* UButterflyHS_G_C::GetDefaultObj()
{
	static class UButterflyHS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyHS_G_C*>(UButterflyHS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


