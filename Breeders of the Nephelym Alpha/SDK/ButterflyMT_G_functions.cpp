#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyMT_G.ButterflyMT_G_C
// (None)

class UClass* UButterflyMT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyMT_G_C");

	return Clss;
}


// ButterflyMT_G_C ButterflyMT_G.Default__ButterflyMT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyMT_G_C* UButterflyMT_G_C::GetDefaultObj()
{
	static class UButterflyMT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyMT_G_C*>(UButterflyMT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


