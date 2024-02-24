#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyNT_G.ButterflyNT_G_C
// (None)

class UClass* UButterflyNT_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyNT_G_C");

	return Clss;
}


// ButterflyNT_G_C ButterflyNT_G.Default__ButterflyNT_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyNT_G_C* UButterflyNT_G_C::GetDefaultObj()
{
	static class UButterflyNT_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyNT_G_C*>(UButterflyNT_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


