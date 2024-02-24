#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE0 (0x420 - 0x340)
// WidgetBlueprintGeneratedClass WBP_EncounterDetailsUpdater.WBP_EncounterDetailsUpdater_C
class UWBP_EncounterDetailsUpdater_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_MainPanelUpdate_Reset;                        // 0x348(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_FadePanel;                                    // 0x350(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_MainPanelUpdate_Outro;                        // 0x358(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_MainPanelUpdate_Intro;                        // 0x360(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Img_banner;                                        // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_description;                                   // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_Encountername;                                 // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_EncounterTask_state;                           // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_Faction;                                       // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class E_hud_DetailMode                  DetailedMode;                                      // 0x390(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4667[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Notification_TimeToDisplay;                        // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FNotificationEncounter                Last_Notify;                                       // 0x3A0(0x60)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGuid                                 EncounterIntanceID;                                // 0x400(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IEncounterUIDataInterface> Encounter_Data;                                    // 0x410(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_EncounterDetailsUpdater_C* GetDefaultObj();

	void GetEncounterDetailsViaInstanceID(const struct FGuid& EncounterInstance, bool* Success, struct FS_Encounter_UI_Details* Details, const TArray<struct FEncounterDynamicData>& DynamicData, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FEncounterDynamicData& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_GuidGuid_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UDA_EncounterDetailsDataAsset_C* K2Node_DynamicCast_AsDA_Encounter_Details_Data_Asset, bool K2Node_DynamicCast_bSuccess, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, class UEncounterProgressTracker* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<struct FEncounterDynamicData>& CallFunc_GetAllDynamicData_OutData);
	void SetupUIDataFromStruct(struct FS_Encounter_UI_Details& S_Encounter_UI_Details, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, bool Temp_bool_Variable, class FText CallFunc_Format_ReturnValue_1, bool CallFunc_EqualEqual_TextText_ReturnValue, class FText K2Node_Select_Default);
	void PlayNotificationUpdate(TScriptInterface<class IEncounterUIDataInterface> EncounterData, const struct FNotificationEncounter& Notification);
	void PlayNofication_Outro();
	void HidePanel();
	void ShowPanel_HoverEncounter(TScriptInterface<class IEncounterUIDataInterface> EncounterData);
	void PlayNotifcation_Intro();
	void RefreshEncounterPane(TScriptInterface<class IEncounterUIDataInterface> EncounterData, const class FString& EncounterInstanceID);
	void ResetPanelAfterAnim();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void RefreshViaEncounterID(const struct FGuid& EncounterInstanceID);
	void ExecuteUbergraph_WBP_EncounterDetailsUpdater(int32 EntryPoint, bool CallFunc_GetEncounterDetailsViaInstanceID_Success, const struct FS_Encounter_UI_Details& CallFunc_GetEncounterDetailsViaInstanceID_Details, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, TScriptInterface<class IEncounterUIDataInterface> K2Node_CustomEvent_EncounterData_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, TScriptInterface<class IEncounterUIDataInterface> K2Node_CustomEvent_EncounterData, const class FString& K2Node_CustomEvent_EncounterInstanceID_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UEncounterDetailsDataAssetBase* CallFunc_GetEncounterDetailsDataAsset_EncounterDetailsAsset, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, class UDA_EncounterDetailsDataAsset_C* K2Node_DynamicCast_AsDA_Encounter_Details_Data_Asset, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, TScriptInterface<class IEncounterUIDataInterface> K2Node_CustomEvent_EncounterData_2, const struct FNotificationEncounter& K2Node_CustomEvent_Notification, bool K2Node_Event_IsDesignTime, const struct FGuid& K2Node_CustomEvent_EncounterInstanceID, float CallFunc_Delay_Duration_ImplicitCast);
};

}


