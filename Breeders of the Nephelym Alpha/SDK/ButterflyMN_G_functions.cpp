#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButterflyMN_G.ButterflyMN_G_C
// (None)

class UClass* UButterflyMN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButterflyMN_G_C");

	return Clss;
}


// ButterflyMN_G_C ButterflyMN_G.Default__ButterflyMN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButterflyMN_G_C* UButterflyMN_G_C::GetDefaultObj()
{
	static class UButterflyMN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButterflyMN_G_C*>(UButterflyMN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


