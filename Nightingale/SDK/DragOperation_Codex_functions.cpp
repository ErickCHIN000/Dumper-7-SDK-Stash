#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DragOperation_Codex.DragOperation_Codex_C
// (None)

class UClass* UDragOperation_Codex_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DragOperation_Codex_C");

	return Clss;
}


// DragOperation_Codex_C DragOperation_Codex.Default__DragOperation_Codex_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDragOperation_Codex_C* UDragOperation_Codex_C::GetDefaultObj()
{
	static class UDragOperation_Codex_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDragOperation_Codex_C*>(UDragOperation_Codex_C::StaticClass()->DefaultObject);

	return Default;
}

}


