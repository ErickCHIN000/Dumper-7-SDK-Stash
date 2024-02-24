#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyHT_G.ButterflyHT_G_C
// (None)

class UClass* UButterflyHT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyHT_G_C");

	return Clss;
}


// ButterflyHT_G_C ButterflyHT_G.Default__ButterflyHT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyHT_G_C* UButterflyHT_G_C::GetDefaultObj()
{
	static class UButterflyHT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyHT_G_C*>(UButterflyHT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


