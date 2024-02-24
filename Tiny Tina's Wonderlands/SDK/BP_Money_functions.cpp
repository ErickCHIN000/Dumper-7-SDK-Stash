#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Money.BP_Money_C
// (Actor)

class UClass* ABP_Money_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Money_C");

	return Clss;
}


// BP_Money_C BP_Money.Default__BP_Money_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Money_C* ABP_Money_C::GetDefaultObj()
{
	static class ABP_Money_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Money_C*>(ABP_Money_C::StaticClass()->DefaultObject);

	return Default;
}

}


