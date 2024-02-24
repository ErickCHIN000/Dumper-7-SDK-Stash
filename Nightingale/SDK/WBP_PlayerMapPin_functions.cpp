#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PlayerMapPin.WBP_PlayerMapPin_C
// (None)

class UClass* UWBP_PlayerMapPin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PlayerMapPin_C");

	return Clss;
}


// WBP_PlayerMapPin_C WBP_PlayerMapPin.Default__WBP_PlayerMapPin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PlayerMapPin_C* UWBP_PlayerMapPin_C::GetDefaultObj()
{
	static class UWBP_PlayerMapPin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PlayerMapPin_C*>(UWBP_PlayerMapPin_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.GetOwningPlayersName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      NewParam                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_GetPlayerStateFromId_PlayerState                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UWBP_PlayerMapPin_C::GetOwningPlayersName(class FString* NewParam, class APlayerState* CallFunc_GetPlayerStateFromId_PlayerState, const class FString& CallFunc_GetPlayerName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMapPin_C", "GetOwningPlayersName");

	Params::UWBP_PlayerMapPin_C_GetOwningPlayersName_Params Parms{};

	Parms.CallFunc_GetPlayerStateFromId_PlayerState = CallFunc_GetPlayerStateFromId_PlayerState;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = std::move(Parms.NewParam);

}


// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.IsAPartyMemberBeacon
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsAPartyMembersBeacon                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOwnedByLocalPlayer_IsOwnedByLocalPlayer               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMapWaypointInfo            CallFunc_GetMapPinInfo_ReturnValue                               (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerMapPin_C::IsAPartyMemberBeacon(bool* IsAPartyMembersBeacon, bool CallFunc_IsOwnedByLocalPlayer_IsOwnedByLocalPlayer, const struct FMapWaypointInfo& CallFunc_GetMapPinInfo_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMapPin_C", "IsAPartyMemberBeacon");

	Params::UWBP_PlayerMapPin_C_IsAPartyMemberBeacon_Params Parms{};

	Parms.CallFunc_IsOwnedByLocalPlayer_IsOwnedByLocalPlayer = CallFunc_IsOwnedByLocalPlayer_IsOwnedByLocalPlayer;
	Parms.CallFunc_GetMapPinInfo_ReturnValue = CallFunc_GetMapPinInfo_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsAPartyMembersBeacon != nullptr)
		*IsAPartyMembersBeacon = Parms.IsAPartyMembersBeacon;

}


// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.IsOwnedByLocalPlayer
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsOwnedByLocalPlayer                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetLocalPlayerPersistentId_PlayerId                     (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerMapPin_C::IsOwnedByLocalPlayer(bool* IsOwnedByLocalPlayer, const class FString& CallFunc_GetLocalPlayerPersistentId_PlayerId, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMapPin_C", "IsOwnedByLocalPlayer");

	Params::UWBP_PlayerMapPin_C_IsOwnedByLocalPlayer_Params Parms{};

	Parms.CallFunc_GetLocalPlayerPersistentId_PlayerId = CallFunc_GetLocalPlayerPersistentId_PlayerId;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsOwnedByLocalPlayer != nullptr)
		*IsOwnedByLocalPlayer = Parms.IsOwnedByLocalPlayer;

}


// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.ShouldTooltipShowEditHint
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMapMarkerType          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOwnedByLocalPlayer_IsOwnedByLocalPlayer               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMapWaypointInfo            CallFunc_GetMapPinInfo_ReturnValue                               (None)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_PlayerMapPin_C::ShouldTooltipShowEditHint(enum class EMapMarkerType Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool CallFunc_IsOwnedByLocalPlayer_IsOwnedByLocalPlayer, const struct FMapWaypointInfo& CallFunc_GetMapPinInfo_ReturnValue, bool K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMapPin_C", "ShouldTooltipShowEditHint");

	Params::UWBP_PlayerMapPin_C_ShouldTooltipShowEditHint_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_IsOwnedByLocalPlayer_IsOwnedByLocalPlayer = CallFunc_IsOwnedByLocalPlayer_IsOwnedByLocalPlayer;
	Parms.CallFunc_GetMapPinInfo_ReturnValue = CallFunc_GetMapPinInfo_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.GetMapPinInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FMapWaypointInfo            ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_DoesDataTableRowExist_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMapWaypointInfo            CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FMapWaypointInfo UWBP_PlayerMapPin_C::GetMapPinInfo(bool CallFunc_DoesDataTableRowExist_ReturnValue, const struct FMapWaypointInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMapPin_C", "GetMapPinInfo");

	Params::UWBP_PlayerMapPin_C_GetMapPinInfo_Params Parms{};

	Parms.CallFunc_DoesDataTableRowExist_ReturnValue = CallFunc_DoesDataTableRowExist_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.GetTooltipCoordText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        OutputText                                                       (Parm, OutParm)
// bool                               DeathChestRow                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerMapPin_C::GetTooltipCoordText(class FText* OutputText, bool DeathChestRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMapPin_C", "GetTooltipCoordText");

	Params::UWBP_PlayerMapPin_C_GetTooltipCoordText_Params Parms{};

	Parms.DeathChestRow = DeathChestRow;

	UObject::ProcessEvent(Func, &Parms);

	if (OutputText != nullptr)
		*OutputText = Parms.OutputText;

}


// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.GetTooltipBodyText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        OutputText                                                       (Parm, OutParm)
// struct FMapWaypointInfo            CallFunc_GetMapPinInfo_ReturnValue                               (None)

void UWBP_PlayerMapPin_C::GetTooltipBodyText(class FText* OutputText, const struct FMapWaypointInfo& CallFunc_GetMapPinInfo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMapPin_C", "GetTooltipBodyText");

	Params::UWBP_PlayerMapPin_C_GetTooltipBodyText_Params Parms{};

	Parms.CallFunc_GetMapPinInfo_ReturnValue = CallFunc_GetMapPinInfo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutputText != nullptr)
		*OutputText = Parms.OutputText;

}


// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.GetTooltipTitleText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        OutputText                                                       (Parm, OutParm)
// struct FMapWaypointInfo            CallFunc_GetMapPinInfo_ReturnValue                               (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWBP_PlayerMapPin_C::GetTooltipTitleText(class FText* OutputText, const struct FMapWaypointInfo& CallFunc_GetMapPinInfo_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Replace_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMapPin_C", "GetTooltipTitleText");

	Params::UWBP_PlayerMapPin_C_GetTooltipTitleText_Params Parms{};

	Parms.CallFunc_GetMapPinInfo_ReturnValue = CallFunc_GetMapPinInfo_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Replace_ReturnValue = CallFunc_Replace_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutputText != nullptr)
		*OutputText = Parms.OutputText;

}


// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.IsPlayerEditable
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsPlayerEditable                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsOwnedByLocalPlayer_IsOwnedByLocalPlayer               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMapMarkerType          CallFunc_GetMapPinType_MapPinType                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerMapPin_C::IsPlayerEditable(bool* IsPlayerEditable, bool CallFunc_IsOwnedByLocalPlayer_IsOwnedByLocalPlayer, enum class EMapMarkerType CallFunc_GetMapPinType_MapPinType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMapPin_C", "IsPlayerEditable");

	Params::UWBP_PlayerMapPin_C_IsPlayerEditable_Params Parms{};

	Parms.CallFunc_IsOwnedByLocalPlayer_IsOwnedByLocalPlayer = CallFunc_IsOwnedByLocalPlayer_IsOwnedByLocalPlayer;
	Parms.CallFunc_GetMapPinType_MapPinType = CallFunc_GetMapPinType_MapPinType;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsPlayerEditable != nullptr)
		*IsPlayerEditable = Parms.IsPlayerEditable;

}


// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.GetMapPinType
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EMapMarkerType          MapPinType                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMapWaypointInfo            CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerMapPin_C::GetMapPinType(enum class EMapMarkerType* MapPinType, const struct FMapWaypointInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMapPin_C", "GetMapPinType");

	Params::UWBP_PlayerMapPin_C_GetMapPinType_Params Parms{};

	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (MapPinType != nullptr)
		*MapPinType = Parms.MapPinType;

}


// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.SetMapPinData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapPinData                 NewMapPinData                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_PlayerMapPin_C::SetMapPinData(const struct FMapPinData& NewMapPinData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMapPin_C", "SetMapPinData");

	Params::UWBP_PlayerMapPin_C_SetMapPinData_Params Parms{};

	Parms.NewMapPinData = NewMapPinData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.RefreshView
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MapUI_WorldLocationToMapPosition_Map_Position           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector2D_X_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector2D_Y_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerMapPin_C::RefreshView(bool CallFunc_IsValid_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MapUI_WorldLocationToMapPosition_Map_Position, double CallFunc_MakeVector2D_X_ImplicitCast, double CallFunc_MakeVector2D_Y_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMapPin_C", "RefreshView");

	Params::UWBP_PlayerMapPin_C_RefreshView_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_MapUI_WorldLocationToMapPosition_Map_Position = CallFunc_MapUI_WorldLocationToMapPosition_Map_Position;
	Parms.CallFunc_MakeVector2D_X_ImplicitCast = CallFunc_MakeVector2D_X_ImplicitCast;
	Parms.CallFunc_MakeVector2D_Y_ImplicitCast = CallFunc_MakeVector2D_Y_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.HandleEditPanelClosed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXCommonWindowWidget*      Window                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerMapPin_C::HandleEditPanelClosed(class UNWXCommonWindowWidget* Window)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMapPin_C", "HandleEditPanelClosed");

	Params::UWBP_PlayerMapPin_C_HandleEditPanelClosed_Params Parms{};

	Parms.Window = Window;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.HandleRadiusSliderValueChange
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewRadius                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerMapPin_C::HandleRadiusSliderValueChange(double NewRadius, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMapPin_C", "HandleRadiusSliderValueChange");

	Params::UWBP_PlayerMapPin_C_HandleRadiusSliderValueChange_Params Parms{};

	Parms.NewRadius = NewRadius;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.HandleEditPanelSavePressed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        NewNote                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// double                             NewRadius                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IPlayerMapPinControllerInterface>CallFunc_UpdatePlayerOwnedMapPin_self_CastInput                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_UpdatePlayerOwnedMapPin_Radius_ImplicitCast             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerMapPin_C::HandleEditPanelSavePressed(class FText NewNote, double NewRadius, double CallFunc_Multiply_DoubleDouble_ReturnValue, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, TScriptInterface<class IPlayerMapPinControllerInterface> CallFunc_UpdatePlayerOwnedMapPin_self_CastInput, float CallFunc_UpdatePlayerOwnedMapPin_Radius_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMapPin_C", "HandleEditPanelSavePressed");

	Params::UWBP_PlayerMapPin_C_HandleEditPanelSavePressed_Params Parms{};

	Parms.NewNote = NewNote;
	Parms.NewRadius = NewRadius;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.CallFunc_UpdatePlayerOwnedMapPin_self_CastInput = CallFunc_UpdatePlayerOwnedMapPin_self_CastInput;
	Parms.CallFunc_UpdatePlayerOwnedMapPin_Radius_ImplicitCast = CallFunc_UpdatePlayerOwnedMapPin_Radius_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.GetTooltipWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         DeathMarkerRow                                                   (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FMapWaypointInfo            MapInfo                                                          (Edit, BlueprintVisible)
// class UWBP_Tooltip_MapMarker_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FMapWaypointInfo            CallFunc_GetMapPinInfo_ReturnValue                               (None)
// class FText                        CallFunc_GetTooltipCoordText_OutputText                          (None)
// class FText                        CallFunc_GetTooltipBodyText_OutputText                           (None)
// class FText                        CallFunc_GetTooltipTitleText_OutputText                          (None)

class UWidget* UWBP_PlayerMapPin_C::GetTooltipWidget(const struct FDataTableRowHandle& DeathMarkerRow, const struct FMapWaypointInfo& MapInfo, class UWBP_Tooltip_MapMarker_C* CallFunc_Create_ReturnValue, const struct FMapWaypointInfo& CallFunc_GetMapPinInfo_ReturnValue, class FText CallFunc_GetTooltipCoordText_OutputText, class FText CallFunc_GetTooltipBodyText_OutputText, class FText CallFunc_GetTooltipTitleText_OutputText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMapPin_C", "GetTooltipWidget");

	Params::UWBP_PlayerMapPin_C_GetTooltipWidget_Params Parms{};

	Parms.DeathMarkerRow = DeathMarkerRow;
	Parms.MapInfo = MapInfo;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetMapPinInfo_ReturnValue = CallFunc_GetMapPinInfo_ReturnValue;
	Parms.CallFunc_GetTooltipCoordText_OutputText = CallFunc_GetTooltipCoordText_OutputText;
	Parms.CallFunc_GetTooltipBodyText_OutputText = CallFunc_GetTooltipBodyText_OutputText;
	Parms.CallFunc_GetTooltipTitleText_OutputText = CallFunc_GetTooltipTitleText_OutputText;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.OnMouseLeftClick
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEventReply                 Handled                                                          (Parm, OutParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

void UWBP_PlayerMapPin_C::OnMouseLeftClick(struct FEventReply* Handled, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMapPin_C", "OnMouseLeftClick");

	Params::UWBP_PlayerMapPin_C_OnMouseLeftClick_Params Parms{};

	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Handled != nullptr)
		*Handled = std::move(Parms.Handled);

}


// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_OnMouseLeftClick_Handled                                (None)
// struct FKey                        CallFunc_PointerEvent_GetEffectingButton_ReturnValue             (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UWBP_PlayerMapPin_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_OnMouseLeftClick_Handled, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMapPin_C", "OnMouseButtonUp");

	Params::UWBP_PlayerMapPin_C_OnMouseButtonUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_OnMouseLeftClick_Handled = CallFunc_OnMouseLeftClick_Handled;
	Parms.CallFunc_PointerEvent_GetEffectingButton_ReturnValue = CallFunc_PointerEvent_GetEffectingButton_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_IsPlayerEditable_IsPlayerEditable                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        CallFunc_PointerEvent_GetEffectingButton_ReturnValue             (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IPlayerMapPinControllerInterface>CallFunc_RemovePlayerOwnedMapPin_self_CastInput                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UWBP_PlayerMapPin_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, bool CallFunc_IsPlayerEditable_IsPlayerEditable, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, TScriptInterface<class IPlayerMapPinControllerInterface> CallFunc_RemovePlayerOwnedMapPin_self_CastInput, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMapPin_C", "OnMouseButtonDown");

	Params::UWBP_PlayerMapPin_C_OnMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_IsPlayerEditable_IsPlayerEditable = CallFunc_IsPlayerEditable_IsPlayerEditable;
	Parms.CallFunc_PointerEvent_GetEffectingButton_ReturnValue = CallFunc_PointerEvent_GetEffectingButton_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.CallFunc_RemovePlayerOwnedMapPin_self_CastInput = CallFunc_RemovePlayerOwnedMapPin_self_CastInput;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerMapPin_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMapPin_C", "Tick");

	Params::UWBP_PlayerMapPin_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PlayerMapPin_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMapPin_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.ExecuteUbergraph_WBP_PlayerMapPin
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MapUI_GetLevelMapRotation_TableRowFound                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapUI_GetLevelMapRotation_Rotation                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_MapRotation           CallFunc_MapUI_GetLevelMapRotation_Map_Rotation_Override         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMapMarkerType          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMapWaypointInfo            CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAPartyMemberBeacon_IsAPartyMembersBeacon              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerMapPin_C::ExecuteUbergraph_WBP_PlayerMapPin(int32 EntryPoint, double Temp_real_Variable, double Temp_real_Variable_1, double Temp_real_Variable_2, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_MapUI_GetLevelMapRotation_TableRowFound, double CallFunc_MapUI_GetLevelMapRotation_Rotation, enum class E_MapRotation CallFunc_MapUI_GetLevelMapRotation_Map_Rotation_Override, double CallFunc_MapRangeClamped_ReturnValue, enum class EMapMarkerType Temp_byte_Variable, const struct FMapWaypointInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, double K2Node_Select_Default, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_IsAPartyMemberBeacon_IsAPartyMembersBeacon, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMapPin_C", "ExecuteUbergraph_WBP_PlayerMapPin");

	Params::UWBP_PlayerMapPin_C_ExecuteUbergraph_WBP_PlayerMapPin_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_real_Variable_2 = Temp_real_Variable_2;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MapUI_GetLevelMapRotation_TableRowFound = CallFunc_MapUI_GetLevelMapRotation_TableRowFound;
	Parms.CallFunc_MapUI_GetLevelMapRotation_Rotation = CallFunc_MapUI_GetLevelMapRotation_Rotation;
	Parms.CallFunc_MapUI_GetLevelMapRotation_Map_Rotation_Override = CallFunc_MapUI_GetLevelMapRotation_Map_Rotation_Override;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_IsAPartyMemberBeacon_IsAPartyMembersBeacon = CallFunc_IsAPartyMemberBeacon_IsAPartyMembersBeacon;
	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;
	Parms.CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast = CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;
	Parms.CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast = CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.MapPinEditPanelOpened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_PlayerMapPin_C::MapPinEditPanelOpened__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMapPin_C", "MapPinEditPanelOpened__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.MapPinClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapPinData                 MapPinData                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_PlayerMapPin_C::MapPinClicked__DelegateSignature(const struct FMapPinData& MapPinData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMapPin_C", "MapPinClicked__DelegateSignature");

	Params::UWBP_PlayerMapPin_C_MapPinClicked__DelegateSignature_Params Parms{};

	Parms.MapPinData = MapPinData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerMapPin.WBP_PlayerMapPin_C.MapPinHoverStateChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMapPinData                 MapPinData                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               IsHovered                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerMapPin_C::MapPinHoverStateChanged__DelegateSignature(const struct FMapPinData& MapPinData, bool IsHovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMapPin_C", "MapPinHoverStateChanged__DelegateSignature");

	Params::UWBP_PlayerMapPin_C_MapPinHoverStateChanged__DelegateSignature_Params Parms{};

	Parms.MapPinData = MapPinData;
	Parms.IsHovered = IsHovered;

	UObject::ProcessEvent(Func, &Parms);

}

}


