#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyHL_G.ButterflyHL_G_C
// (None)

class UClass* UButterflyHL_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyHL_G_C");

	return Clss;
}


// ButterflyHL_G_C ButterflyHL_G.Default__ButterflyHL_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyHL_G_C* UButterflyHL_G_C::GetDefaultObj()
{
	static class UButterflyHL_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyHL_G_C*>(UButterflyHL_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


