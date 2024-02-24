#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x3E8 - 0x348)
// WidgetBlueprintGeneratedClass WBP_NPC_Encounter_Escort.WBP_NPC_Encounter_Escort_C
class UWBP_NPC_Encounter_Escort_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Common_Button_Base_C*             CBU_button_base;                                   // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_SpeakerName;                                   // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Component_SoftEdge_Divider_C*     WBP_Component_SoftEdge_Divider_101;                // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_EncounterDetailsUpdater_C*        WBP_EncounterDetailsUpdater;                       // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AActor*                                NPC_Actor;                                         // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  Victorian_Name;                                    // 0x378(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_Creature_NPC_C*                    BP_Creature_NPC;                                   // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   S_Encounter_Data;                                  // 0x398(0x10)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                Encounter_Instance;                                // 0x3A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGuid                                 Encounter_Identifier;                              // 0x3B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            On_Encounter_Interaction;                          // 0x3C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FEncounterDynamicData>         DynamicData;                                       // 0x3D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_NPC_Encounter_Escort_C* GetDefaultObj();

	class UWidget* BP_GetDesiredFocusTarget();
	void GetEncounterButtonToFocus(class UWidget** Output);
	void SetupMenu();
	void BndEvt__WBP_NPC_Encounter_Escort_CBU_button_base_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void Construct();
	void ExecuteUbergraph_WBP_NPC_Encounter_Escort(int32 EntryPoint, class ABP_Creature_NPC_C* K2Node_DynamicCast_AsBP_Creature_NPC, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_GuidToString_ReturnValue, bool CallFunc_IsValid_Guid_ReturnValue, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class ABP_Creature_NPC_C* K2Node_DynamicCast_AsBP_Creature_NPC_1, bool K2Node_DynamicCast_bSuccess_1, class UBP_QuestGiverComponent_C* CallFunc_GetComponentByClass_ReturnValue, class UEncounterProgressTracker* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, TArray<struct FEncounterDynamicData>& CallFunc_GetAllDynamicData_OutData, bool CallFunc_IsValid_ReturnValue_1, class ABP_Creature_NPC_C* K2Node_DynamicCast_AsBP_Creature_NPC_2, bool K2Node_DynamicCast_bSuccess_2, int32 Temp_int_Loop_Counter_Variable, class FText CallFunc_GetNPCNameText_NPCName, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, const struct FEncounterDynamicData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UDA_EncounterDetailsDataAsset_C* K2Node_DynamicCast_AsDA_Encounter_Details_Data_Asset, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsValid_ReturnValue_3, class UEncounterProgressTracker* CallFunc_GetComponentByClass_ReturnValue_2);
	void On_Encounter_Interaction__DelegateSignature();
};

}


