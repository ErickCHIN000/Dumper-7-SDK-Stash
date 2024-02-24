#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x540 - 0x4B8)
// WidgetBlueprintGeneratedClass WBP_DB_Shard_sw_DeploymentSelect.WBP_DB_Shard_sw_DeploymentSelect_C
class UWBP_DB_Shard_sw_DeploymentSelect_C : public UNWXCommonWindowWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Cancel_LoadingAnim;                                // 0x4C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      LoadingAnim;                                       // 0x4C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_Cancel;                                        // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_Default;                                       // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_Sanctuary;                                     // 0x4E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCircularThrobber*                     CircularThrobber_71;                               // 0x4E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          LaunchDeploymentBox;                               // 0x4F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FDeployment>                   Deployments;                                       // 0x4F8(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_            DeploymentSelected;                                // 0x508(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UVerticalBox*                          TargetBox;                                         // 0x518(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            SelectDeploymentCancelled;                         // 0x520(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            SanctuarySelected;                                 // 0x530(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_DB_Shard_sw_DeploymentSelect_C* GetDefaultObj();

	class UWidget* BP_GetDesiredFocusTarget();
	class UWidget* GetDefaultFocusWidget();
	void Construct();
	void OnDeploymentSelected(const struct FDeployment& Deployment);
	void BndEvt__WBP_DB_Shard_sw_DeploymentSelect_WBP_Default_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_DB_Shard_sw_DeploymentSelect_WBP_Sanctuary_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_DB_Shard_sw_DeploymentSelect_WBP_Cancel_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_DB_Shard_sw_DeploymentSelect(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWBP_DB_Deploy_ListEntry_C* CallFunc_Create_ReturnValue, const struct FDeployment& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FDeployment& K2Node_CustomEvent_Deployment, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, const struct FDeployment& K2Node_MakeStruct_Deployment, int32 Temp_int_Loop_Counter_Variable, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1);
	void SanctuarySelected__DelegateSignature();
	void SelectDeploymentCancelled__DelegateSignature();
	void DeploymentSelected__DelegateSignature(const struct FDeployment& Deployment);
};

}


