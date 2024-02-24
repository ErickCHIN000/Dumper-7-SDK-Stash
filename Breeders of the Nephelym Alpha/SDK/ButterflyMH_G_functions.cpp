#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyMH_G.ButterflyMH_G_C
// (None)

class UClass* UButterflyMH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyMH_G_C");

	return Clss;
}


// ButterflyMH_G_C ButterflyMH_G.Default__ButterflyMH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyMH_G_C* UButterflyMH_G_C::GetDefaultObj()
{
	static class UButterflyMH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyMH_G_C*>(UButterflyMH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


