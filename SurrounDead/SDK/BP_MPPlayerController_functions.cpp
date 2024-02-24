#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MPPlayerController.BP_MPPlayerController_C
// (Actor, PlayerController)

class UClass* ABP_MPPlayerController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MPPlayerController_C");

	return Clss;
}


// BP_MPPlayerController_C BP_MPPlayerController.Default__BP_MPPlayerController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MPPlayerController_C* ABP_MPPlayerController_C::GetDefaultObj()
{
	static class ABP_MPPlayerController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MPPlayerController_C*>(ABP_MPPlayerController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MPPlayerController.BP_MPPlayerController_C.GetJoystickDirection
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EJoystickTypes          Stick                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   StickInput                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInputAxisKeyValue_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInputAxisKeyValue_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInputAxisKeyValue_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInputAxisKeyValue_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector2D_Y_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector2D_X_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector2D_X_ImplicitCast_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MPPlayerController_C::GetJoystickDirection(enum class EJoystickTypes Stick, struct FVector2D* StickInput, float CallFunc_GetInputAxisKeyValue_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_GetInputAxisKeyValue_ReturnValue_1, float CallFunc_GetInputAxisKeyValue_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_GetInputAxisKeyValue_ReturnValue_3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, double CallFunc_MakeVector2D_Y_ImplicitCast, double CallFunc_MakeVector2D_X_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_MakeVector2D_X_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MPPlayerController_C", "GetJoystickDirection");

	Params::ABP_MPPlayerController_C_GetJoystickDirection_Params Parms{};

	Parms.Stick = Stick;
	Parms.CallFunc_GetInputAxisKeyValue_ReturnValue = CallFunc_GetInputAxisKeyValue_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetInputAxisKeyValue_ReturnValue_1 = CallFunc_GetInputAxisKeyValue_ReturnValue_1;
	Parms.CallFunc_GetInputAxisKeyValue_ReturnValue_2 = CallFunc_GetInputAxisKeyValue_ReturnValue_2;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetInputAxisKeyValue_ReturnValue_3 = CallFunc_GetInputAxisKeyValue_ReturnValue_3;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_Y_ImplicitCast = CallFunc_MakeVector2D_Y_ImplicitCast;
	Parms.CallFunc_MakeVector2D_X_ImplicitCast = CallFunc_MakeVector2D_X_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_MakeVector2D_X_ImplicitCast_1 = CallFunc_MakeVector2D_X_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (StickInput != nullptr)
		*StickInput = std::move(Parms.StickInput);

}


// Function BP_MPPlayerController.BP_MPPlayerController_C.ComponentsToSave
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UActorComponent*>     Components                                                       (Parm, OutParm, ContainsInstancedReference)
// TArray<class UActorComponent*>     K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void ABP_MPPlayerController_C::ComponentsToSave(TArray<class UActorComponent*>* Components, TArray<class UActorComponent*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MPPlayerController_C", "ComponentsToSave");

	Params::ABP_MPPlayerController_C_ComponentsToSave_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Components != nullptr)
		*Components = std::move(Parms.Components);

}


