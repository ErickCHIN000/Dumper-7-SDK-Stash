#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SophiaCharacterController.BP_SophiaCharacterController_C
// (Actor, PlayerController)

class UClass* ABP_SophiaCharacterController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SophiaCharacterController_C");

	return Clss;
}


// BP_SophiaCharacterController_C BP_SophiaCharacterController.Default__BP_SophiaCharacterController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SophiaCharacterController_C* ABP_SophiaCharacterController_C::GetDefaultObj()
{
	static class ABP_SophiaCharacterController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SophiaCharacterController_C*>(ABP_SophiaCharacterController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SophiaCharacterController.BP_SophiaCharacterController_C.InpActEvt_AnyKey_K2Node_InputKeyEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_SophiaCharacterController_C::InpActEvt_AnyKey_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaCharacterController_C", "InpActEvt_AnyKey_K2Node_InputKeyEvent_1");

	Params::ABP_SophiaCharacterController_C_InpActEvt_AnyKey_K2Node_InputKeyEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaCharacterController.BP_SophiaCharacterController_C.InpActEvt_CameraF_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_SophiaCharacterController_C::InpActEvt_CameraF_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaCharacterController_C", "InpActEvt_CameraF_K2Node_InputActionEvent_1");

	Params::ABP_SophiaCharacterController_C_InpActEvt_CameraF_K2Node_InputActionEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaCharacterController.BP_SophiaCharacterController_C.InpActEvt_CameraB_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_SophiaCharacterController_C::InpActEvt_CameraB_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaCharacterController_C", "InpActEvt_CameraB_K2Node_InputActionEvent_0");

	Params::ABP_SophiaCharacterController_C_InpActEvt_CameraB_K2Node_InputActionEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaCharacterController.BP_SophiaCharacterController_C.InpActEvt_Ctrl+Shift_F7_K2Node_InputKeyEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_SophiaCharacterController_C::InpActEvt_CtrlPlusShift_F7_K2Node_InputKeyEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaCharacterController_C", "InpActEvt_Ctrl+Shift_F7_K2Node_InputKeyEvent_0");

	Params::ABP_SophiaCharacterController_C_InpActEvt_CtrlPlusShift_F7_K2Node_InputKeyEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaCharacterController.BP_SophiaCharacterController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SophiaCharacterController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaCharacterController_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaCharacterController.BP_SophiaCharacterController_C.SensitivityChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SophiaCharacterController_C::SensitivityChanged(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaCharacterController_C", "SensitivityChanged");

	Params::ABP_SophiaCharacterController_C_SensitivityChanged_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaCharacterController.BP_SophiaCharacterController_C.BP_KickClient
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsConquest                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SophiaCharacterController_C::BP_KickClient(bool bIsConquest)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaCharacterController_C", "BP_KickClient");

	Params::ABP_SophiaCharacterController_C_BP_KickClient_Params Parms{};

	Parms.bIsConquest = bIsConquest;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaCharacterController.BP_SophiaCharacterController_C.DestroySessionLocal
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UWorld>       Level                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, UObjectWrapper, HasGetValueTypeHash)

void ABP_SophiaCharacterController_C::DestroySessionLocal(TSoftObjectPtr<class UWorld> Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaCharacterController_C", "DestroySessionLocal");

	Params::ABP_SophiaCharacterController_C_DestroySessionLocal_Params Parms{};

	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaCharacterController.BP_SophiaCharacterController_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                       PossessedPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SophiaCharacterController_C::ReceivePossess(class APawn* PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaCharacterController_C", "ReceivePossess");

	Params::ABP_SophiaCharacterController_C_ReceivePossess_Params Parms{};

	Parms.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaCharacterController.BP_SophiaCharacterController_C.BP_OnPartyInvite
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FPartyInvite                Invite                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_SophiaCharacterController_C::BP_OnPartyInvite(const struct FPartyInvite& Invite)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaCharacterController_C", "BP_OnPartyInvite");

	Params::ABP_SophiaCharacterController_C_BP_OnPartyInvite_Params Parms{};

	Parms.Invite = Invite;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaCharacterController.BP_SophiaCharacterController_C.ToggleDebugCamera
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SophiaCharacterController_C::ToggleDebugCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaCharacterController_C", "ToggleDebugCamera");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaCharacterController.BP_SophiaCharacterController_C.BP_ServerFPS
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SophiaCharacterController_C::BP_ServerFPS(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaCharacterController_C", "BP_ServerFPS");

	Params::ABP_SophiaCharacterController_C_BP_ServerFPS_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaCharacterController.BP_SophiaCharacterController_C.BP_RemovePartyInvite
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_SophiaCharacterController_C::BP_RemovePartyInvite()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaCharacterController_C", "BP_RemovePartyInvite");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SophiaCharacterController.BP_SophiaCharacterController_C.ExecuteUbergraph_BP_SophiaCharacterController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key_1                                       (HasGetValueTypeHash)
// struct FKey                        K2Node_InputKeyEvent_Key                                         (HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetKeyGroupStatic_ReturnValue                           (NoDestructor, HasGetValueTypeHash)
// class UGISSteam*                   CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_NewValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsConquest                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UWorld>       K2Node_CustomEvent_Level                                         (ConstParm, UObjectWrapper, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_PossessedPawn                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFirstPersonCharacter_C*     K2Node_DynamicCast_AsFirst_Person_Character                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFirstPersonCharacter_C*     K2Node_DynamicCast_AsFirst_Person_Character_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFirstPersonCharacter_C*     K2Node_DynamicCast_AsFirst_Person_Character_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPartyInvite                K2Node_Event_Invite                                              (None)
// class USophiaGameInstance*         K2Node_DynamicCast_AsSophia_Game_Instance                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWBP_ReceivePartyInvite_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key                                      (HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_Index                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASophiaCharacter*            K2Node_DynamicCast_AsSophia_Character                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_SophiaHUD_C*             K2Node_DynamicCast_AsBP_Sophia_HUD                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AHUD*                        CallFunc_GetHUD_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASophiaHUD*                  K2Node_DynamicCast_AsSophia_HUD                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USophiaGameInstance*         K2Node_DynamicCast_AsSophia_Game_Instance_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_1                                    (HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SophiaSplashMenuGameMode_C*K2Node_DynamicCast_AsBP_Sophia_Splash_Menu_Game_Mode             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_DeluxeItemClaimed_C*    CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SophiaCharacterController_C::ExecuteUbergraph_BP_SophiaCharacterController(int32 EntryPoint, const struct FKey& K2Node_InputKeyEvent_Key_1, const struct FKey& K2Node_InputKeyEvent_Key, const struct FGameplayTag& CallFunc_GetKeyGroupStatic_ReturnValue, class UGISSteam* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_IsClosed_Variable, float K2Node_CustomEvent_NewValue, bool K2Node_Event_bIsConquest, TSoftObjectPtr<class UWorld> K2Node_CustomEvent_Level, class APawn* K2Node_Event_PossessedPawn, class AFirstPersonCharacter_C* K2Node_DynamicCast_AsFirst_Person_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, class AFirstPersonCharacter_C* K2Node_DynamicCast_AsFirst_Person_Character_1, bool K2Node_DynamicCast_bSuccess_1, class AFirstPersonCharacter_C* K2Node_DynamicCast_AsFirst_Person_Character_2, bool K2Node_DynamicCast_bSuccess_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, const struct FPartyInvite& K2Node_Event_Invite, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance, bool K2Node_DynamicCast_bSuccess_3, class UWBP_ReceivePartyInvite_C* CallFunc_Create_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key, bool Temp_bool_Has_Been_Initd_Variable, int32 K2Node_Event_Index, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, class ASophiaCharacter* K2Node_DynamicCast_AsSophia_Character, bool K2Node_DynamicCast_bSuccess_4, class ABP_SophiaHUD_C* K2Node_DynamicCast_AsBP_Sophia_HUD, bool K2Node_DynamicCast_bSuccess_5, class AHUD* CallFunc_GetHUD_ReturnValue, class ASophiaHUD* K2Node_DynamicCast_AsSophia_HUD, bool K2Node_DynamicCast_bSuccess_6, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class USophiaGameInstance* K2Node_DynamicCast_AsSophia_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_7, const struct FKey& K2Node_InputActionEvent_Key_1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class ABP_SophiaSplashMenuGameMode_C* K2Node_DynamicCast_AsBP_Sophia_Splash_Menu_Game_Mode, bool K2Node_DynamicCast_bSuccess_8, float CallFunc_Multiply_FloatFloat_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWBP_DeluxeItemClaimed_C* CallFunc_Create_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaCharacterController_C", "ExecuteUbergraph_BP_SophiaCharacterController");

	Params::ABP_SophiaCharacterController_C_ExecuteUbergraph_BP_SophiaCharacterController_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_InputKeyEvent_Key_1 = K2Node_InputKeyEvent_Key_1;
	Parms.K2Node_InputKeyEvent_Key = K2Node_InputKeyEvent_Key;
	Parms.CallFunc_GetKeyGroupStatic_ReturnValue = CallFunc_GetKeyGroupStatic_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_CustomEvent_NewValue = K2Node_CustomEvent_NewValue;
	Parms.K2Node_Event_bIsConquest = K2Node_Event_bIsConquest;
	Parms.K2Node_CustomEvent_Level = K2Node_CustomEvent_Level;
	Parms.K2Node_Event_PossessedPawn = K2Node_Event_PossessedPawn;
	Parms.K2Node_DynamicCast_AsFirst_Person_Character = K2Node_DynamicCast_AsFirst_Person_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_1 = CallFunc_GetPlayerCharacter_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFirst_Person_Character_1 = K2Node_DynamicCast_AsFirst_Person_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsFirst_Person_Character_2 = K2Node_DynamicCast_AsFirst_Person_Character_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_Event_Invite = K2Node_Event_Invite;
	Parms.K2Node_DynamicCast_AsSophia_Game_Instance = K2Node_DynamicCast_AsSophia_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_InputActionEvent_Key = K2Node_InputActionEvent_Key;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_Event_Index = K2Node_Event_Index;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_2 = CallFunc_GetPlayerCharacter_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsSophia_Character = K2Node_DynamicCast_AsSophia_Character;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsBP_Sophia_HUD = K2Node_DynamicCast_AsBP_Sophia_HUD;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetHUD_ReturnValue = CallFunc_GetHUD_ReturnValue;
	Parms.K2Node_DynamicCast_AsSophia_HUD = K2Node_DynamicCast_AsSophia_HUD;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsSophia_Game_Instance_1 = K2Node_DynamicCast_AsSophia_Game_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.K2Node_InputActionEvent_Key_1 = K2Node_InputActionEvent_Key_1;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Sophia_Splash_Menu_Game_Mode = K2Node_DynamicCast_AsBP_Sophia_Splash_Menu_Game_Mode;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SophiaCharacterController.BP_SophiaCharacterController_C.OnToggleCharacterCustomization__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Open                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SophiaCharacterController_C::OnToggleCharacterCustomization__DelegateSignature(bool Open)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SophiaCharacterController_C", "OnToggleCharacterCustomization__DelegateSignature");

	Params::ABP_SophiaCharacterController_C_OnToggleCharacterCustomization__DelegateSignature_Params Parms{};

	Parms.Open = Open;

	UObject::ProcessEvent(Func, &Parms);

}

}


