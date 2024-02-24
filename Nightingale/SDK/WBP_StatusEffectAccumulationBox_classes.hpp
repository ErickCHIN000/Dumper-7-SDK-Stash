#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x3A0 - 0x340)
// WidgetBlueprintGeneratedClass WBP_StatusEffectAccumulationBox.WBP_StatusEffectAccumulationBox_C
class UWBP_StatusEffectAccumulationBox_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          AccBox;                                            // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<struct FAccumulationHandle, class UWBP_StatusEffect_AccumulationBar_C*> Bars;                                              // 0x350(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UWBP_StatusEffectAccumulationBox_C* GetDefaultObj();

	void UpdateBar(struct FAccumulationHandle& Handle, float Value, class UWBP_StatusEffect_AccumulationBar_C* CurrentBar, class UWBP_StatusEffect_AccumulationBar_C* CallFunc_AddNewBar_ReturnValue, class UWBP_StatusEffect_AccumulationBar_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, double CallFunc_UpdateValue_NewProgress_ImplicitCast);
	class UWBP_StatusEffect_AccumulationBar_C* AddNewBar(const struct FAccumulationHandle& Handle, class UWBP_StatusEffect_AccumulationBar_C* NewBar, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IAccumulationAccessInterface> K2Node_DynamicCast_AsAccumulation_Access_Interface, bool K2Node_DynamicCast_bSuccess, class UWBP_StatusEffect_AccumulationBar_C* CallFunc_SpawnObject_ReturnValue, const struct FAccumulationUIData& CallFunc_TryGetAccumulationInstanceUIData_OutData, bool CallFunc_TryGetAccumulationInstanceUIData_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin);
	void SetupExistingHandles(TArray<struct FAccumulationHandle>& Handles, const struct FAccumulationHandle& CurrentHandle, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FAccumulationHandle& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IAccumulationAccessInterface> K2Node_DynamicCast_AsAccumulation_Access_Interface, bool K2Node_DynamicCast_bSuccess, float CallFunc_TryGetAccumulationInstanceValue_OutValue, bool CallFunc_TryGetAccumulationInstanceValue_ReturnValue);
	void Construct();
	void OnPawnPossessedAndReady(class APawn* NewPawn);
	void OnPawnUnpossessed(class APawn* OldPawn);
	void ExecuteUbergraph_WBP_StatusEffectAccumulationBox(int32 EntryPoint, class APawn* K2Node_Event_NewPawn, TScriptInterface<class IAccumulationAccessInterface> K2Node_DynamicCast_AsAccumulation_Access_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IAccumulationAccessInterface> K2Node_DynamicCast_AsAccumulation_Access_Interface_1, bool K2Node_DynamicCast_bSuccess_1, TArray<struct FAccumulationHandle>& CallFunc_TryGetAllAccumulationHandles_OutHandles, bool CallFunc_TryGetAllAccumulationHandles_ReturnValue, TScriptInterface<class IAccumulationAccessInterface> K2Node_DynamicCast_AsAccumulation_Access_Interface_2, bool K2Node_DynamicCast_bSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APawn* K2Node_Event_OldPawn);
};

}


