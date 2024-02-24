#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x258 - 0x230)
// WidgetBlueprintGeneratedClass Resolve.Resolve_C
class UResolve_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      NotEnoughResolve;                                  // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                        ResolveBarContainer;                               // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResolveSegment_C*                     ResolveSegment;                                    // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UResolveSegment_C*                     ResolveSegment_C_1;                                // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UResolve_C* GetDefaultObj();

	void SetCurrentResolve(float InResolve);
	void SetMaxResolve(int32 NewMaxResolve);
	void OnIncompleteResolveSegmentDrained(int32 Segment);
	void OnNotEnoughResolve();
	void ExecuteUbergraph_Resolve(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, float CallFunc_Conv_IntToFloat_ReturnValue, float K2Node_CustomEvent_InResolve, int32 K2Node_CustomEvent_NewMaxResolve, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_FClamp_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UResolveSegment_C* CallFunc_Create_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1, int32 K2Node_CustomEvent_Segment, class UWidget* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class UResolveSegment_C* K2Node_DynamicCast_AsResolve_Segment, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Variable, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_2, class UWidget* CallFunc_Array_Get_Item_2, bool CallFunc_Array_IsValidIndex_ReturnValue, class UResolveSegment_C* K2Node_DynamicCast_AsResolve_Segment_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
};

}


