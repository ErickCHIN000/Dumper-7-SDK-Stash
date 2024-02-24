#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x270 (0x5B0 - 0x340)
// WidgetBlueprintGeneratedClass WBP_PlayerMapPin.WBP_PlayerMapPin_C
class UWBP_PlayerMapPin_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               B_iconBG;                                          // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image;                                             // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_BG;                                            // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_customRadius;                                  // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayContainer;                                  // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox;                                           // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector2D                             Map_Pin_Size;                                      // 0x378(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Hovered;                                           // 0x388(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6D8D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            MapPinHoverStateChanged;                           // 0x390(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FMapPinData                           Map_Pin_Data;                                      // 0x3A0(0xA8)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         WaitingForMouseRelease;                            // 0x448(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6DA1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            MapPinClicked;                                     // 0x450(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UMaterialInstanceDynamic*              DMI_MapPin;                                        // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       MaxMarkerZoneRadius;                               // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MinMarkerZoneRadius;                               // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_MapMarkerEditPanel_C*             MarkerEditPanel;                                   // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FMapWaypointInfo                      WaypointInfo;                                      // 0x480(0x120)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            MapPinEditPanelOpened;                             // 0x5A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_PlayerMapPin_C* GetDefaultObj();

	void GetOwningPlayersName(class FString* NewParam, class APlayerState* CallFunc_GetPlayerStateFromId_PlayerState, const class FString& CallFunc_GetPlayerName_ReturnValue);
	void IsAPartyMemberBeacon(bool* IsAPartyMembersBeacon, bool CallFunc_IsOwnedByLocalPlayer_IsOwnedByLocalPlayer, const struct FMapWaypointInfo& CallFunc_GetMapPinInfo_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void IsOwnedByLocalPlayer(bool* IsOwnedByLocalPlayer, const class FString& CallFunc_GetLocalPlayerPersistentId_PlayerId, bool CallFunc_EqualEqual_StrStr_ReturnValue);
	bool ShouldTooltipShowEditHint(enum class EMapMarkerType Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool CallFunc_IsOwnedByLocalPlayer_IsOwnedByLocalPlayer, const struct FMapWaypointInfo& CallFunc_GetMapPinInfo_ReturnValue, bool K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue);
	struct FMapWaypointInfo GetMapPinInfo(bool CallFunc_DoesDataTableRowExist_ReturnValue, const struct FMapWaypointInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void GetTooltipCoordText(class FText* OutputText, bool DeathChestRow);
	void GetTooltipBodyText(class FText* OutputText, const struct FMapWaypointInfo& CallFunc_GetMapPinInfo_ReturnValue);
	void GetTooltipTitleText(class FText* OutputText, const struct FMapWaypointInfo& CallFunc_GetMapPinInfo_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Replace_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void IsPlayerEditable(bool* IsPlayerEditable, bool CallFunc_IsOwnedByLocalPlayer_IsOwnedByLocalPlayer, enum class EMapMarkerType CallFunc_GetMapPinType_MapPinType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void GetMapPinType(enum class EMapMarkerType* MapPinType, const struct FMapWaypointInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void SetMapPinData(const struct FMapPinData& NewMapPinData);
	void RefreshView(bool CallFunc_IsValid_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MapUI_WorldLocationToMapPosition_Map_Position, double CallFunc_MakeVector2D_X_ImplicitCast, double CallFunc_MakeVector2D_Y_ImplicitCast);
	void HandleEditPanelClosed(class UNWXCommonWindowWidget* Window);
	void HandleRadiusSliderValueChange(double NewRadius, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void HandleEditPanelSavePressed(class FText NewNote, double NewRadius, double CallFunc_Multiply_DoubleDouble_ReturnValue, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, TScriptInterface<class IPlayerMapPinControllerInterface> CallFunc_UpdatePlayerOwnedMapPin_self_CastInput, float CallFunc_UpdatePlayerOwnedMapPin_Radius_ImplicitCast);
	class UWidget* GetTooltipWidget(const struct FDataTableRowHandle& DeathMarkerRow, const struct FMapWaypointInfo& MapInfo, class UWBP_Tooltip_MapMarker_C* CallFunc_Create_ReturnValue, const struct FMapWaypointInfo& CallFunc_GetMapPinInfo_ReturnValue, class FText CallFunc_GetTooltipCoordText_OutputText, class FText CallFunc_GetTooltipBodyText_OutputText, class FText CallFunc_GetTooltipTitleText_OutputText);
	void OnMouseLeftClick(struct FEventReply* Handled, const struct FEventReply& CallFunc_Handled_ReturnValue);
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_OnMouseLeftClick_Handled, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, bool CallFunc_IsPlayerEditable_IsPlayerEditable, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, TScriptInterface<class IPlayerMapPinControllerInterface> CallFunc_RemovePlayerOwnedMapPin_self_CastInput, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void ExecuteUbergraph_WBP_PlayerMapPin(int32 EntryPoint, double Temp_real_Variable, double Temp_real_Variable_1, double Temp_real_Variable_2, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_MapUI_GetLevelMapRotation_TableRowFound, double CallFunc_MapUI_GetLevelMapRotation_Rotation, enum class E_MapRotation CallFunc_MapUI_GetLevelMapRotation_Map_Rotation_Override, double CallFunc_MapRangeClamped_ReturnValue, enum class EMapMarkerType Temp_byte_Variable, const struct FMapWaypointInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, double K2Node_Select_Default, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_IsAPartyMemberBeacon_IsAPartyMembersBeacon, float CallFunc_SetScalarParameterValue_Value_ImplicitCast, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast);
	void MapPinEditPanelOpened__DelegateSignature();
	void MapPinClicked__DelegateSignature(const struct FMapPinData& MapPinData);
	void MapPinHoverStateChanged__DelegateSignature(const struct FMapPinData& MapPinData, bool IsHovered);
};

}


