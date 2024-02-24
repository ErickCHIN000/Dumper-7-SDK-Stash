#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DragOperation_Item.DragOperation_Item_C
// (None)

class UClass* UDragOperation_Item_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DragOperation_Item_C");

	return Clss;
}


// DragOperation_Item_C DragOperation_Item.Default__DragOperation_Item_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDragOperation_Item_C* UDragOperation_Item_C::GetDefaultObj()
{
	static class UDragOperation_Item_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDragOperation_Item_C*>(UDragOperation_Item_C::StaticClass()->DefaultObject);

	return Default;
}

}


