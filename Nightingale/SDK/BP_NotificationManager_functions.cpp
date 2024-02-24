#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_NotificationManager.BP_NotificationManager_C
// (Actor)

class UClass* ABP_NotificationManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_NotificationManager_C");

	return Clss;
}


// BP_NotificationManager_C BP_NotificationManager.Default__BP_NotificationManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_NotificationManager_C* ABP_NotificationManager_C::GetDefaultObj()
{
	static class ABP_NotificationManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_NotificationManager_C*>(ABP_NotificationManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_NotificationManager.BP_NotificationManager_C.ShowGlobalNotificationAllPlayers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Player_Controller                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        NotificationHeadline                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        NotificationType                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// double                             DisplayTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHUD*                        CallFunc_GetHUD_ReturnValue                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_HUD_Manager_C>K2Node_DynamicCast_AsBPI_HUD_Manager                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NotificationManager_C::ShowGlobalNotificationAllPlayers(class APlayerController* Player_Controller, class FText NotificationHeadline, class FText NotificationType, double DisplayTime, bool CallFunc_HasAuthority_ReturnValue, class AHUD* CallFunc_GetHUD_ReturnValue, TScriptInterface<class IBPI_HUD_Manager_C> K2Node_DynamicCast_AsBPI_HUD_Manager, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NotificationManager_C", "ShowGlobalNotificationAllPlayers");

	Params::ABP_NotificationManager_C_ShowGlobalNotificationAllPlayers_Params Parms{};

	Parms.Player_Controller = Player_Controller;
	Parms.NotificationHeadline = NotificationHeadline;
	Parms.NotificationType = NotificationType;
	Parms.DisplayTime = DisplayTime;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetHUD_ReturnValue = CallFunc_GetHUD_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_HUD_Manager = K2Node_DynamicCast_AsBPI_HUD_Manager;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NotificationManager.BP_NotificationManager_C.RemovePlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NotificationManager_C::RemovePlayer(class ACharacter* Player, bool CallFunc_Array_RemoveItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NotificationManager_C", "RemovePlayer");

	Params::ABP_NotificationManager_C_RemovePlayer_Params Parms{};

	Parms.Player = Player;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NotificationManager.BP_NotificationManager_C.AddPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NotificationManager_C::AddPlayer(class ACharacter* Player, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NotificationManager_C", "AddPlayer");

	Params::ABP_NotificationManager_C_AddPlayer_Params Parms{};

	Parms.Player = Player;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_NotificationManager.BP_NotificationManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_NotificationManager_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NotificationManager_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_NotificationManager.BP_NotificationManager_C.ExecuteUbergraph_BP_NotificationManager
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NotificationManager_C::ExecuteUbergraph_BP_NotificationManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NotificationManager_C", "ExecuteUbergraph_BP_NotificationManager");

	Params::ABP_NotificationManager_C_ExecuteUbergraph_BP_NotificationManager_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


