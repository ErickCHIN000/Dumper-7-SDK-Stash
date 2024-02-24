#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyML_G.ButterflyML_G_C
// (None)

class UClass* UButterflyML_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyML_G_C");

	return Clss;
}


// ButterflyML_G_C ButterflyML_G.Default__ButterflyML_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyML_G_C* UButterflyML_G_C::GetDefaultObj()
{
	static class UButterflyML_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyML_G_C*>(UButterflyML_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


