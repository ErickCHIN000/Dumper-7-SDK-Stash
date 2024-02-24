#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyHN_G.ButterflyHN_G_C
// (None)

class UClass* UButterflyHN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyHN_G_C");

	return Clss;
}


// ButterflyHN_G_C ButterflyHN_G.Default__ButterflyHN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyHN_G_C* UButterflyHN_G_C::GetDefaultObj()
{
	static class UButterflyHN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyHN_G_C*>(UButterflyHN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


