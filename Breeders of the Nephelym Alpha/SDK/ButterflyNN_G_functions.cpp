#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyNN_G.ButterflyNN_G_C
// (None)

class UClass* UButterflyNN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyNN_G_C");

	return Clss;
}


// ButterflyNN_G_C ButterflyNN_G.Default__ButterflyNN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyNN_G_C* UButterflyNN_G_C::GetDefaultObj()
{
	static class UButterflyNN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyNN_G_C*>(UButterflyNN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


