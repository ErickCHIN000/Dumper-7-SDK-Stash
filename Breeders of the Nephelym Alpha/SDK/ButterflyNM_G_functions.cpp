#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyNM_G.ButterflyNM_G_C
// (None)

class UClass* UButterflyNM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyNM_G_C");

	return Clss;
}


// ButterflyNM_G_C ButterflyNM_G.Default__ButterflyNM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyNM_G_C* UButterflyNM_G_C::GetDefaultObj()
{
	static class UButterflyNM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyNM_G_C*>(UButterflyNM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


