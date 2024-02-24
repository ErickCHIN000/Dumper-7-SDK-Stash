#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CE_Barbarian_Whirlwind.BP_CE_Barbarian_Whirlwind_C
// (None)

class UClass* UBP_CE_Barbarian_Whirlwind_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CE_Barbarian_Whirlwind_C");

	return Clss;
}


// BP_CE_Barbarian_Whirlwind_C BP_CE_Barbarian_Whirlwind.Default__BP_CE_Barbarian_Whirlwind_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CE_Barbarian_Whirlwind_C* UBP_CE_Barbarian_Whirlwind_C::GetDefaultObj()
{
	static class UBP_CE_Barbarian_Whirlwind_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CE_Barbarian_Whirlwind_C*>(UBP_CE_Barbarian_Whirlwind_C::StaticClass()->DefaultObject);

	return Default;
}

}


