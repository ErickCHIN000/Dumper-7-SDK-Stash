#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LL_Trade_RoomItems.LL_Trade_RoomItems_C
// (Actor)

class UClass* ALL_Trade_RoomItems_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LL_Trade_RoomItems_C");

	return Clss;
}


// LL_Trade_RoomItems_C LL_Trade_RoomItems.Default__LL_Trade_RoomItems_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALL_Trade_RoomItems_C* ALL_Trade_RoomItems_C::GetDefaultObj()
{
	static class ALL_Trade_RoomItems_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALL_Trade_RoomItems_C*>(ALL_Trade_RoomItems_C::StaticClass()->DefaultObject);

	return Default;
}

}


