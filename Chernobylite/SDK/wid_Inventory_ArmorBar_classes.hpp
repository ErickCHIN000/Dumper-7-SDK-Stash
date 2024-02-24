#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x27C - 0x260)
// WidgetBlueprintGeneratedClass wid_Inventory_ArmorBar.wid_Inventory_ArmorBar_C
class UWid_Inventory_ArmorBar_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UProgressBar*                          ArmorProgressBar;                                  // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         ValueUpdated;                                      // 0x270(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_227A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DesiredValue;                                      // 0x274(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentValue;                                      // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_Inventory_ArmorBar_C* GetDefaultObj();

	int32 GetHPStagesBonus(class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_GetUIBarSegments_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void SetValue(float Value, bool IsInstant, TArray<float>& K2Node_MakeArray_Array, int32 CallFunc_FTrunc_ReturnValue, int32 Temp_int_Variable, TArray<float>& K2Node_MakeArray_Array_1, int32 CallFunc_GetHPStagesBonus_ReturnValue, TArray<float>& K2Node_MakeArray_Array_2, TArray<float>& K2Node_Select_Default, float CallFunc_Array_Get_Item);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_wid_Inventory_ArmorBar(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_FInterpTo_Constant_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue);
};

}


