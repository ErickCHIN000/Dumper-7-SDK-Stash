#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Curse_DropItem.GE_Curse_DropItem_C
// (None)

class UClass* UGE_Curse_DropItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Curse_DropItem_C");

	return Clss;
}


// GE_Curse_DropItem_C GE_Curse_DropItem.Default__GE_Curse_DropItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Curse_DropItem_C* UGE_Curse_DropItem_C::GetDefaultObj()
{
	static class UGE_Curse_DropItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Curse_DropItem_C*>(UGE_Curse_DropItem_C::StaticClass()->DefaultObject);

	return Default;
}

}


