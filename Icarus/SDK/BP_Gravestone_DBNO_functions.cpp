#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Gravestone_DBNO.BP_Gravestone_DBNO_C
// (Actor)

class UClass* ABP_Gravestone_DBNO_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Gravestone_DBNO_C");

	return Clss;
}


// BP_Gravestone_DBNO_C BP_Gravestone_DBNO.Default__BP_Gravestone_DBNO_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Gravestone_DBNO_C* ABP_Gravestone_DBNO_C::GetDefaultObj()
{
	static class ABP_Gravestone_DBNO_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Gravestone_DBNO_C*>(ABP_Gravestone_DBNO_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Gravestone_DBNO.BP_Gravestone_DBNO_C.ServerHandleAssignedPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UProspectSubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConnectedPlayer            CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_OutConnectedPlayer(None)
// bool                               CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FIcarusProspect             CallFunc_GetActiveProspectData_ReturnValue                       (ConstParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAlive_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Gravestone_DBNO_C::ServerHandleAssignedPlayer(class UProspectSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FConnectedPlayer& CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_OutConnectedPlayer, bool CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_ReturnValue, const struct FIcarusProspect& CallFunc_GetActiveProspectData_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool CallFunc_IsAlive_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Gravestone_DBNO_C", "ServerHandleAssignedPlayer");

	Params::ABP_Gravestone_DBNO_C_ServerHandleAssignedPlayer_Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_OutConnectedPlayer = CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_OutConnectedPlayer;
	Parms.CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_ReturnValue = CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_ReturnValue;
	Parms.CallFunc_GetActiveProspectData_ReturnValue = CallFunc_GetActiveProspectData_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.CallFunc_IsAlive_ReturnValue = CallFunc_IsAlive_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


