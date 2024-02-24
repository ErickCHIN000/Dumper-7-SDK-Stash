#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyMS_G.ButterflyMS_G_C
// (None)

class UClass* UButterflyMS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyMS_G_C");

	return Clss;
}


// ButterflyMS_G_C ButterflyMS_G.Default__ButterflyMS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyMS_G_C* UButterflyMS_G_C::GetDefaultObj()
{
	static class UButterflyMS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyMS_G_C*>(UButterflyMS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


