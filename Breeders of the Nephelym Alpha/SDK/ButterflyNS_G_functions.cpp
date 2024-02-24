#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyNS_G.ButterflyNS_G_C
// (None)

class UClass* UButterflyNS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyNS_G_C");

	return Clss;
}


// ButterflyNS_G_C ButterflyNS_G.Default__ButterflyNS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyNS_G_C* UButterflyNS_G_C::GetDefaultObj()
{
	static class UButterflyNS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyNS_G_C*>(UButterflyNS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


