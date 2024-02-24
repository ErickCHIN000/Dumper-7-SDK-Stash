#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyTN_G.ButterflyTN_G_C
// (None)

class UClass* UButterflyTN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyTN_G_C");

	return Clss;
}


// ButterflyTN_G_C ButterflyTN_G.Default__ButterflyTN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyTN_G_C* UButterflyTN_G_C::GetDefaultObj()
{
	static class UButterflyTN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyTN_G_C*>(UButterflyTN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


