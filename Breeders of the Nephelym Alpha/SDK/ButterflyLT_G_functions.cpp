#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyLT_G.ButterflyLT_G_C
// (None)

class UClass* UButterflyLT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyLT_G_C");

	return Clss;
}


// ButterflyLT_G_C ButterflyLT_G.Default__ButterflyLT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyLT_G_C* UButterflyLT_G_C::GetDefaultObj()
{
	static class UButterflyLT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyLT_G_C*>(UButterflyLT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