// Function BP_MPPlayerController.BP_MPPlayerController_C.LoadPlayerInventoryFromSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_GetSlotInfoSaveGame_SaveGameName                        (ZeroConstructor, HasGetValueTypeHash)
// class UEMSInfoSaveGame*            CallFunc_GetSlotInfoSaveGame_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerCharacter_C*       CallFunc_CastToCharacter_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MPPlayerController_C::LoadPlayerInventoryFromSlot(const class FString& CallFunc_GetSlotInfoSaveGame_SaveGameName, class UEMSInfoSaveGame* CallFunc_GetSlotInfoSaveGame_ReturnValue, class ABP_PlayerCharacter_C* CallFunc_CastToCharacter_Character, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MPPlayerController_C", "LoadPlayerInventoryFromSlot");

	Params::ABP_MPPlayerController_C_LoadPlayerInventoryFromSlot_Params Parms{};

	Parms.CallFunc_GetSlotInfoSaveGame_SaveGameName = CallFunc_GetSlotInfoSaveGame_SaveGameName;
	Parms.CallFunc_GetSlotInfoSaveGame_ReturnValue = CallFunc_GetSlotInfoSaveGame_ReturnValue;
	Parms.CallFunc_CastToCharacter_Character = CallFunc_CastToCharacter_Character;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MPPlayerController.BP_MPPlayerController_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_MPPlayerController_C::InpActEvt_AnyKey_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MPPlayerController_C", "InpActEvt_AnyKey_K2Node_InputKeyEvent_0");

	Params::ABP_MPPlayerController_C_InpActEvt_AnyKey_K2Node_InputKeyEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MPPlayerController.BP_MPPlayerController_C.OnFailed_F36E30354316ADD99BBAD29E4E315233
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MPPlayerController_C::OnFailed_F36E30354316ADD99BBAD29E4E315233()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MPPlayerController_C", "OnFailed_F36E30354316ADD99BBAD29E4E315233");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MPPlayerController.BP_MPPlayerController_C.OnCompleted_F36E30354316ADD99BBAD29E4E315233
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MPPlayerController_C::OnCompleted_F36E30354316ADD99BBAD29E4E315233()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MPPlayerController_C", "OnCompleted_F36E30354316ADD99BBAD29E4E315233");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MPPlayerController.BP_MPPlayerController_C.OnFailed_9CDBA9034C950D925C1539BE037C23EF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MPPlayerController_C::OnFailed_9CDBA9034C950D925C1539BE037C23EF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MPPlayerController_C", "OnFailed_9CDBA9034C950D925C1539BE037C23EF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MPPlayerController.BP_MPPlayerController_C.OnCompleted_9CDBA9034C950D925C1539BE037C23EF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MPPlayerController_C::OnCompleted_9CDBA9034C950D925C1539BE037C23EF()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MPPlayerController_C", "OnCompleted_9CDBA9034C950D925C1539BE037C23EF");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MPPlayerController.BP_MPPlayerController_C.InpActEvt_Map_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_MPPlayerController_C::InpActEvt_Map_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MPPlayerController_C", "InpActEvt_Map_K2Node_InputActionEvent_1");

	Params::ABP_MPPlayerController_C_InpActEvt_Map_K2Node_InputActionEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MPPlayerController.BP_MPPlayerController_C.InpActEvt_DebugMenu_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_MPPlayerController_C::InpActEvt_DebugMenu_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MPPlayerController_C", "InpActEvt_DebugMenu_K2Node_InputActionEvent_0");

	Params::ABP_MPPlayerController_C_InpActEvt_DebugMenu_K2Node_InputActionEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MPPlayerController.BP_MPPlayerController_C.ActorSaved
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MPPlayerController_C::ActorSaved()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MPPlayerController_C", "ActorSaved");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MPPlayerController.BP_MPPlayerController_C.ActorPreSave
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MPPlayerController_C::ActorPreSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MPPlayerController_C", "ActorPreSave");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MPPlayerController.BP_MPPlayerController_C.ActorLoaded
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MPPlayerController_C::ActorLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MPPlayerController_C", "ActorLoaded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MPPlayerController.BP_MPPlayerController_C.Svr_RequestRespawn_SpawnPoint
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MPPlayerController_C::Svr_RequestRespawn_SpawnPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MPPlayerController_C", "Svr_RequestRespawn_SpawnPoint");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MPPlayerController.BP_MPPlayerController_C.Svr_RequestRespawnSuicide
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MPPlayerController_C::Svr_RequestRespawnSuicide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MPPlayerController_C", "Svr_RequestRespawnSuicide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MPPlayerController.BP_MPPlayerController_C.Client_SUICIDE
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MPPlayerController_C::Client_SUICIDE()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MPPlayerController_C", "Client_SUICIDE");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MPPlayerController.BP_MPPlayerController_C.Svr_RequestRespawn_Random
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MPPlayerController_C::Svr_RequestRespawn_Random()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MPPlayerController_C", "Svr_RequestRespawn_Random");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MPPlayerController.BP_MPPlayerController_C.Client_Died
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MPPlayerController_C::Client_Died()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MPPlayerController_C", "Client_Died");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MPPlayerController.BP_MPPlayerController_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                       PossessedPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MPPlayerController_C::ReceivePossess(class APawn* PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MPPlayerController_C", "ReceivePossess");

	Params::ABP_MPPlayerController_C_ReceivePossess_Params Parms{};

	Parms.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MPPlayerController.BP_MPPlayerController_C.CameraShake
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      CameraShake                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MPPlayerController_C::CameraShake(class UClass* CameraShake)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MPPlayerController_C", "CameraShake");

	Params::ABP_MPPlayerController_C_CameraShake_Params Parms{};

	Parms.CameraShake = CameraShake;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MPPlayerController.BP_MPPlayerController_C.CameraShakeClient
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Shake                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MPPlayerController_C::CameraShakeClient(class UClass* Shake)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MPPlayerController_C", "CameraShakeClient");

	Params::ABP_MPPlayerController_C_CameraShakeClient_Params Parms{};

	Parms.Shake = Shake;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MPPlayerController.BP_MPPlayerController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_MPPlayerController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MPPlayerController_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MPPlayerController.BP_MPPlayerController_C.SensitivityChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MPPlayerController_C::SensitivityChanged(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MPPlayerController_C", "SensitivityChanged");

	Params::ABP_MPPlayerController_C_SensitivityChanged_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MPPlayerController.BP_MPPlayerController_C.EventLightShafts
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MPPlayerController_C::EventLightShafts(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MPPlayerController_C", "EventLightShafts");

	Params::ABP_MPPlayerController_C_EventLightShafts_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MPPlayerController.BP_MPPlayerController_C.EventVolFog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MPPlayerController_C::EventVolFog(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MPPlayerController_C", "EventVolFog");

	Params::ABP_MPPlayerController_C_EventVolFog_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MPPlayerController.BP_MPPlayerController_C.LoadGameFromSlot
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MPPlayerController_C::LoadGameFromSlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MPPlayerController_C", "LoadGameFromSlot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MPPlayerController.BP_MPPlayerController_C.SaveGameToSlot
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MPPlayerController_C::SaveGameToSlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MPPlayerController_C", "SaveGameToSlot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MPPlayerController.BP_MPPlayerController_C.Client_MapToggle
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_MPPlayerController_C::Client_MapToggle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MPPlayerController_C", "Client_MapToggle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MPPlayerController.BP_MPPlayerController_C.ExecuteUbergraph_BP_MPPlayerController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key                                      (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_1                                    (HasGetValueTypeHash)
// class UEMSAsyncSaveGame*           CallFunc_AsyncSaveActors_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USave_Player_C*              CallFunc_GetCustomSave_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USave_Player_C*              CallFunc_GetCustomSave_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USD_GameInstance_C*          CallFunc_GetGameInstance_Instance                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USD_GameInstance_C*          CallFunc_GetGameInstance_Instance_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USD_GameInstance_C*          CallFunc_GetGameInstance_Instance_2                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UScreenPermadeath_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBoolCVar_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScreenPermadeath_C*         CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBoolCVar_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevellingComponent_C*       CallFunc_GetLevellingComponent_LevellingComponent                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class URespawnScreen_C*            CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_CustomNarrativeDefaultUI_C*CallFunc_Create_ReturnValue_3                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_PossessedPawn                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEMSAsyncLoadGame*           CallFunc_AsyncLoadActors_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Event_CameraShake                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_CustomEvent_Shake                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StoreStats_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerCharacter_C*       K2Node_DynamicCast_AsBP_Player_Character                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetAchievement_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_NewValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_NewValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSlotInfoSaveGame_SaveGameName                        (ZeroConstructor, HasGetValueTypeHash)
// class UEMSInfoSaveGame*            CallFunc_GetSlotInfoSaveGame_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USave_Difficulties_C*        CallFunc_GetCustomSave_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSlotInfoSaveGame_SaveGameName_1                      (ZeroConstructor, HasGetValueTypeHash)
// class UEMSInfoSaveGame*            CallFunc_GetSlotInfoSaveGame_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Save_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDebugMenu_C*                CallFunc_Create_ReturnValue_4                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerCharacter_C*       K2Node_DynamicCast_AsBP_Player_Character_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key                                         (HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetKeyGroupStatic_ReturnValue                           (NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBoolCVar_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetDeprecatedInputPitchScale_NewValue_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MPPlayerController_C::ExecuteUbergraph_BP_MPPlayerController(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, const struct FKey& K2Node_InputActionEvent_Key, const struct FKey& K2Node_InputActionEvent_Key_1, class UEMSAsyncSaveGame* CallFunc_AsyncSaveActors_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class USave_Player_C* CallFunc_GetCustomSave_ReturnValue, class USave_Player_C* CallFunc_GetCustomSave_ReturnValue_1, class USD_GameInstance_C* CallFunc_GetGameInstance_Instance, class USD_GameInstance_C* CallFunc_GetGameInstance_Instance_1, class USD_GameInstance_C* CallFunc_GetGameInstance_Instance_2, class UScreenPermadeath_C* CallFunc_Create_ReturnValue, bool CallFunc_GetBoolCVar_ReturnValue, class UScreenPermadeath_C* CallFunc_Create_ReturnValue_1, bool CallFunc_GetBoolCVar_ReturnValue_1, class ULevellingComponent_C* CallFunc_GetLevellingComponent_LevellingComponent, class URespawnScreen_C* CallFunc_Create_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UBP_CustomNarrativeDefaultUI_C* CallFunc_Create_ReturnValue_3, class APawn* K2Node_Event_PossessedPawn, class UEMSAsyncLoadGame* CallFunc_AsyncLoadActors_ReturnValue, class UClass* K2Node_Event_CameraShake, bool CallFunc_IsValid_ReturnValue_1, class UClass* K2Node_CustomEvent_Shake, bool Temp_bool_IsClosed_Variable, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_StoreStats_ReturnValue, class ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetAchievement_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_3, float K2Node_CustomEvent_NewValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool K2Node_CustomEvent_NewValue_1, bool K2Node_CustomEvent_NewValue, double CallFunc_RandomFloatInRange_ReturnValue, const class FString& CallFunc_GetSlotInfoSaveGame_SaveGameName, class UEMSInfoSaveGame* CallFunc_GetSlotInfoSaveGame_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class USave_Difficulties_C* CallFunc_GetCustomSave_ReturnValue_2, const class FString& CallFunc_GetSlotInfoSaveGame_SaveGameName_1, class UEMSInfoSaveGame* CallFunc_GetSlotInfoSaveGame_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_Save_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UDebugMenu_C* CallFunc_Create_ReturnValue_4, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class ABP_PlayerCharacter_C* K2Node_DynamicCast_AsBP_Player_Character_1, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_IsValid_ReturnValue_4, const struct FKey& K2Node_InputKeyEvent_Key, const struct FGameplayTag& CallFunc_GetKeyGroupStatic_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_GetBoolCVar_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_SetDeprecatedInputPitchScale_NewValue_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MPPlayerController_C", "ExecuteUbergraph_BP_MPPlayerController");

	Params::ABP_MPPlayerController_C_ExecuteUbergraph_BP_MPPlayerController_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_InputActionEvent_Key = K2Node_InputActionEvent_Key;
	Parms.K2Node_InputActionEvent_Key_1 = K2Node_InputActionEvent_Key_1;
	Parms.CallFunc_AsyncSaveActors_ReturnValue = CallFunc_AsyncSaveActors_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetCustomSave_ReturnValue = CallFunc_GetCustomSave_ReturnValue;
	Parms.CallFunc_GetCustomSave_ReturnValue_1 = CallFunc_GetCustomSave_ReturnValue_1;
	Parms.CallFunc_GetGameInstance_Instance = CallFunc_GetGameInstance_Instance;
	Parms.CallFunc_GetGameInstance_Instance_1 = CallFunc_GetGameInstance_Instance_1;
	Parms.CallFunc_GetGameInstance_Instance_2 = CallFunc_GetGameInstance_Instance_2;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetBoolCVar_ReturnValue = CallFunc_GetBoolCVar_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_GetBoolCVar_ReturnValue_1 = CallFunc_GetBoolCVar_ReturnValue_1;
	Parms.CallFunc_GetLevellingComponent_LevellingComponent = CallFunc_GetLevellingComponent_LevellingComponent;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Create_ReturnValue_3 = CallFunc_Create_ReturnValue_3;
	Parms.K2Node_Event_PossessedPawn = K2Node_Event_PossessedPawn;
	Parms.CallFunc_AsyncLoadActors_ReturnValue = CallFunc_AsyncLoadActors_ReturnValue;
	Parms.K2Node_Event_CameraShake = K2Node_Event_CameraShake;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_Shake = K2Node_CustomEvent_Shake;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_StoreStats_ReturnValue = CallFunc_StoreStats_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_Character = K2Node_DynamicCast_AsBP_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SetAchievement_ReturnValue = CallFunc_SetAchievement_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CustomEvent_NewValue_2 = K2Node_CustomEvent_NewValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_NewValue_1 = K2Node_CustomEvent_NewValue_1;
	Parms.K2Node_CustomEvent_NewValue = K2Node_CustomEvent_NewValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_GetSlotInfoSaveGame_SaveGameName = CallFunc_GetSlotInfoSaveGame_SaveGameName;
	Parms.CallFunc_GetSlotInfoSaveGame_ReturnValue = CallFunc_GetSlotInfoSaveGame_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetCustomSave_ReturnValue_2 = CallFunc_GetCustomSave_ReturnValue_2;
	Parms.CallFunc_GetSlotInfoSaveGame_SaveGameName_1 = CallFunc_GetSlotInfoSaveGame_SaveGameName_1;
	Parms.CallFunc_GetSlotInfoSaveGame_ReturnValue_1 = CallFunc_GetSlotInfoSaveGame_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Save_ReturnValue = CallFunc_Save_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_4 = CallFunc_Create_ReturnValue_4;
	Parms.CallFunc_K2_GetPawn_ReturnValue_1 = CallFunc_K2_GetPawn_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Player_Character_1 = K2Node_DynamicCast_AsBP_Player_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_InputKeyEvent_Key = K2Node_InputKeyEvent_Key;
	Parms.CallFunc_GetKeyGroupStatic_ReturnValue = CallFunc_GetKeyGroupStatic_ReturnValue;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_GetBoolCVar_ReturnValue_2 = CallFunc_GetBoolCVar_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetDeprecatedInputPitchScale_NewValue_ImplicitCast = CallFunc_SetDeprecatedInputPitchScale_NewValue_ImplicitCast;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


