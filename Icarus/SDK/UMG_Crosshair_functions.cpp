#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_Crosshair.UMG_Crosshair_C
// (None)

class UClass* UUMG_Crosshair_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_Crosshair_C");

	return Clss;
}


// UMG_Crosshair_C UMG_Crosshair.Default__UMG_Crosshair_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_Crosshair_C* UUMG_Crosshair_C::GetDefaultObj()
{
	static class UUMG_Crosshair_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_Crosshair_C*>(UUMG_Crosshair_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_Crosshair.UMG_Crosshair_C.GetCrosshairVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBP_CrosshairInterface_C>K2Node_DynamicCast_AsBP_Crosshair_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBP_CrosshairInterface_C>K2Node_DynamicCast_AsBP_Crosshair_Interface_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_WantsShowCrosshair_bShowCrosshair                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_WantsShowCrosshair_bShowCrosshair_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsThirdPerson_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UUMG_Crosshair_C::GetCrosshairVisibility(TScriptInterface<class IBP_CrosshairInterface_C> K2Node_DynamicCast_AsBP_Crosshair_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBP_CrosshairInterface_C> K2Node_DynamicCast_AsBP_Crosshair_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_WantsShowCrosshair_bShowCrosshair, bool CallFunc_WantsShowCrosshair_bShowCrosshair_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool CallFunc_GetIsThirdPerson_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Crosshair_C", "GetCrosshairVisibility");

	Params::UUMG_Crosshair_C_GetCrosshairVisibility_Params Parms{};

	Parms.K2Node_DynamicCast_AsBP_Crosshair_Interface = K2Node_DynamicCast_AsBP_Crosshair_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Crosshair_Interface_1 = K2Node_DynamicCast_AsBP_Crosshair_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_WantsShowCrosshair_bShowCrosshair = CallFunc_WantsShowCrosshair_bShowCrosshair;
	Parms.CallFunc_WantsShowCrosshair_bShowCrosshair_1 = CallFunc_WantsShowCrosshair_bShowCrosshair_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_GetIsThirdPerson_ReturnValue = CallFunc_GetIsThirdPerson_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_Crosshair.UMG_Crosshair_C.ToggleBowMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               On                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Crosshair_C::ToggleBowMode(bool On, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Crosshair_C", "ToggleBowMode");

	Params::UUMG_Crosshair_C_ToggleBowMode_Params Parms{};

	Parms.On = On;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Crosshair.UMG_Crosshair_C.UpdateBowMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBP_CrosshairInterface_C>K2Node_DynamicCast_AsBP_Crosshair_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_WantsBowMode_bWantsBowMode                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBP_CrosshairInterface_C>K2Node_DynamicCast_AsBP_Crosshair_Interface_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCrosshairAimAlpha_AimAlpha                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetCrosshairVisibility_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerCharacter_IsValid                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerCharacterSurvival*K2Node_DynamicCast_AsIcarus_Player_Character_Survival            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusItem*                 CallFunc_GetFocusedItem_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UActorComponent*>     CallFunc_GetComponentsByInterface_ReturnValue                    (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UActorComponent*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Crosshair_C::UpdateBowMode(TScriptInterface<class IBP_CrosshairInterface_C> K2Node_DynamicCast_AsBP_Crosshair_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_WantsBowMode_bWantsBowMode, TScriptInterface<class IBP_CrosshairInterface_C> K2Node_DynamicCast_AsBP_Crosshair_Interface_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetCrosshairAimAlpha_AimAlpha, bool CallFunc_GetCrosshairVisibility_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AIcarusPlayerCharacterSurvival* K2Node_DynamicCast_AsIcarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess_2, class AIcarusItem* CallFunc_GetFocusedItem_ReturnValue, TArray<class UActorComponent*>& CallFunc_GetComponentsByInterface_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UActorComponent* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Crosshair_C", "UpdateBowMode");

	Params::UUMG_Crosshair_C_UpdateBowMode_Params Parms{};

	Parms.K2Node_DynamicCast_AsBP_Crosshair_Interface = K2Node_DynamicCast_AsBP_Crosshair_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_WantsBowMode_bWantsBowMode = CallFunc_WantsBowMode_bWantsBowMode;
	Parms.K2Node_DynamicCast_AsBP_Crosshair_Interface_1 = K2Node_DynamicCast_AsBP_Crosshair_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetCrosshairAimAlpha_AimAlpha = CallFunc_GetCrosshairAimAlpha_AimAlpha;
	Parms.CallFunc_GetCrosshairVisibility_ReturnValue = CallFunc_GetCrosshairVisibility_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerCharacter_IsValid = CallFunc_GetIcarusPlayerCharacter_IsValid;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Character_Survival = K2Node_DynamicCast_AsIcarus_Player_Character_Survival;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetFocusedItem_ReturnValue = CallFunc_GetFocusedItem_ReturnValue;
	Parms.CallFunc_GetComponentsByInterface_ReturnValue = CallFunc_GetComponentsByInterface_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Crosshair.UMG_Crosshair_C.UpdateTextures
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Crosshair_C::UpdateTextures(bool Temp_bool_Variable, bool Temp_bool_Variable_1, class UTexture2D* K2Node_Select_Default, class UTexture2D* K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Crosshair_C", "UpdateTextures");

	Params::UUMG_Crosshair_C_UpdateTextures_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Crosshair.UMG_Crosshair_C.SetInteractionFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Focusing                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Crosshair_C::SetInteractionFocus(bool Focusing, bool CallFunc_NotEqual_BoolBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Crosshair_C", "SetInteractionFocus");

	Params::UUMG_Crosshair_C_SetInteractionFocus_Params Parms{};

	Parms.Focusing = Focusing;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Crosshair.UMG_Crosshair_C.UpdateCrosshair
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Alpha                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Crosshair_C::UpdateCrosshair(float Alpha, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_FInterpTo_ReturnValue, float CallFunc_Lerp_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Crosshair_C", "UpdateCrosshair");

	Params::UUMG_Crosshair_C_UpdateCrosshair_Params Parms{};

	Parms.Alpha = Alpha;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Crosshair.UMG_Crosshair_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_Crosshair_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Crosshair_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Crosshair.UMG_Crosshair_C.ExecuteUbergraph_UMG_Crosshair
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Crosshair_C::ExecuteUbergraph_UMG_Crosshair(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Crosshair_C", "ExecuteUbergraph_UMG_Crosshair");

	Params::UUMG_Crosshair_C_ExecuteUbergraph_UMG_Crosshair_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


