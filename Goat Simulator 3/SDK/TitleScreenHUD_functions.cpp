#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TitleScreenHUD.TitleScreenHUD_C
// (None)

class UClass* UTitleScreenHUD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TitleScreenHUD_C");

	return Clss;
}


// TitleScreenHUD_C TitleScreenHUD.Default__TitleScreenHUD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTitleScreenHUD_C* UTitleScreenHUD_C::GetDefaultObj()
{
	static class UTitleScreenHUD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTitleScreenHUD_C*>(UTitleScreenHUD_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TitleScreenHUD.TitleScreenHUD_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// class AGGPlayerController*         CallFunc_GetPrimaryGGPlayerController_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MenuPlayerController_C*  K2Node_DynamicCast_AsBP_Menu_Player_Controller                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECastResult             CallFunc_GetActiveMenuWidgetCast_Result                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGMenuUserWidget*           CallFunc_GetActiveMenuWidgetCast_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_SetUserFocus_ReturnValue                                (None)

struct FEventReply UTitleScreenHUD_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, class AGGPlayerController* CallFunc_GetPrimaryGGPlayerController_ReturnValue, class ABP_MenuPlayerController_C* K2Node_DynamicCast_AsBP_Menu_Player_Controller, bool K2Node_DynamicCast_bSuccess, enum class ECastResult CallFunc_GetActiveMenuWidgetCast_Result, class UGGMenuUserWidget* CallFunc_GetActiveMenuWidgetCast_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreenHUD_C", "OnFocusReceived");

	Params::UTitleScreenHUD_C_OnFocusReceived_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_GetPrimaryGGPlayerController_ReturnValue = CallFunc_GetPrimaryGGPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Menu_Player_Controller = K2Node_DynamicCast_AsBP_Menu_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetActiveMenuWidgetCast_Result = CallFunc_GetActiveMenuWidgetCast_Result;
	Parms.CallFunc_GetActiveMenuWidgetCast_ReturnValue = CallFunc_GetActiveMenuWidgetCast_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_SetUserFocus_ReturnValue = CallFunc_SetUserFocus_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TitleScreenHUD.TitleScreenHUD_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTitleScreenHUD_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreenHUD_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleScreenHUD.TitleScreenHUD_C.UpdatePositions
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleScreenHUD_C::UpdatePositions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreenHUD_C", "UpdatePositions");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleScreenHUD.TitleScreenHUD_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleScreenHUD_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreenHUD_C", "CustomEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleScreenHUD.TitleScreenHUD_C.RefreshPartyPointInviteWidgets
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTitleScreenHUD_C::RefreshPartyPointInviteWidgets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreenHUD_C", "RefreshPartyPointInviteWidgets");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TitleScreenHUD.TitleScreenHUD_C.OnMenuClosed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                InMenuTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FMenuNavigationContext      Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UTitleScreenHUD_C::OnMenuClosed(const struct FGameplayTag& InMenuTag, const struct FMenuNavigationContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreenHUD_C", "OnMenuClosed");

	Params::UTitleScreenHUD_C_OnMenuClosed_Params Parms{};

	Parms.InMenuTag = InMenuTag;
	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleScreenHUD.TitleScreenHUD_C.OnMenuOpened
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                InMenuTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FMenuNavigationContext      Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UTitleScreenHUD_C::OnMenuOpened(const struct FGameplayTag& InMenuTag, const struct FMenuNavigationContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreenHUD_C", "OnMenuOpened");

	Params::UTitleScreenHUD_C_OnMenuOpened_Params Parms{};

	Parms.InMenuTag = InMenuTag;
	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleScreenHUD.TitleScreenHUD_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTitleScreenHUD_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreenHUD_C", "PreConstruct");

	Params::UTitleScreenHUD_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TitleScreenHUD.TitleScreenHUD_C.ExecuteUbergraph_TitleScreenHUD
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerInviteWidget_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_CinematicGoat_C*> CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AGGGoat*>             CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// class AGGGoat*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AGGPartyMemberSpawnPoint*>CallFunc_GetAllActorsOfClass_OutActors_1                         (ReferenceParm)
// class AGGPartyMemberSpawnPoint*    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetInviteButtonLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_ProjectWorldToScreen_ScreenPosition                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ProjectWorldToScreen_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AGGPartyMemberSpawnPoint*>CallFunc_Map_Keys_Keys_1                                         (ReferenceParm)
// float                              CallFunc_GetViewportScale_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPartyMemberSpawnPoint*    CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Divide_Vector2DFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsClaimed_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetInviteButtonLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_ProjectWorldToScreen_ScreenPosition_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ProjectWorldToScreen_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_Map_Find_Value_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetViewportScale_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (NoDestructor)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Divide_Vector2DFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Length_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CinematicGoat_C*         CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMainMenuStartingLevel_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_CinematicGoat_C*         CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGPlayerController*         CallFunc_GetGGPlayerController_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTrackerGoatWidget_C*        CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_InMenuTag_1                                   (NoDestructor, HasGetValueTypeHash)
// struct FMenuNavigationContext      K2Node_CustomEvent_Context_1                                     (None)
// class AGGPlayerController*         K2Node_DynamicCast_AsGGPlayer_Controller                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                K2Node_CustomEvent_InMenuTag                                     (NoDestructor, HasGetValueTypeHash)
// struct FMenuNavigationContext      K2Node_CustomEvent_Context                                       (None)
// bool                               CallFunc_HasBlockingChildMenuOpened_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         K2Node_DynamicCast_AsGGPlayer_Controller_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECastResult             CallFunc_GetActiveMenuWidgetCast_Result                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGMenuUserWidget*           CallFunc_GetActiveMenuWidgetCast_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobilePlatform_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTitleScreenHUD_C::ExecuteUbergraph_TitleScreenHUD(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class UPlayerInviteWidget_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class ABP_CinematicGoat_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, TArray<class AGGGoat*>& CallFunc_Map_Keys_Keys, class AGGGoat* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_2, class UUserWidget* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, TArray<class AGGPartyMemberSpawnPoint*>& CallFunc_GetAllActorsOfClass_OutActors_1, class AGGPartyMemberSpawnPoint* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_3, const struct FVector& CallFunc_GetInviteButtonLocation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FVector2D& CallFunc_ProjectWorldToScreen_ScreenPosition, bool CallFunc_ProjectWorldToScreen_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, TArray<class AGGPartyMemberSpawnPoint*>& CallFunc_Map_Keys_Keys_1, float CallFunc_GetViewportScale_ReturnValue, class AGGPartyMemberSpawnPoint* CallFunc_Array_Get_Item_2, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue, bool CallFunc_IsClaimed_ReturnValue, const struct FVector& CallFunc_GetInviteButtonLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct FVector2D& CallFunc_ProjectWorldToScreen_ScreenPosition_1, bool CallFunc_ProjectWorldToScreen_ReturnValue_1, class UUserWidget* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, float CallFunc_GetViewportScale_ReturnValue_1, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue_1, int32 CallFunc_Map_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_3, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class ESlateVisibility Temp_byte_Variable_2, class ABP_CinematicGoat_C* CallFunc_GetActorOfClass_ReturnValue, int32 Temp_int_Array_Index_Variable_3, bool CallFunc_IsMainMenuStartingLevel_ReturnValue, class ABP_CinematicGoat_C* CallFunc_Array_Get_Item_3, bool CallFunc_BooleanOR_ReturnValue, class AGGPlayerController* CallFunc_GetGGPlayerController_ReturnValue, class UTrackerGoatWidget_C* CallFunc_Create_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, const struct FGameplayTag& K2Node_CustomEvent_InMenuTag_1, const struct FMenuNavigationContext& K2Node_CustomEvent_Context_1, class AGGPlayerController* K2Node_DynamicCast_AsGGPlayer_Controller, bool K2Node_DynamicCast_bSuccess_1, const struct FGameplayTag& K2Node_CustomEvent_InMenuTag, const struct FMenuNavigationContext& K2Node_CustomEvent_Context, bool CallFunc_HasBlockingChildMenuOpened_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default, bool Temp_bool_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, enum class ESlateVisibility K2Node_Select_Default_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, class AGGPlayerController* K2Node_DynamicCast_AsGGPlayer_Controller_1, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_Event_IsDesignTime, enum class ECastResult CallFunc_GetActiveMenuWidgetCast_Result, class UGGMenuUserWidget* CallFunc_GetActiveMenuWidgetCast_ReturnValue, bool CallFunc_IsMobilePlatform_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TitleScreenHUD_C", "ExecuteUbergraph_TitleScreenHUD");

	Params::UTitleScreenHUD_C_ExecuteUbergraph_TitleScreenHUD_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_1 = CallFunc_GetAllActorsOfClass_OutActors_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_GetInviteButtonLocation_ReturnValue = CallFunc_GetInviteButtonLocation_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_ProjectWorldToScreen_ScreenPosition = CallFunc_ProjectWorldToScreen_ScreenPosition;
	Parms.CallFunc_ProjectWorldToScreen_ReturnValue = CallFunc_ProjectWorldToScreen_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot = K2Node_DynamicCast_AsCanvas_Panel_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.CallFunc_Map_Keys_Keys_1 = CallFunc_Map_Keys_Keys_1;
	Parms.CallFunc_GetViewportScale_ReturnValue = CallFunc_GetViewportScale_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Divide_Vector2DFloat_ReturnValue = CallFunc_Divide_Vector2DFloat_ReturnValue;
	Parms.CallFunc_IsClaimed_ReturnValue = CallFunc_IsClaimed_ReturnValue;
	Parms.CallFunc_GetInviteButtonLocation_ReturnValue_1 = CallFunc_GetInviteButtonLocation_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_ProjectWorldToScreen_ScreenPosition_1 = CallFunc_ProjectWorldToScreen_ScreenPosition_1;
	Parms.CallFunc_ProjectWorldToScreen_ReturnValue_1 = CallFunc_ProjectWorldToScreen_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_GetViewportSize_ReturnValue = CallFunc_GetViewportSize_ReturnValue;
	Parms.CallFunc_GetViewportScale_ReturnValue_1 = CallFunc_GetViewportScale_ReturnValue_1;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue = CallFunc_Multiply_Vector2DFloat_ReturnValue;
	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue = CallFunc_Subtract_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Divide_Vector2DFloat_ReturnValue_1 = CallFunc_Divide_Vector2DFloat_ReturnValue_1;
	Parms.CallFunc_Map_Length_ReturnValue = CallFunc_Map_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_IsMainMenuStartingLevel_ReturnValue = CallFunc_IsMainMenuStartingLevel_ReturnValue;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetGGPlayerController_ReturnValue = CallFunc_GetGGPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_AddChild_ReturnValue_1 = CallFunc_AddChild_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_2 = CallFunc_GetOwningPlayer_ReturnValue_2;
	Parms.K2Node_CustomEvent_InMenuTag_1 = K2Node_CustomEvent_InMenuTag_1;
	Parms.K2Node_CustomEvent_Context_1 = K2Node_CustomEvent_Context_1;
	Parms.K2Node_DynamicCast_AsGGPlayer_Controller = K2Node_DynamicCast_AsGGPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CustomEvent_InMenuTag = K2Node_CustomEvent_InMenuTag;
	Parms.K2Node_CustomEvent_Context = K2Node_CustomEvent_Context;
	Parms.CallFunc_HasBlockingChildMenuOpened_ReturnValue = CallFunc_HasBlockingChildMenuOpened_ReturnValue;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_3 = CallFunc_GetOwningPlayer_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsGGPlayer_Controller_1 = K2Node_DynamicCast_AsGGPlayer_Controller_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetActiveMenuWidgetCast_Result = CallFunc_GetActiveMenuWidgetCast_Result;
	Parms.CallFunc_GetActiveMenuWidgetCast_ReturnValue = CallFunc_GetActiveMenuWidgetCast_ReturnValue;
	Parms.CallFunc_IsMobilePlatform_ReturnValue = CallFunc_IsMobilePlatform_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


