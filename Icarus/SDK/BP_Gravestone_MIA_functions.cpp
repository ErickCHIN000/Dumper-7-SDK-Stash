#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Gravestone_MIA.BP_Gravestone_MIA_C
// (Actor)

class UClass* ABP_Gravestone_MIA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Gravestone_MIA_C");

	return Clss;
}


// BP_Gravestone_MIA_C BP_Gravestone_MIA.Default__BP_Gravestone_MIA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Gravestone_MIA_C* ABP_Gravestone_MIA_C::GetDefaultObj()
{
	static class ABP_Gravestone_MIA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Gravestone_MIA_C*>(ABP_Gravestone_MIA_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Gravestone_MIA.BP_Gravestone_MIA_C.HandleAssignedPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Gravestone_MIA_C::HandleAssignedPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Gravestone_MIA_C", "HandleAssignedPlayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Gravestone_MIA.BP_Gravestone_MIA_C.ExecuteUbergraph_BP_Gravestone_MIA
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetGravestoneInventory_Inventory                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConnectedPlayer            CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_OutConnectedPlayer(None)
// bool                               CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Gravestone_MIA_C::ExecuteUbergraph_BP_Gravestone_MIA(int32 EntryPoint, class UInventory* CallFunc_GetGravestoneInventory_Inventory, const struct FConnectedPlayer& CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_OutConnectedPlayer, bool CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Gravestone_MIA_C", "ExecuteUbergraph_BP_Gravestone_MIA");

	Params::ABP_Gravestone_MIA_C_ExecuteUbergraph_BP_Gravestone_MIA_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGravestoneInventory_Inventory = CallFunc_GetGravestoneInventory_Inventory;
	Parms.CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_OutConnectedPlayer = CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_OutConnectedPlayer;
	Parms.CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_ReturnValue = CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


