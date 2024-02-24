#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyNH_G.ButterflyNH_G_C
// (None)

class UClass* UButterflyNH_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyNH_G_C");

	return Clss;
}


// ButterflyNH_G_C ButterflyNH_G.Default__ButterflyNH_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyNH_G_C* UButterflyNH_G_C::GetDefaultObj()
{
	static class UButterflyNH_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyNH_G_C*>(UButterflyNH_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


