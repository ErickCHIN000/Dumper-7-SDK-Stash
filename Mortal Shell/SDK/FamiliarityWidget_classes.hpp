#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB4 (0x2E4 - 0x230)
// WidgetBlueprintGeneratedClass FamiliarityWidget.FamiliarityWidget_C
class UFamiliarityWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_FamiliarityMaxed;                             // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UFamiliarityDiamond_C*                 FamiliarityDiamond_00;                             // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFamiliarityDiamond_C*                 FamiliarityDiamond_01;                             // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFamiliarityDiamond_C*                 FamiliarityDiamond_02;                             // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFamiliarityDiamond_C*                 FamiliarityDiamond_03;                             // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFamiliarityDiamond_C*                 FamiliarityDiamond_04;                             // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFamiliarityDiamond_C*                 FamiliarityDiamond_05;                             // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFamiliarityDiamond_C*                 FamiliarityDiamond_06;                             // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFamiliarityDiamond_C*                 FamiliarityDiamond_07;                             // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFamiliarityDiamond_C*                 FamiliarityDiamond_08;                             // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFamiliarityDiamond_C*                 FamiliarityDiamond_09;                             // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Diamonds_Frame;                              // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        OldDiamonds;                                       // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NewDiamonds;                                       // 0x29C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Counter;                                           // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsNotDynamic;                                      // 0x2A4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15E7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            LastDiamondFilled;                                 // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         DontPlayFamMaxed;                                  // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         AnimateLast_;                                      // 0x2B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15EF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            LastDiamondAppeared;                               // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            LastDiamondMaxed;                                  // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        Index;                                             // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UFamiliarityWidget_C* GetDefaultObj();

	void OnLastDiamondMaxed(int32 Index);
	void OnLastDiamondAppeared();
	void GetCurrentDiamond(class UFamiliarityDiamond_C** Output, TArray<class UFamiliarityDiamond_C*>& CallFunc_GetDiamonds_Array, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UFamiliarityDiamond_C* CallFunc_Array_Get_Item);
	void OnLastDiamondFIlled();
	void GetDiamonds(TArray<class UFamiliarityDiamond_C*>* Array, TArray<class UFamiliarityDiamond_C*>& K2Node_MakeArray_Array);
	void ResetDiamonds(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UFamiliarityDiamond_C*>& CallFunc_GetDiamonds_Array, class UFamiliarityDiamond_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void SetNumFilled(int32 OldDiamondsNumber, int32 NewDiamondsNumber, bool bAnimateLast);
	void PlayMaxedFamAnimation();
	void OnInitialized();
	void BndEvt__FamiliarityDiamond_09_K2Node_ComponentBoundEvent_0_OnMaxedAnimEnd__DelegateSignature(int32 Index);
	void ExecuteUbergraph_FamiliarityWidget(int32 EntryPoint, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, int32 K2Node_CustomEvent_OldDiamondsNumber, int32 K2Node_CustomEvent_NewDiamondsNumber, bool K2Node_CustomEvent_bAnimateLast, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_Clamp_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, TArray<class UFamiliarityDiamond_C*>& CallFunc_GetDiamonds_Array, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool Temp_bool_IsClosed_Variable, TArray<class UFamiliarityDiamond_C*>& CallFunc_GetDiamonds_Array_1, int32 Temp_int_Variable_2, class UFamiliarityDiamond_C* CallFunc_Array_Get_Item, class UFamiliarityDiamond_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UFamiliarityDiamond_C*>& CallFunc_GetDiamonds_Array_2, int32 CallFunc_Array_Length_ReturnValue, TArray<class UFamiliarityDiamond_C*>& CallFunc_GetDiamonds_Array_3, int32 CallFunc_Subtract_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue_3, class UFamiliarityDiamond_C* CallFunc_Array_Get_Item_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UFamiliarityDiamond_C* CallFunc_GetCurrentDiamond_Output, class UFamiliarityDiamond_C* CallFunc_GetCurrentDiamond_Output_1, class UFamiliarityDiamond_C* CallFunc_GetCurrentDiamond_Output_2, int32 Temp_int_Loop_Counter_Variable, int32 K2Node_ComponentBoundEvent_Index, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_3);
	void LastDiamondMaxed__DelegateSignature();
	void LastDiamondAppeared__DelegateSignature();
	void LastDiamondFilled__DelegateSignature();
};

}


