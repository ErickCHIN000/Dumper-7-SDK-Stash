#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_PerkEffect_RamOnBlock.GE_PerkEffect_RamOnBlock_C
// (None)

class UClass* UGE_PerkEffect_RamOnBlock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_PerkEffect_RamOnBlock_C");

	return Clss;
}


// GE_PerkEffect_RamOnBlock_C GE_PerkEffect_RamOnBlock.Default__GE_PerkEffect_RamOnBlock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_PerkEffect_RamOnBlock_C* UGE_PerkEffect_RamOnBlock_C::GetDefaultObj()
{
	static class UGE_PerkEffect_RamOnBlock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_PerkEffect_RamOnBlock_C*>(UGE_PerkEffect_RamOnBlock_C::StaticClass()->DefaultObject);

	return Default;
}

}


