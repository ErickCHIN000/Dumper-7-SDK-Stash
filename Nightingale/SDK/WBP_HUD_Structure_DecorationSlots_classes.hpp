#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x368 - 0x348)
// WidgetBlueprintGeneratedClass WBP_HUD_Structure_DecorationSlots.WBP_HUD_Structure_DecorationSlots_C
class UWBP_HUD_Structure_DecorationSlots_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_FadeIntro;                                    // 0x350(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWrapBox*                              SlotsBox;                                          // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UObject*                               ResourceManagerOwner;                              // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_HUD_Structure_DecorationSlots_C* GetDefaultObj();

	void InitializeDesignerPreview(int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UWBP_HUD_Structure_DecorationSlot_Entry_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void OnStructureSlotsChanged();
	void RemoveBindings(TScriptInterface<class IStructureSlotsInterface> K2Node_DynamicCast_AsStructure_Slots_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UStructureSlotsComponent* CallFunc_GetStructureSlotsComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void SetupBindings(bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IStructureSlotsInterface> K2Node_DynamicCast_AsStructure_Slots_Interface, bool K2Node_DynamicCast_bSuccess, class UStructureSlotsComponent* CallFunc_GetStructureSlotsComponent_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_1);
	void Refresh(uint8 LNumSlots, const TArray<class AActor*>& LSlottedStructures, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UWBP_HUD_Structure_DecorationSlot_Entry_C* CallFunc_Create_ReturnValue, class AActor* CallFunc_Array_Get_Item, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, class ANWXStructure* K2Node_DynamicCast_AsNWXStructure, bool K2Node_DynamicCast_bSuccess, class UWBP_HUD_Structure_DecorationSlot_Entry_C* CallFunc_Create_ReturnValue_1, uint8 CallFunc_GetStructureSlotInformation_OutNumSlots, TArray<class AActor*>& CallFunc_GetStructureSlotInformation_OutSlottedStructures, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue);
	void UpdateResourceManager(class UObject* ResourceManagerOwner, bool CallFunc_IsValid_ReturnValue);
	void Destruct();
	void ExecuteUbergraph_WBP_HUD_Structure_DecorationSlots(int32 EntryPoint);
};

}


