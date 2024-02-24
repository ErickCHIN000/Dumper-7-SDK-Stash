#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_PartyMemberSpace.UMG_PartyMemberSpace_C
// (None)

class UClass* UUMG_PartyMemberSpace_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_PartyMemberSpace_C");

	return Clss;
}


// UMG_PartyMemberSpace_C UMG_PartyMemberSpace.Default__UMG_PartyMemberSpace_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_PartyMemberSpace_C* UUMG_PartyMemberSpace_C::GetDefaultObj()
{
	static class UUMG_PartyMemberSpace_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_PartyMemberSpace_C*>(UUMG_PartyMemberSpace_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_PartyMemberSpace.UMG_PartyMemberSpace_C.UpdateKickButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PartyMemberSpace_C::UpdateKickButton(class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_PartyMemberSpace_C", "UpdateKickButton");

	Params::UUMG_PartyMemberSpace_C_UpdateKickButton_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_PartyMemberSpace.UMG_PartyMemberSpace_C.UpdateReadyState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Ready                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_Select_Default                                            (ConstParm)

void UUMG_PartyMemberSpace_C::UpdateReadyState(bool Ready, bool Temp_bool_Variable, const struct FSlateBrush& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_PartyMemberSpace_C", "UpdateReadyState");

	Params::UUMG_PartyMemberSpace_C_UpdateReadyState_Params Parms{};

	Parms.Ready = Ready;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_PartyMemberSpace.UMG_PartyMemberSpace_C.UpdateSharesValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PartyMemberSpace_C::UpdateSharesValue(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_PartyMemberSpace_C", "UpdateSharesValue");

	Params::UUMG_PartyMemberSpace_C_UpdateSharesValue_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_PartyMemberSpace.UMG_PartyMemberSpace_C.UpdateMemberColour
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_PartyMemberSpace_C::UpdateMemberColour()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_PartyMemberSpace_C", "UpdateMemberColour");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_PartyMemberSpace.UMG_PartyMemberSpace_C.SetPlayerState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                PlayerState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PartyMemberSpace_C::SetPlayerState(class APlayerState* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_PartyMemberSpace_C", "SetPlayerState");

	Params::UUMG_PartyMemberSpace_C_SetPlayerState_Params Parms{};

	Parms.PlayerState = PlayerState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_PartyMemberSpace.UMG_PartyMemberSpace_C.GetColorAndOpacity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerState_C*     K2Node_DynamicCast_AsBP_Icarus_Player_State                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPlayerIdentityData         CallFunc_GetPlayerIdentityData_PlayerIdentity                    (None)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PartyMemberSpace_C::GetColorAndOpacity(bool CallFunc_IsValid_ReturnValue, class ABP_IcarusPlayerState_C* K2Node_DynamicCast_AsBP_Icarus_Player_State, bool K2Node_DynamicCast_bSuccess, const struct FPlayerIdentityData& CallFunc_GetPlayerIdentityData_PlayerIdentity, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_PartyMemberSpace_C", "GetColorAndOpacity");

	Params::UUMG_PartyMemberSpace_C_GetColorAndOpacity_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_State = K2Node_DynamicCast_AsBP_Icarus_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerIdentityData_PlayerIdentity = CallFunc_GetPlayerIdentityData_PlayerIdentity;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue = CallFunc_Conv_ColorToLinearColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_PartyMemberSpace.UMG_PartyMemberSpace_C.UpdatePlayerName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class AIcarusPlayerState*          K2Node_DynamicCast_AsIcarus_Player_State                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FOnlineProfileCharacter     CallFunc_GetActiveCharacter_ReturnValue                          (ConstParm)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// bool                               CallFunc_HasActiveCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UUMG_PartyMemberSpace_C::UpdatePlayerName(bool CallFunc_IsValid_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class AIcarusPlayerState* K2Node_DynamicCast_AsIcarus_Player_State, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetPlayerName_ReturnValue, const struct FOnlineProfileCharacter& CallFunc_GetActiveCharacter_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool CallFunc_HasActiveCharacter_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_PartyMemberSpace_C", "UpdatePlayerName");

	Params::UUMG_PartyMemberSpace_C_UpdatePlayerName_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_State = K2Node_DynamicCast_AsIcarus_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_GetActiveCharacter_ReturnValue = CallFunc_GetActiveCharacter_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_HasActiveCharacter_ReturnValue = CallFunc_HasActiveCharacter_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_PartyMemberSpace.UMG_PartyMemberSpace_C.UpdatePlayerLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerState*          K2Node_DynamicCast_AsIcarus_Player_State                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasActiveCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOnlineProfileCharacter     CallFunc_GetActiveCharacter_ReturnValue                          (ConstParm)
// int32                              CallFunc_CalculatePlayerLevel_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UUMG_PartyMemberSpace_C::UpdatePlayerLevel(bool CallFunc_IsValid_ReturnValue, class AIcarusPlayerState* K2Node_DynamicCast_AsIcarus_Player_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasActiveCharacter_ReturnValue, const struct FOnlineProfileCharacter& CallFunc_GetActiveCharacter_ReturnValue, int32 CallFunc_CalculatePlayerLevel_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_PartyMemberSpace_C", "UpdatePlayerLevel");

	Params::UUMG_PartyMemberSpace_C_UpdatePlayerLevel_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_State = K2Node_DynamicCast_AsIcarus_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasActiveCharacter_ReturnValue = CallFunc_HasActiveCharacter_ReturnValue;
	Parms.CallFunc_GetActiveCharacter_ReturnValue = CallFunc_GetActiveCharacter_ReturnValue;
	Parms.CallFunc_CalculatePlayerLevel_ReturnValue = CallFunc_CalculatePlayerLevel_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_PartyMemberSpace.UMG_PartyMemberSpace_C.UpdatePlayerIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateBrush                 Brush                                                            (Edit, BlueprintVisible)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerState_C*     K2Node_DynamicCast_AsBP_Icarus_Player_State                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPlayerIdentityData         CallFunc_GetPlayerIdentityData_PlayerIdentity                    (None)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue                        (None)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UUMG_PartyMemberSpace_C::UpdatePlayerIcon(const struct FSlateBrush& Brush, bool CallFunc_IsValid_ReturnValue, class ABP_IcarusPlayerState_C* K2Node_DynamicCast_AsBP_Icarus_Player_State, bool K2Node_DynamicCast_bSuccess, const struct FPlayerIdentityData& CallFunc_GetPlayerIdentityData_PlayerIdentity, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_PartyMemberSpace_C", "UpdatePlayerIcon");

	Params::UUMG_PartyMemberSpace_C_UpdatePlayerIcon_Params Parms{};

	Parms.Brush = Brush;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_State = K2Node_DynamicCast_AsBP_Icarus_Player_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerIdentityData_PlayerIdentity = CallFunc_GetPlayerIdentityData_PlayerIdentity;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue = CallFunc_MakeBrushFromTexture_ReturnValue;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue = CallFunc_Conv_ColorToLinearColor_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_PartyMemberSpace.UMG_PartyMemberSpace_C.SliderValueChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PartyMemberSpace_C::SliderValueChange(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_PartyMemberSpace_C", "SliderValueChange");

	Params::UUMG_PartyMemberSpace_C_SliderValueChange_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_PartyMemberSpace.UMG_PartyMemberSpace_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_PartyMemberSpace_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_PartyMemberSpace_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_PartyMemberSpace.UMG_PartyMemberSpace_C.BndEvt__KickButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PartyMemberSpace_C::BndEvt__KickButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_PartyMemberSpace_C", "BndEvt__KickButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UUMG_PartyMemberSpace_C_BndEvt__KickButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_PartyMemberSpace.UMG_PartyMemberSpace_C.ExecuteUbergraph_UMG_PartyMemberSpace
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_IcarusPlayerControllerSpace_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerControllerSpace_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PartyMemberSpace_C::ExecuteUbergraph_UMG_PartyMemberSpace(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_CustomEvent_Value, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button, TArray<class ABP_IcarusPlayerControllerSpace_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class ABP_IcarusPlayerControllerSpace_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_PartyMemberSpace_C", "ExecuteUbergraph_UMG_PartyMemberSpace");

	Params::UUMG_PartyMemberSpace_C_ExecuteUbergraph_UMG_PartyMemberSpace_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_PartyMemberSpace.UMG_PartyMemberSpace_C.SharesSliderChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_PartyMemberSpace_C*     PartyMember                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              SliderValueChange                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PartyMemberSpace_C::SharesSliderChanged__DelegateSignature(class UUMG_PartyMemberSpace_C* PartyMember, float SliderValueChange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_PartyMemberSpace_C", "SharesSliderChanged__DelegateSignature");

	Params::UUMG_PartyMemberSpace_C_SharesSliderChanged__DelegateSignature_Params Parms{};

	Parms.PartyMember = PartyMember;
	Parms.SliderValueChange = SliderValueChange;

	UObject::ProcessEvent(Func, &Parms);

}

}


