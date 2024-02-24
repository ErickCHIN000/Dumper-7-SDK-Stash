#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x390 - 0x340)
// WidgetBlueprintGeneratedClass WBP_Waypoint_GameSpaceLocator.WBP_Waypoint_GameSpaceLocator_C
class UWBP_Waypoint_GameSpaceLocator_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_0;                                          // 0x348(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Distance;                                          // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Arrow;                                         // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                WaypointMarker;                                    // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   Waypoint_Type;                                     // 0x368(0x10)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  Hover_Label;                                       // 0x378(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_Waypoint_GameSpaceLocator_C* GetDefaultObj();

	class UWidget* Tooltip(class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue);
	void UpdateVisibility(bool CallFunc_IsGamespaceUIEnabled_GamespaceUIEnabled, double CallFunc_Get_Distance_Text_From_Waypoint_DistanceTo, double CallFunc_MapRangeClamped_ReturnValue, int32 CallFunc_Round_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast);
	void OnLoaded_3C44DDE7438B3723852FB4BF63F23F55(class UObject* Loaded);
	void Construct();
	void Destruct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ClientIsReady();
	void ExecuteUbergraph_WBP_Waypoint_GameSpaceLocator(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* Temp_object_Variable, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesDataTableRowExist_ReturnValue, const struct FMapWaypointInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, class UObject* K2Node_CustomEvent_Loaded, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class UBP_UI_PersistenceComponent_C* CallFunc_GetComponentByClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UBP_UI_PersistenceComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState_2, bool CallFunc_IsValid_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class AGameStateBase* CallFunc_GetGameState_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class ANWXGameStateBase* K2Node_DynamicCast_AsNWXGame_State_Base, bool K2Node_DynamicCast_bSuccess_1, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState_3, bool CallFunc_IsValid_ReturnValue_1);
};

}


