#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x378 - 0x348)
// WidgetBlueprintGeneratedClass WBP_FuelToggle.WBP_FuelToggle_C
class UWBP_FuelToggle_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Common_Button_Base_C*             but_Extinguish;                                    // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             but_Ignite;                                        // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       ButtonSwitcher;                                    // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AActor*                                StructureActor;                                    // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_StructureFuelComponent_C*          FuelComponent;                                     // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_FuelToggle_C* GetDefaultObj();

	void OnFuelUpdated(TArray<struct FInventoryEntry>& AppliedFuelItems);
	void UpdateIgniteButtonState(bool CallFunc_HasFuelAvailable_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnFuelConsumtionUpdated(bool ActivelyConsumed);
	void RemoveBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class INWXFuelableObserverInterface> CallFunc_UnbindDelegate_OnAppliedFuelItemsChanged_self_CastInput, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TScriptInterface<class INWXFuelableObserverInterface> CallFunc_UnbindDelegate_OnFuelActivelyConsumedChanged_self_CastInput);
	void SetupBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class INWXFuelableObserverInterface> CallFunc_BindDelegate_OnAppliedFuelItemsChanged_self_CastInput, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TScriptInterface<class INWXFuelableObserverInterface> CallFunc_BindDelegate_OnFuelActivelyConsumedChanged_self_CastInput);
	void Initialize(class ANWXPlayerController* PlayerController, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IControllerInteractionInterface> CallFunc_GetLastInteractedActor_self_CastInput, class AActor* CallFunc_GetLastInteractedActor_ReturnValue, bool CallFunc_IsDrainingFuel_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, TScriptInterface<class IBPI_SchematicInterfaces_C> K2Node_DynamicCast_AsBPI_Schematic_Interfaces, bool K2Node_DynamicCast_bSuccess, class UBP_StructureFuelComponent_C* CallFunc_GetFuelComponent_FuelComponent, bool CallFunc_IsValid_ReturnValue_2);
	void Construct();
	void Destruct();
	void BndEvt__WBP_FuelToggle_but_Ignite_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_FuelToggle_but_Extinguish_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_FuelToggle(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsDrainingFuel_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_GetIsEnabled_ReturnValue);
};

}


