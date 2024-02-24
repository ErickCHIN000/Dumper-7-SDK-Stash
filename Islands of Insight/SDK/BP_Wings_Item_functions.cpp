#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Wings_Item.BP_Wings_Item_C
// (None)

class UClass* UBP_Wings_Item_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Wings_Item_C");

	return Clss;
}


// BP_Wings_Item_C BP_Wings_Item.Default__BP_Wings_Item_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Wings_Item_C* UBP_Wings_Item_C::GetDefaultObj()
{
	static class UBP_Wings_Item_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Wings_Item_C*>(UBP_Wings_Item_C::StaticClass()->DefaultObject);

	return Default;
}

}


