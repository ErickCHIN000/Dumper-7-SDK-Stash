#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x2C0 - 0x260)
// WidgetBlueprintGeneratedClass UMG_OpenWorldSelection.UMG_OpenWorldSelection_C
class UUMG_OpenWorldSelection_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUMG_BasicButton_2_C*                  BackButton;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Terrains;                            // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Noise;                                             // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Pattern;                                           // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_OpenWorldButton_C*                UMG_OpenWorldButton_OLY;                           // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_OpenWorldButton_C*                UMG_OpenWorldButton_PRO;                           // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_OpenWorldButton_C*                UMG_OpenWorldButton_STYX;                          // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OpenWorldProspectSelected;                         // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            BackButtonPressed;                                 // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UUMG_OpenWorldSelection_C* GetDefaultObj();

	void Construct();
	void BndEvt__UMG_TerrainSelection_DevelopmentProspects_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button);
	void OpenWorldSelected(const struct FProspectListRowHandle& Prospect);
	void BndEvt__UMG_OpenWorldSelection_UMG_OpenWorldButton_PRO_K2Node_ComponentBoundEvent_0_ProspectSelected__DelegateSignature(const struct FProspectListRowHandle& Prospect);
	void BndEvt__UMG_OpenWorldSelection_UMG_OpenWorldButton_STYX_K2Node_ComponentBoundEvent_2_ProspectSelected__DelegateSignature(const struct FProspectListRowHandle& Prospect);
	void ExecuteUbergraph_UMG_OpenWorldSelection(int32 EntryPoint, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, int32 Temp_int_Array_Index_Variable, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button, int32 Temp_int_Loop_Counter_Variable, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UUMG_OpenWorldButton_C* K2Node_DynamicCast_AsUMG_Open_World_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FProspectListRowHandle& K2Node_CustomEvent_Prospect, const struct FProspectListRowHandle& K2Node_ComponentBoundEvent_Prospect_1, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_1, const struct FProspectListRowHandle& K2Node_ComponentBoundEvent_Prospect);
	void BackButtonPressed__DelegateSignature();
	void OpenWorldProspectSelected__DelegateSignature(const struct FProspectListRowHandle& Prospect);
};

}


