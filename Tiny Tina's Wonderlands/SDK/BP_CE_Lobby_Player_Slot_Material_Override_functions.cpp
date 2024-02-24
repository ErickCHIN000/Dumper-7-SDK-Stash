#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CE_Lobby_Player_Slot_Material_Override.BP_CE_Lobby_Player_Slot_Material_Override_C
// (None)

class UClass* UBP_CE_Lobby_Player_Slot_Material_Override_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CE_Lobby_Player_Slot_Material_Override_C");

	return Clss;
}


// BP_CE_Lobby_Player_Slot_Material_Override_C BP_CE_Lobby_Player_Slot_Material_Override.Default__BP_CE_Lobby_Player_Slot_Material_Override_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CE_Lobby_Player_Slot_Material_Override_C* UBP_CE_Lobby_Player_Slot_Material_Override_C::GetDefaultObj()
{
	static class UBP_CE_Lobby_Player_Slot_Material_Override_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CE_Lobby_Player_Slot_Material_Override_C*>(UBP_CE_Lobby_Player_Slot_Material_Override_C::StaticClass()->DefaultObject);

	return Default;
}

}


