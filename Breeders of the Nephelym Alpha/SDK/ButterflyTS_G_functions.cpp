#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyTS_G.ButterflyTS_G_C
// (None)

class UClass* UButterflyTS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyTS_G_C");

	return Clss;
}


// ButterflyTS_G_C ButterflyTS_G.Default__ButterflyTS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyTS_G_C* UButterflyTS_G_C::GetDefaultObj()
{
	static class UButterflyTS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyTS_G_C*>(UButterflyTS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


