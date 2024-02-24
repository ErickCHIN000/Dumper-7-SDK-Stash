#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass YourHUD.YourHUD_C
// (Actor)

class UClass* AYourHUD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("YourHUD_C");

	return Clss;
}


// YourHUD_C YourHUD.Default__YourHUD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AYourHUD_C* AYourHUD_C::GetDefaultObj()
{
	static class AYourHUD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AYourHUD_C*>(AYourHUD_C::StaticClass()->DefaultObject);

	return Default;
}


// Function YourHUD.YourHUD_C.SimpleCrosshair
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              X                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Y                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Blueprint_GetSizeY_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Blueprint_GetSizeX_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AYourHUD_C::SimpleCrosshair(int32 X, int32 Y, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue_1, const struct FLinearColor& K2Node_MakeStruct_LinearColor, int32 CallFunc_Blueprint_GetSizeY_ReturnValue, int32 CallFunc_Blueprint_GetSizeX_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 CallFunc_Divide_IntInt_ReturnValue_2, int32 CallFunc_Divide_IntInt_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("YourHUD_C", "SimpleCrosshair");

	Params::AYourHUD_C_SimpleCrosshair_Params Parms{};

	Parms.X = X;
	Parms.Y = Y;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue_1 = CallFunc_Divide_IntInt_ReturnValue_1;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.CallFunc_Blueprint_GetSizeY_ReturnValue = CallFunc_Blueprint_GetSizeY_ReturnValue;
	Parms.CallFunc_Blueprint_GetSizeX_ReturnValue = CallFunc_Blueprint_GetSizeX_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Divide_IntInt_ReturnValue_2 = CallFunc_Divide_IntInt_ReturnValue_2;
	Parms.CallFunc_Divide_IntInt_ReturnValue_3 = CallFunc_Divide_IntInt_ReturnValue_3;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_3 = CallFunc_Conv_IntToFloat_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function YourHUD.YourHUD_C.FadeInHud
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NoHideNotifies                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AYourHUD_C::FadeInHud(bool NoHideNotifies)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("YourHUD_C", "FadeInHud");

	Params::AYourHUD_C_FadeInHud_Params Parms{};

	Parms.NoHideNotifies = NoHideNotifies;

	UObject::ProcessEvent(Func, &Parms);

}


// Function YourHUD.YourHUD_C.FadeOutHud
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NoHideNotifies                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AYourHUD_C::FadeOutHud(bool NoHideNotifies)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("YourHUD_C", "FadeOutHud");

	Params::AYourHUD_C_FadeOutHud_Params Parms{};

	Parms.NoHideNotifies = NoHideNotifies;

	UObject::ProcessEvent(Func, &Parms);

}


// Function YourHUD.YourHUD_C.ShowBossHealt Bar
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AYourHUD_C::ShowBossHealt_Bar()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("YourHUD_C", "ShowBossHealt Bar");



	UObject::ProcessEvent(Func, nullptr);

}


// Function YourHUD.YourHUD_C.HideBossHealthBar
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AYourHUD_C::HideBossHealthBar()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("YourHUD_C", "HideBossHealthBar");



	UObject::ProcessEvent(Func, nullptr);

}


// Function YourHUD.YourHUD_C.ShowFancyNotificationWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AYourHUD_C::ShowFancyNotificationWidget(class FName RowName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("YourHUD_C", "ShowFancyNotificationWidget");

	Params::AYourHUD_C_ShowFancyNotificationWidget_Params Parms{};

	Parms.RowName = RowName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function YourHUD.YourHUD_C.Show Center Notificiation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDHCenterNotification       NotificationData                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void AYourHUD_C::Show_Center_Notificiation(const struct FDHCenterNotification& NotificationData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("YourHUD_C", "Show Center Notificiation");

	Params::AYourHUD_C_Show_Center_Notificiation_Params Parms{};

	Parms.NotificationData = NotificationData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function YourHUD.YourHUD_C.SetHudVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bShowHUD                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bImmediate                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               NoHideNotifies                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AYourHUD_C::SetHudVisibility(bool bShowHUD, bool bImmediate, bool NoHideNotifies)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("YourHUD_C", "SetHudVisibility");

	Params::AYourHUD_C_SetHudVisibility_Params Parms{};

	Parms.bShowHUD = bShowHUD;
	Parms.bImmediate = bImmediate;
	Parms.NoHideNotifies = NoHideNotifies;

	UObject::ProcessEvent(Func, &Parms);

}


