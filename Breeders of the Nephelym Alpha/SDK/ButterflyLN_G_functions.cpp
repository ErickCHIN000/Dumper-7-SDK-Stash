#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyLN_G.ButterflyLN_G_C
// (None)

class UClass* UButterflyLN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyLN_G_C");

	return Clss;
}


// ButterflyLN_G_C ButterflyLN_G.Default__ButterflyLN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyLN_G_C* UButterflyLN_G_C::GetDefaultObj()
{
	static class UButterflyLN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyLN_G_C*>(UButterflyLN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


