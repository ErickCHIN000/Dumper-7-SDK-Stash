#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyLH_G.ButterflyLH_G_C
// (None)

class UClass* UButterflyLH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyLH_G_C");

	return Clss;
}


// ButterflyLH_G_C ButterflyLH_G.Default__ButterflyLH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyLH_G_C* UButterflyLH_G_C::GetDefaultObj()
{
	static class UButterflyLH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyLH_G_C*>(UButterflyLH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