// Function YourHUD.YourHUD_C.SkipCutscene_Show
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Cutscene_SkipType  SkipType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AYourHUD_C::SkipCutscene_Show(enum class Enum_Cutscene_SkipType SkipType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("YourHUD_C", "SkipCutscene_Show");

	Params::AYourHUD_C_SkipCutscene_Show_Params Parms{};

	Parms.SkipType = SkipType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function YourHUD.YourHUD_C.SkipCutscene_Hide
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AYourHUD_C::SkipCutscene_Hide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("YourHUD_C", "SkipCutscene_Hide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function YourHUD.YourHUD_C.SkipCutscene_CreateWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AYourHUD_C::SkipCutscene_CreateWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("YourHUD_C", "SkipCutscene_CreateWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function YourHUD.YourHUD_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AYourHUD_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("YourHUD_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function YourHUD.YourHUD_C.ReceiveDrawHUD
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// int32                              SizeX                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SizeY                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AYourHUD_C::ReceiveDrawHUD(int32 SizeX, int32 SizeY)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("YourHUD_C", "ReceiveDrawHUD");

	Params::AYourHUD_C_ReceiveDrawHUD_Params Parms{};

	Parms.SizeX = SizeX;
	Parms.SizeY = SizeY;

	UObject::ProcessEvent(Func, &Parms);

}


// Function YourHUD.YourHUD_C.OnRiposteWindowExpired_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AYourHUD_C::OnRiposteWindowExpired_Event_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("YourHUD_C", "OnRiposteWindowExpired_Event_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function YourHUD.YourHUD_C.OnRipostePossible_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimerHandle                RiposteWindowExpirationTimer                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            ParriedEnemy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AYourHUD_C::OnRipostePossible_Event_0(const struct FTimerHandle& RiposteWindowExpirationTimer, class ABaseCharacter_C* ParriedEnemy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("YourHUD_C", "OnRipostePossible_Event_0");

	Params::AYourHUD_C_OnRipostePossible_Event_0_Params Parms{};

	Parms.RiposteWindowExpirationTimer = RiposteWindowExpirationTimer;
	Parms.ParriedEnemy = ParriedEnemy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function YourHUD.YourHUD_C.ExecuteUbergraph_YourHUD
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_NoHideNotifies_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_NoHideNotifies_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_RowName                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkipCutscene_C*             CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUpgradeDisplayInfo         CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetCameraLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDHCenterNotification       K2Node_CustomEvent_NotificationData                              (None)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bShowHUD                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bImmediate                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_NoHideNotifies                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_FancyNotification_C*     CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Cutscene_SkipType  K2Node_CustomEvent_SkipType                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInViewport_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInViewport_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_SizeX                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_SizeY                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayerController_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNewHUDLayout_C*             CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                K2Node_CustomEvent_RiposteWindowExpirationTimer                  (NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            K2Node_CustomEvent_ParriedEnemy                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayerController_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URiposteWIndowIndicator_C*   CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)

void AYourHUD_C::ExecuteUbergraph_YourHUD(int32 EntryPoint, bool K2Node_CustomEvent_NoHideNotifies_1, bool K2Node_CustomEvent_NoHideNotifies_2, class FName K2Node_CustomEvent_RowName, class USkipCutscene_C* CallFunc_Create_ReturnValue, const struct FUpgradeDisplayInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FDHCenterNotification& K2Node_CustomEvent_NotificationData, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool K2Node_CustomEvent_bShowHUD, bool K2Node_CustomEvent_bImmediate, bool K2Node_CustomEvent_NoHideNotifies, class ABP_FancyNotification_C* CallFunc_FinishSpawningActor_ReturnValue, enum class Enum_Cutscene_SkipType K2Node_CustomEvent_SkipType, bool CallFunc_IsInViewport_ReturnValue, bool CallFunc_IsInViewport_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, int32 K2Node_Event_SizeX, int32 K2Node_Event_SizeY, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC_1, bool K2Node_DynamicCast_bSuccess_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UNewHUDLayout_C* CallFunc_Create_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct FTimerHandle& K2Node_CustomEvent_RiposteWindowExpirationTimer, class ABaseCharacter_C* K2Node_CustomEvent_ParriedEnemy, class APlayerController* CallFunc_GetOwningPlayerController_ReturnValue_2, class URiposteWIndowIndicator_C* CallFunc_Create_ReturnValue_2, class APawn* CallFunc_GetOwningPawn_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("YourHUD_C", "ExecuteUbergraph_YourHUD");

	Params::AYourHUD_C_ExecuteUbergraph_YourHUD_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NoHideNotifies_1 = K2Node_CustomEvent_NoHideNotifies_1;
	Parms.K2Node_CustomEvent_NoHideNotifies_2 = K2Node_CustomEvent_NoHideNotifies_2;
	Parms.K2Node_CustomEvent_RowName = K2Node_CustomEvent_RowName;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_GetCameraLocation_ReturnValue = CallFunc_GetCameraLocation_ReturnValue;
	Parms.K2Node_CustomEvent_NotificationData = K2Node_CustomEvent_NotificationData;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.K2Node_CustomEvent_bShowHUD = K2Node_CustomEvent_bShowHUD;
	Parms.K2Node_CustomEvent_bImmediate = K2Node_CustomEvent_bImmediate;
	Parms.K2Node_CustomEvent_NoHideNotifies = K2Node_CustomEvent_NoHideNotifies;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_CustomEvent_SkipType = K2Node_CustomEvent_SkipType;
	Parms.CallFunc_IsInViewport_ReturnValue = CallFunc_IsInViewport_ReturnValue;
	Parms.CallFunc_IsInViewport_ReturnValue_1 = CallFunc_IsInViewport_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_PC = K2Node_DynamicCast_AsGameplay_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_SizeX = K2Node_Event_SizeX;
	Parms.K2Node_Event_SizeY = K2Node_Event_SizeY;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_1 = CallFunc_GetOwningPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGameplay_PC_1 = K2Node_DynamicCast_AsGameplay_PC_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_RiposteWindowExpirationTimer = K2Node_CustomEvent_RiposteWindowExpirationTimer;
	Parms.K2Node_CustomEvent_ParriedEnemy = K2Node_CustomEvent_ParriedEnemy;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_2 = CallFunc_GetOwningPlayerController_ReturnValue_2;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_GetOwningPawn_ReturnValue = CallFunc_GetOwningPawn_ReturnValue;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function YourHUD.YourHUD_C.OnHudVisibilityChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bHudVisible                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AYourHUD_C::OnHudVisibilityChanged__DelegateSignature(bool bHudVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("YourHUD_C", "OnHudVisibilityChanged__DelegateSignature");

	Params::AYourHUD_C_OnHudVisibilityChanged__DelegateSignature_Params Parms{};

	Parms.bHudVisible = bHudVisible;

	UObject::ProcessEvent(Func, &Parms);

}

}


