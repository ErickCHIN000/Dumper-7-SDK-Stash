#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyLS_G.ButterflyLS_G_C
// (None)

class UClass* UButterflyLS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyLS_G_C");

	return Clss;
}


// ButterflyLS_G_C ButterflyLS_G.Default__ButterflyLS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyLS_G_C* UButterflyLS_G_C::GetDefaultObj()
{
	static class UButterflyLS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyLS_G_C*>(UButterflyLS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


