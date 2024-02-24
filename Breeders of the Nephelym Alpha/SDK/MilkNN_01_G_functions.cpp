#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MilkNN_01_G.MilkNN_01_G_C
// (None)

class UClass* UMilkNN_01_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MilkNN_01_G_C");

	return Clss;
}


// MilkNN_01_G_C MilkNN_01_G.Default__MilkNN_01_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMilkNN_01_G_C* UMilkNN_01_G_C::GetDefaultObj()
{
	static class UMilkNN_01_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMilkNN_01_G_C*>(UMilkNN_01_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


