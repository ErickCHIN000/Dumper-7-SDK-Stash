#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Item_Longsword_EchoShovel.BP_Item_Longsword_EchoShovel_C
// (Actor)

class UClass* ABP_Item_Longsword_EchoShovel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Item_Longsword_EchoShovel_C");

	return Clss;
}


// BP_Item_Longsword_EchoShovel_C BP_Item_Longsword_EchoShovel.Default__BP_Item_Longsword_EchoShovel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Item_Longsword_EchoShovel_C* ABP_Item_Longsword_EchoShovel_C::GetDefaultObj()
{
	static class ABP_Item_Longsword_EchoShovel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Item_Longsword_EchoShovel_C*>(ABP_Item_Longsword_EchoShovel_C::StaticClass()->DefaultObject);

	return Default;
}

}


