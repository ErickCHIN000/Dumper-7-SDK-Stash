#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DragDropOperation_RealmCard.DragDropOperation_RealmCard_C
// (None)

class UClass* UDragDropOperation_RealmCard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DragDropOperation_RealmCard_C");

	return Clss;
}


// DragDropOperation_RealmCard_C DragDropOperation_RealmCard.Default__DragDropOperation_RealmCard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDragDropOperation_RealmCard_C* UDragDropOperation_RealmCard_C::GetDefaultObj()
{
	static class UDragDropOperation_RealmCard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDragDropOperation_RealmCard_C*>(UDragDropOperation_RealmCard_C::StaticClass()->DefaultObject);

	return Default;
}

}


