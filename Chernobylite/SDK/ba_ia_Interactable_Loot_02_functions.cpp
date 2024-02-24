#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_ia_Interactable_Loot_02.ba_ia_Interactable_Loot_02_C
// (Actor)

class UClass* Aba_ia_Interactable_Loot_02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_ia_Interactable_Loot_02_C");

	return Clss;
}


// ba_ia_Interactable_Loot_02_C ba_ia_Interactable_Loot_02.Default__ba_ia_Interactable_Loot_02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_ia_Interactable_Loot_02_C* Aba_ia_Interactable_Loot_02_C::GetDefaultObj()
{
	static class Aba_ia_Interactable_Loot_02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_ia_Interactable_Loot_02_C*>(Aba_ia_Interactable_Loot_02_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ba_ia_Interactable_Loot_02.ba_ia_Interactable_Loot_02_C.InternalShowNearInteractIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_ia_Interactable_Loot_02_C::InternalShowNearInteractIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_Interactable_Loot_02_C", "InternalShowNearInteractIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ia_Interactable_Loot_02.ba_ia_Interactable_Loot_02_C.InternalShowInteractIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_ia_Interactable_Loot_02_C::InternalShowInteractIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_Interactable_Loot_02_C", "InternalShowInteractIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ia_Interactable_Loot_02.ba_ia_Interactable_Loot_02_C.InternalHideInteractIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_ia_Interactable_Loot_02_C::InternalHideInteractIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_Interactable_Loot_02_C", "InternalHideInteractIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ia_Interactable_Loot_02.ba_ia_Interactable_Loot_02_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_ia_Interactable_Loot_02_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_Interactable_Loot_02_C", "ReceiveTick");

	Params::Aba_ia_Interactable_Loot_02_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ia_Interactable_Loot_02.ba_ia_Interactable_Loot_02_C.BindMenuToggled
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_ia_Interactable_Loot_02_C::BindMenuToggled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_Interactable_Loot_02_C", "BindMenuToggled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ia_Interactable_Loot_02.ba_ia_Interactable_Loot_02_C.UnbindMenuToggled
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Aba_ia_Interactable_Loot_02_C::UnbindMenuToggled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_Interactable_Loot_02_C", "UnbindMenuToggled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ba_ia_Interactable_Loot_02.ba_ia_Interactable_Loot_02_C.MenuToggled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPaused                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_ia_Interactable_Loot_02_C::MenuToggled(bool IsPaused)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_Interactable_Loot_02_C", "MenuToggled");

	Params::Aba_ia_Interactable_Loot_02_C_MenuToggled_Params Parms{};

	Parms.IsPaused = IsPaused;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_ia_Interactable_Loot_02.ba_ia_Interactable_Loot_02_C.ExecuteUbergraph_ba_ia_Interactable_Loot_02
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Loot_Main_C*            CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector2D_X_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGAICharacter*              K2Node_DynamicCast_AsCGAICharacter                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FInventoryEntry>     CallFunc_GetItems_ReturnValue                                    (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGAICharacter*              K2Node_DynamicCast_AsCGAICharacter_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsPaused                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_ia_Interactable_Loot_02_C::ExecuteUbergraph_ba_ia_Interactable_Loot_02(int32 EntryPoint, class UWid_Loot_Main_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_DeltaSeconds, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, const struct FVector2D& CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition, bool CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, float CallFunc_FClamp_ReturnValue, float CallFunc_FClamp_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter, bool K2Node_DynamicCast_bSuccess, TArray<struct FInventoryEntry>& CallFunc_GetItems_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter_1, bool K2Node_DynamicCast_bSuccess_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool K2Node_CustomEvent_IsPaused, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_ia_Interactable_Loot_02_C", "ExecuteUbergraph_ba_ia_Interactable_Loot_02");

	Params::Aba_ia_Interactable_Loot_02_C_ExecuteUbergraph_ba_ia_Interactable_Loot_02_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetDesiredSize_ReturnValue = CallFunc_GetDesiredSize_ReturnValue;
	Parms.CallFunc_GetViewportSize_ReturnValue = CallFunc_GetViewportSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition = CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition;
	Parms.CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue = CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue;
	Parms.CallFunc_BreakVector2D_X_2 = CallFunc_BreakVector2D_X_2;
	Parms.CallFunc_BreakVector2D_Y_2 = CallFunc_BreakVector2D_Y_2;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsCGAICharacter = K2Node_DynamicCast_AsCGAICharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetItems_ReturnValue = CallFunc_GetItems_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsCGAICharacter_1 = K2Node_DynamicCast_AsCGAICharacter_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.K2Node_CustomEvent_IsPaused = K2Node_CustomEvent_IsPaused;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


