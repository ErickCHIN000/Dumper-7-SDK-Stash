#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x130 (0x4D0 - 0x3A0)
// WidgetBlueprintGeneratedClass WBP_HUD_Compass.WBP_HUD_Compass_C
class UWBP_HUD_Compass_C : public UNWXCompassWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_DetailMode;                                   // 0x3A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_TutorialReveal;                               // 0x3B0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                CompassImage;                                      // 0x3B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x3C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OV_Markers_Bottom;                                 // 0x3C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Markers_Top;                               // 0x3D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class AActor*, class UWBP_sw_CompassMarker_C*> ActorChildWidgetMap;                               // 0x3D8(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, ContainsInstancedReference)
	TMap<struct FGuid, class UWBP_sw_CompassMarker_C*> MapPinWidgets;                                     // 0x428(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	enum class E_hud_DetailMode                  DetailMode;                                        // 0x478(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5DAE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, class UWBP_sw_CompassMarker_C*> PartyMemberWidgets;                                // 0x480(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UWBP_HUD_Compass_C* GetDefaultObj();

	void UpdateLocalizedCompassTexture(TMap<class FString, class UTexture*> LocalizedCompassMap, int32 Temp_int_Array_Index_Variable, TMap<class FString, class UTexture*> K2Node_MakeVariable_MakeVariableOutput, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_GetCurrentCulture_ReturnValue, TArray<class FString>& CallFunc_Map_Keys_Keys, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const class FString& CallFunc_Array_Get_Item, class UTexture* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Contains_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void RemovePartyMarker(class FString& ProfileId, bool CallFunc_Map_Remove_ReturnValue, class UWBP_sw_CompassMarker_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void AddPartyMemberMarker(const class FString& ProfileId, class UWBP_sw_CompassMarker_C* NewWidget, class UWBP_sw_CompassMarker_C* CallFunc_Create_ReturnValue, const struct FVector& CallFunc_TryGetPartyMemberLocation_OutLocation, bool CallFunc_TryGetPartyMemberLocation_ReturnValue, const struct FLinearColor& Temp_struct_Variable, TSoftObjectPtr<class UObject> Temp_softobject_Variable, bool CallFunc_Map_Contains_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue);
	void UpdatePartyMemberMarkers(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FString>& CallFunc_GetPartyMemberIds_OutIds, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UWBP_sw_CompassMarker_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_TryGetPartyMemberLocation_OutLocation, bool CallFunc_TryGetPartyMemberLocation_ReturnValue);
	void Toggle_Detail_Mode(enum class E_hud_DetailMode Mode, bool Temp_bool_Variable, double Temp_real_Variable, enum class E_hud_DetailMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, enum class EUMGSequencePlayMode Temp_byte_Variable_2, float CallFunc_GetAnimationCurrentTime_ReturnValue, enum class EUMGSequencePlayMode K2Node_Select_Default, bool CallFunc_IsAnimationPlaying_ReturnValue, double K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, double K2Node_Select_Option_1_ImplicitCast, float CallFunc_PlayAnimation_StartAtTime_ImplicitCast);
	void RemoveAllMarkers();
	void SetupBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3);
	void OnMapPinDataRemoved(struct FGuid& MapPinId, bool CallFunc_Map_Remove_ReturnValue, class UWBP_sw_CompassMarker_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void OnMapPinDataUpdated(struct FMapPinData& MapPinData, class UWBP_sw_CompassMarker_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void OnMapPinDataAdded(struct FMapPinData& MapPinData, const struct FMapWaypointInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, double CallFunc_CreateMapPinMarkerWidget_Distance_Threshold_ImplicitCast);
	void CreateMapPinMarkerWidget(const struct FGuid& MapPinId, const struct FLinearColor& Color, double Distance_Threshold, const struct FVector& Position, TSoftObjectPtr<class UObject> IconAssetReference, const struct FDataTableRowHandle& Row, bool CallFunc_Map_Contains_ReturnValue, class UWBP_sw_CompassMarker_C* CallFunc_Create_ReturnValue, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue);
	void InitializeMapPins(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, TScriptInterface<class IPlayerLocationsInterface> K2Node_DynamicCast_AsPlayer_Locations_Interface, bool K2Node_DynamicCast_bSuccess, TArray<struct FMapPinData>& CallFunc_GetAllMapPins_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FMapPinData& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void Update_Compass_Direction(bool RowFoundLOCAL, double Temp_real_Variable, double Temp_real_Variable_1, double Temp_real_Variable_2, bool Temp_bool_Variable, double Temp_real_Variable_3, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter, bool CallFunc_IsValid_ReturnValue, class ABP_Character_C* CallFunc_GetLocalCharacter_PlayerCharacter_1, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, double Temp_real_Variable_4, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, enum class E_MapRotation Temp_byte_Variable, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FS_UI_MapTable& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double K2Node_Select_Default, double K2Node_Select_Default_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Percent_FloatFloat_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_SetScalarParameterValue_Value_ImplicitCast);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OwningPlayerJoinedParty();
	void OwningPlayerLeftParty();
	void Destruct();
	void PartyMemberJoinedRealm(const class FString& ProfileId);
	void PartyMemberLeftRealm(const class FString& ProfileId);
	void Construct();
	void ExecuteUbergraph_WBP_HUD_Compass(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, TArray<class FString>& CallFunc_GetPartyMemberIds_OutIds, const class FString& CallFunc_Array_Get_Item, TArray<class FString>& CallFunc_Map_Keys_Keys, const class FString& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, const class FString& K2Node_Event_ProfileId_1, TArray<class FString>& CallFunc_Map_Keys_Keys_1, const class FString& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, const class FString& K2Node_Event_ProfileId, TArray<class FString>& CallFunc_GetPartyMemberIds_OutIds_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& CallFunc_Array_Get_Item_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3);
};

}


